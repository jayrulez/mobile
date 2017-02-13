#include "servant/AsyncProcThread.h"
#include "servant/Communicator.h"
#include "servant/StatReport.h"
#include "log/taf_logger.h"

namespace taf
{
/////////////////////////////////////////////////////////////////////////
AsyncProcThread::AsyncProcThread(Communicator* comm) 
: _terminate(false)
, _comm(comm)
{
}

AsyncProcThread::~AsyncProcThread()
{
    terminate();
}

void AsyncProcThread::terminate()
{
    _terminate = true;

    for (uint32_t i = 0; i < _runners.size(); ++i)
    {
        if (_runners[i]->isAlive())
        {
            _runners[i]->terminate();

    		_queue.notifyT();
        }
    }

    for (uint32_t i = 0; i < _runners.size(); ++i)
    {
        if(_runners[i]->isAlive())
        {
            _runners[i]->getThreadControl().join();
        }
    }

    _queue.clear();
}

void AsyncProcThread::start(int n)
{
    for (int i = 0; i < n; ++i)
    {
        AsyncProcThreadRunnerPtr r = new AsyncProcThreadRunner(this);

        r->start();

        _runners.push_back(r);
    }
}

void AsyncProcThread::put(const ReqMessagePtr& req)
{
    if (!_terminate && req && req->callback)
    {
        //如果没有响应包，则当做超时处理
        if (req->response.iVersion == -1)
        {
            req->response.iVersion = req->request.iVersion;

            req->response.cPacketType = req->request.cPacketType;

            req->response.iRequestId = req->request.iRequestId;

            req->response.iRet = JCEASYNCCALLTIMEOUT;
        }

        if (req->adapter && req->proxy)
        {
            int ret = StatReport::STAT_EXCE;

            if (req->response.iRet == JCESERVERSUCCESS)
            {
                ret = StatReport::STAT_SUCC;
            }
            else if (req->response.iRet == JCEASYNCCALLTIMEOUT)
            {
                ret = StatReport::STAT_TIMEOUT;
            }

            _comm->reportToStat(req, req->proxy->taf_name(), ret);
        }

        _queue.push_back(req);
    }
}

bool AsyncProcThread::pop(ReqMessagePtr& req)
{
    return _queue.pop_front(req, 1000);
}

/////////////////////////////////////////////////////////////////////////

AsyncProcThreadRunner::AsyncProcThreadRunner(AsyncProcThread* proc)
: _terminate(false)
, _proc(proc)
, _timeLastReport(0)
{
}

void AsyncProcThreadRunner::terminate()
{
    _terminate = true;
}

void AsyncProcThreadRunner::report()
{
    time_t fcur = TC_TimeProvider::getInstance()->getNow();

    size_t n = _proc->_queue.size();

    //10秒上报一次异步回调队列的数据长度
    if (fcur - _timeLastReport < 10 || n <= 0) 
    {
        return;
    }

    _timeLastReport = fcur;

    string queueName = _proc->_comm->getProperty("modulename") + ".asyncqueue";

    PropertyReportPtr queuePtr  = _proc->_comm->getStatReport()->getPropertyReport(queueName);

    if (queuePtr) 
	{	
		queuePtr->report(n);
	}
}

void AsyncProcThreadRunner::run()
{
    while (!_terminate)
    {
        ReqMessagePtr req = NULL;

        //上报异步回调队列的长度
        report();

        //异步请求回来的响应包处理
        if (_proc->pop(req) && !_terminate && req && req->callback)
        {
            //统计和上报异步处理结果
            if (req->adapter)
            {
				bool ret = (req->response.iRet == JCESERVERSUCCESS ? false : true);

				req->adapter->finishInvoke(ret);
            }

            //从回调对象把线程私有数据传递到回调线程中
            ServantProxyThreadData* td = ServantProxyThreadData::getData();

            if (td)
            {
                td->data(req->callback->getPrivateData());

                if (req->adapter)
                {
                    snprintf(td->data()->_szHost, sizeof(td->data()->_szHost), "%s", req->adapter->endpoint().desc().c_str());
                }
            }

            try
            {
                //异步响应的业务逻辑处理
                TafDyeingSwitch dyeSwitch;

                if (td && td->data()->_bDyeing)
                {
                    dyeSwitch.enableDyeing(td->data()->_dyeingKey);
                }

                req->callback->onDispatch(req);
            }
            catch (exception& e)
            {
                LOG->error() << "[TAF][AsyncProcThread exception]:" << e.what() << endl;
            }
            catch (...)
            {
                LOG->error() << "[TAF][AsyncProcThread exception.]" << endl;
            }
        }
    }
}
/////////////////////////////////////////////////////////////////////////
}
