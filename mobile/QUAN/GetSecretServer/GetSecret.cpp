// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3.
// Generated from `GetSecret.jce'
// **********************************************************************

#include "GetSecret.h"
#include "jce/wup.h"
#include "servant/BaseF.h"

using namespace wup;

namespace QUAN
{

    taf::Int32 GetSecretProxy::feedBack(const QUAN::FeedBackReq &tReq, QUAN::FeedBackRsp &tRsp, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        _os.write(tRsp, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"feedBack", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(tRsp, 2, true);
        return _ret;
    }

    void GetSecret::async_response_feedBack(taf::JceCurrentPtr current, taf::Int32 _ret, const QUAN::FeedBackRsp &tRsp)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("tRsp", tRsp);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(tRsp, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void GetSecretProxy::async_feedBack(GetSecretPrxCallbackPtr callback,const QUAN::FeedBackReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"feedBack", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 GetSecretProxy::getSecretList(const QUAN::SecretListReq &tReq, QUAN::SecretListRsp &tRsp, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        _os.write(tRsp, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"getSecretList", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(tRsp, 2, true);
        return _ret;
    }

    void GetSecret::async_response_getSecretList(taf::JceCurrentPtr current, taf::Int32 _ret, const QUAN::SecretListRsp &tRsp)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("tRsp", tRsp);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(tRsp, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void GetSecretProxy::async_getSecretList(GetSecretPrxCallbackPtr callback,const QUAN::SecretListReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"getSecretList", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 GetSecretProxy::getSystemList(const QUAN::SystemListReq &tReq, QUAN::SystemListRsp &tRsp, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        _os.write(tRsp, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"getSystemList", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(tRsp, 2, true);
        return _ret;
    }

    void GetSecret::async_response_getSystemList(taf::JceCurrentPtr current, taf::Int32 _ret, const QUAN::SystemListRsp &tRsp)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("tRsp", tRsp);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(tRsp, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void GetSecretProxy::async_getSystemList(GetSecretPrxCallbackPtr callback,const QUAN::SystemListReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"getSystemList", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 GetSecretProxy::getUserSingleSecret(const QUAN::SglSecretReq &tReq, QUAN::SglSecretRsp &tRsp, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        _os.write(tRsp, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"getUserSingleSecret", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(tRsp, 2, true);
        return _ret;
    }

    void GetSecret::async_response_getUserSingleSecret(taf::JceCurrentPtr current, taf::Int32 _ret, const QUAN::SglSecretRsp &tRsp)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("tRsp", tRsp);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(tRsp, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void GetSecretProxy::async_getUserSingleSecret(GetSecretPrxCallbackPtr callback,const QUAN::SglSecretReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"getUserSingleSecret", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 GetSecretProxy::setUserSecretShare(const QUAN::ShareSecretReq &tReq, QUAN::ShareSecretRsp &tRsp, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        _os.write(tRsp, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"setUserSecretShare", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(tRsp, 2, true);
        return _ret;
    }

    void GetSecret::async_response_setUserSecretShare(taf::JceCurrentPtr current, taf::Int32 _ret, const QUAN::ShareSecretRsp &tRsp)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("tRsp", tRsp);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(tRsp, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void GetSecretProxy::async_setUserSecretShare(GetSecretPrxCallbackPtr callback,const QUAN::ShareSecretReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"setUserSecretShare", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 GetSecretProxy::setUserSecretToCache(const QUAN::UserSecretCacheReq &tReq, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"setUserSecretToCache", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void GetSecret::async_response_setUserSecretToCache(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void GetSecretProxy::async_setUserSecretToCache(GetSecretPrxCallbackPtr callback,const QUAN::UserSecretCacheReq &tReq,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(tReq, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"setUserSecretToCache", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 GetSecretProxy::test(taf::Int64 id, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(id, 1);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"test", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        return _ret;
    }

    void GetSecret::async_response_test(taf::JceCurrentPtr current, taf::Int32 _ret)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void GetSecretProxy::async_test(GetSecretPrxCallbackPtr callback,taf::Int64 id,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(id, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"test", _os.getByteBuffer(), context, _mStatus, callback);
    }

    GetSecretProxy* GetSecretProxy::taf_hash(int64_t key)
    {
        return (GetSecretProxy*)ServantProxy::taf_hash(key);
    }

    static ::std::string __QUAN__GetSecret_all[]=
    {
        "feedBack",
        "getSecretList",
        "getSystemList",
        "getUserSingleSecret",
        "setUserSecretShare",
        "setUserSecretToCache",
        "test"
    };

    int GetSecretPrxCallback::onDispatch(taf::ReqMessagePtr msg)
    {
        pair<string*, string*> r = equal_range(__QUAN__GetSecret_all, __QUAN__GetSecret_all+7, msg->request.sFuncName);
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __QUAN__GetSecret_all)
        {
            case 0:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_feedBack_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                QUAN::FeedBackRsp tRsp;
                _is.read(tRsp, 2, true);
                callback_feedBack(_ret, tRsp);
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_getSecretList_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                QUAN::SecretListRsp tRsp;
                _is.read(tRsp, 2, true);
                callback_getSecretList(_ret, tRsp);
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_getSystemList_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                QUAN::SystemListRsp tRsp;
                _is.read(tRsp, 2, true);
                callback_getSystemList(_ret, tRsp);
                return taf::JCESERVERSUCCESS;

            }
            case 3:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_getUserSingleSecret_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                QUAN::SglSecretRsp tRsp;
                _is.read(tRsp, 2, true);
                callback_getUserSingleSecret(_ret, tRsp);
                return taf::JCESERVERSUCCESS;

            }
            case 4:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_setUserSecretShare_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                QUAN::ShareSecretRsp tRsp;
                _is.read(tRsp, 2, true);
                callback_setUserSecretShare(_ret, tRsp);
                return taf::JCESERVERSUCCESS;

            }
            case 5:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_setUserSecretToCache_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_setUserSecretToCache(_ret);
                return taf::JCESERVERSUCCESS;

            }
            case 6:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_test_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                callback_test(_ret);
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }

    int GetSecret::onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer)
    {
        pair<string*, string*> r = equal_range(__QUAN__GetSecret_all, __QUAN__GetSecret_all+7, _current->getFuncName());
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __QUAN__GetSecret_all)
        {
            case 0:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::FeedBackReq tReq;
                QUAN::FeedBackRsp tRsp;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                    tafAttr.getByDefault("tRsp", tRsp, tRsp);
                }
                else
                {
                    _is.read(tReq, 1, true);
                    _is.read(tRsp, 2, false);
                }
                taf::Int32 _ret = feedBack(tReq,tRsp, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("tRsp", tRsp);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(tRsp, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::SecretListReq tReq;
                QUAN::SecretListRsp tRsp;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                    tafAttr.getByDefault("tRsp", tRsp, tRsp);
                }
                else
                {
                    _is.read(tReq, 1, true);
                    _is.read(tRsp, 2, false);
                }
                taf::Int32 _ret = getSecretList(tReq,tRsp, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("tRsp", tRsp);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(tRsp, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::SystemListReq tReq;
                QUAN::SystemListRsp tRsp;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                    tafAttr.getByDefault("tRsp", tRsp, tRsp);
                }
                else
                {
                    _is.read(tReq, 1, true);
                    _is.read(tRsp, 2, false);
                }
                taf::Int32 _ret = getSystemList(tReq,tRsp, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("tRsp", tRsp);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(tRsp, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 3:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::SglSecretReq tReq;
                QUAN::SglSecretRsp tRsp;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                    tafAttr.getByDefault("tRsp", tRsp, tRsp);
                }
                else
                {
                    _is.read(tReq, 1, true);
                    _is.read(tRsp, 2, false);
                }
                taf::Int32 _ret = getUserSingleSecret(tReq,tRsp, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("tRsp", tRsp);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(tRsp, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 4:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::ShareSecretReq tReq;
                QUAN::ShareSecretRsp tRsp;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                    tafAttr.getByDefault("tRsp", tRsp, tRsp);
                }
                else
                {
                    _is.read(tReq, 1, true);
                    _is.read(tRsp, 2, false);
                }
                taf::Int32 _ret = setUserSecretShare(tReq,tRsp, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("tRsp", tRsp);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(tRsp, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 5:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                QUAN::UserSecretCacheReq tReq;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("tReq", tReq);
                }
                else
                {
                    _is.read(tReq, 1, true);
                }
                taf::Int32 _ret = setUserSecretToCache(tReq, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 6:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                taf::Int64 id;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("id", id);
                }
                else
                {
                    _is.read(id, 1, true);
                }
                taf::Int32 _ret = test(id, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }


}

