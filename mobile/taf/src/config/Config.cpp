// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.5.7
// Generated from `Config.jce'
// **********************************************************************

#include "Config.h"
#include "jce/wup.h"
#include "servant/BaseF.h"

using namespace wup;

namespace taf
{

    taf::Int32 ConfigProxy::ListConfig(const std::string &app, const std::string &server, vector<std::string> &vf, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(app, 1);
        _os.write(server, 2);
        _os.write(vf, 3);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"ListConfig", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(vf, 3, true);
        return _ret;
    }

    void Config::async_response_ListConfig(taf::JceCurrentPtr current, taf::Int32 _ret, const vector<std::string> &vf)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("vf", vf);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(vf, 3);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void ConfigProxy::async_ListConfig(ConfigPrxCallbackPtr callback,const std::string &app,const std::string &server,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(app, 1);
        _os.write(server, 2);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"ListConfig", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 ConfigProxy::ListConfigByInfo(const taf::ConfigInfo &configInfo, vector<std::string> &vf, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(configInfo, 1);
        _os.write(vf, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"ListConfigByInfo", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(vf, 2, true);
        return _ret;
    }

    void Config::async_response_ListConfigByInfo(taf::JceCurrentPtr current, taf::Int32 _ret, const vector<std::string> &vf)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("vf", vf);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(vf, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void ConfigProxy::async_ListConfigByInfo(ConfigPrxCallbackPtr callback,const taf::ConfigInfo &configInfo,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(configInfo, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"ListConfigByInfo", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 ConfigProxy::checkConfig(const std::string &appServerName, const std::string &filename, const std::string &host, std::string &result, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(appServerName, 1);
        _os.write(filename, 2);
        _os.write(host, 3);
        _os.write(result, 4);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"checkConfig", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(result, 4, true);
        return _ret;
    }

    void Config::async_response_checkConfig(taf::JceCurrentPtr current, taf::Int32 _ret, const std::string &result)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("result", result);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(result, 4);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void ConfigProxy::async_checkConfig(ConfigPrxCallbackPtr callback,const std::string &appServerName,const std::string &filename,const std::string &host,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(appServerName, 1);
        _os.write(filename, 2);
        _os.write(host, 3);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"checkConfig", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 ConfigProxy::checkConfigByInfo(const taf::ConfigInfo &configInfo, std::string &result, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(configInfo, 1);
        _os.write(result, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"checkConfigByInfo", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(result, 2, true);
        return _ret;
    }

    void Config::async_response_checkConfigByInfo(taf::JceCurrentPtr current, taf::Int32 _ret, const std::string &result)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("result", result);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(result, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void ConfigProxy::async_checkConfigByInfo(ConfigPrxCallbackPtr callback,const taf::ConfigInfo &configInfo,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(configInfo, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"checkConfigByInfo", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 ConfigProxy::loadConfig(const std::string &app, const std::string &server, const std::string &filename, std::string &config, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(app, 1);
        _os.write(server, 2);
        _os.write(filename, 3);
        _os.write(config, 4);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"loadConfig", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(config, 4, true);
        return _ret;
    }

    void Config::async_response_loadConfig(taf::JceCurrentPtr current, taf::Int32 _ret, const std::string &config)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("config", config);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(config, 4);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void ConfigProxy::async_loadConfig(ConfigPrxCallbackPtr callback,const std::string &app,const std::string &server,const std::string &filename,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(app, 1);
        _os.write(server, 2);
        _os.write(filename, 3);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"loadConfig", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 ConfigProxy::loadConfigByHost(const std::string &appServerName, const std::string &filename, const std::string &host, std::string &config, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(appServerName, 1);
        _os.write(filename, 2);
        _os.write(host, 3);
        _os.write(config, 4);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"loadConfigByHost", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(config, 4, true);
        return _ret;
    }

    void Config::async_response_loadConfigByHost(taf::JceCurrentPtr current, taf::Int32 _ret, const std::string &config)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("config", config);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(config, 4);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void ConfigProxy::async_loadConfigByHost(ConfigPrxCallbackPtr callback,const std::string &appServerName,const std::string &filename,const std::string &host,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(appServerName, 1);
        _os.write(filename, 2);
        _os.write(host, 3);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"loadConfigByHost", _os.getByteBuffer(), context, _mStatus, callback);
    }

    taf::Int32 ConfigProxy::loadConfigByInfo(const taf::ConfigInfo &configInfo, std::string &config, const map<string, string> &context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(configInfo, 1);
        _os.write(config, 2);
        taf::ResponsePacket rep;
        std::map<string, string> _mStatus;
        taf_invoke(taf::JCENORMAL,"loadConfigByInfo", _os.getByteBuffer(), context, _mStatus, rep);
        taf::JceInputStream<taf::BufferReader> _is;
        _is.setBuffer(rep.sBuffer);
        taf::Int32 _ret;
        _is.read(_ret, 0, true);
        _is.read(config, 2, true);
        return _ret;
    }

    void Config::async_response_loadConfigByInfo(taf::JceCurrentPtr current, taf::Int32 _ret, const std::string &config)
    {
        if (current->getRequestVersion() == WUPVERSION || current->getRequestVersion() == WUPVERSION2)
        {
            UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
            tafAttr.setVersion(current->getRequestVersion());
            tafAttr.put("", _ret);
            tafAttr.put("config", config);

            vector<char> sWupResponseBuffer;
            tafAttr.encode(sWupResponseBuffer);
            current->sendResponse(taf::JCESERVERSUCCESS, sWupResponseBuffer);
        }
        else
        {
            taf::JceOutputStream<taf::BufferWriter> _os;
            _os.write(_ret, 0);

            _os.write(config, 2);

            current->sendResponse(taf::JCESERVERSUCCESS, _os.getByteBuffer());
        }
    }

    void ConfigProxy::async_loadConfigByInfo(ConfigPrxCallbackPtr callback,const taf::ConfigInfo &configInfo,const map<string, string>& context)
    {
        taf::JceOutputStream<taf::BufferWriter> _os;
        _os.write(configInfo, 1);
        std::map<string, string> _mStatus;
        taf_invoke_async(taf::JCENORMAL,"loadConfigByInfo", _os.getByteBuffer(), context, _mStatus, callback);
    }

    ConfigProxy* ConfigProxy::taf_hash(int64_t key)
    {
        return (ConfigProxy*)ServantProxy::taf_hash(key);
    }

    static ::std::string __taf__Config_all[]=
    {
        "ListConfig",
        "ListConfigByInfo",
        "checkConfig",
        "checkConfigByInfo",
        "loadConfig",
        "loadConfigByHost",
        "loadConfigByInfo"
    };

    int ConfigPrxCallback::onDispatch(taf::ReqMessagePtr msg)
    {
        pair<string*, string*> r = equal_range(__taf__Config_all, __taf__Config_all+7, msg->request.sFuncName);
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __taf__Config_all)
        {
            case 0:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_ListConfig_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                vector<std::string> vf;
                _is.read(vf, 3, true);
                callback_ListConfig(_ret, vf);
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_ListConfigByInfo_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                vector<std::string> vf;
                _is.read(vf, 2, true);
                callback_ListConfigByInfo(_ret, vf);
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_checkConfig_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                std::string result;
                _is.read(result, 4, true);
                callback_checkConfig(_ret, result);
                return taf::JCESERVERSUCCESS;

            }
            case 3:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_checkConfigByInfo_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                std::string result;
                _is.read(result, 2, true);
                callback_checkConfigByInfo(_ret, result);
                return taf::JCESERVERSUCCESS;

            }
            case 4:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_loadConfig_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                std::string config;
                _is.read(config, 4, true);
                callback_loadConfig(_ret, config);
                return taf::JCESERVERSUCCESS;

            }
            case 5:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_loadConfigByHost_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                std::string config;
                _is.read(config, 4, true);
                callback_loadConfigByHost(_ret, config);
                return taf::JCESERVERSUCCESS;

            }
            case 6:
            {
                if (msg->response.iRet != taf::JCESERVERSUCCESS)
                {
                    callback_loadConfigByInfo_exception(msg->response.iRet);

                    return msg->response.iRet;
                }
                taf::JceInputStream<taf::BufferReader> _is;

                _is.setBuffer(msg->response.sBuffer);
                taf::Int32 _ret;
                _is.read(_ret, 0, true);

                std::string config;
                _is.read(config, 2, true);
                callback_loadConfigByInfo(_ret, config);
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }

    int Config::onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer)
    {
        pair<string*, string*> r = equal_range(__taf__Config_all, __taf__Config_all+7, _current->getFuncName());
        if(r.first == r.second) return taf::JCESERVERNOFUNCERR;
        switch(r.first - __taf__Config_all)
        {
            case 0:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                std::string app;
                std::string server;
                vector<std::string> vf;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("app", app);
                    tafAttr.get("server", server);
                    tafAttr.getByDefault("vf", vf, vf);
                }
                else
                {
                    _is.read(app, 1, true);
                    _is.read(server, 2, true);
                    _is.read(vf, 3, false);
                }
                taf::Int32 _ret = ListConfig(app,server,vf, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("vf", vf);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(vf, 3);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 1:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                taf::ConfigInfo configInfo;
                vector<std::string> vf;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("configInfo", configInfo);
                    tafAttr.getByDefault("vf", vf, vf);
                }
                else
                {
                    _is.read(configInfo, 1, true);
                    _is.read(vf, 2, false);
                }
                taf::Int32 _ret = ListConfigByInfo(configInfo,vf, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("vf", vf);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(vf, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 2:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                std::string appServerName;
                std::string filename;
                std::string host;
                std::string result;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("appServerName", appServerName);
                    tafAttr.get("filename", filename);
                    tafAttr.get("host", host);
                    tafAttr.getByDefault("result", result, result);
                }
                else
                {
                    _is.read(appServerName, 1, true);
                    _is.read(filename, 2, true);
                    _is.read(host, 3, true);
                    _is.read(result, 4, false);
                }
                taf::Int32 _ret = checkConfig(appServerName,filename,host,result, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("result", result);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(result, 4);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 3:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                taf::ConfigInfo configInfo;
                std::string result;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("configInfo", configInfo);
                    tafAttr.getByDefault("result", result, result);
                }
                else
                {
                    _is.read(configInfo, 1, true);
                    _is.read(result, 2, false);
                }
                taf::Int32 _ret = checkConfigByInfo(configInfo,result, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("result", result);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(result, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 4:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                std::string app;
                std::string server;
                std::string filename;
                std::string config;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("app", app);
                    tafAttr.get("server", server);
                    tafAttr.get("filename", filename);
                    tafAttr.getByDefault("config", config, config);
                }
                else
                {
                    _is.read(app, 1, true);
                    _is.read(server, 2, true);
                    _is.read(filename, 3, true);
                    _is.read(config, 4, false);
                }
                taf::Int32 _ret = loadConfig(app,server,filename,config, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("config", config);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(config, 4);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 5:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                std::string appServerName;
                std::string filename;
                std::string host;
                std::string config;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("appServerName", appServerName);
                    tafAttr.get("filename", filename);
                    tafAttr.get("host", host);
                    tafAttr.getByDefault("config", config, config);
                }
                else
                {
                    _is.read(appServerName, 1, true);
                    _is.read(filename, 2, true);
                    _is.read(host, 3, true);
                    _is.read(config, 4, false);
                }
                taf::Int32 _ret = loadConfigByHost(appServerName,filename,host,config, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("config", config);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(config, 4);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
            case 6:
            {
                taf::JceInputStream<taf::BufferReader> _is;
                _is.setBuffer(_current->getRequestBuffer());
                taf::ConfigInfo configInfo;
                std::string config;
                if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                {
                    UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                    tafAttr.setVersion(_current->getRequestVersion());
                    tafAttr.decode(_current->getRequestBuffer());
                    tafAttr.get("configInfo", configInfo);
                    tafAttr.getByDefault("config", config, config);
                }
                else
                {
                    _is.read(configInfo, 1, true);
                    _is.read(config, 2, false);
                }
                taf::Int32 _ret = loadConfigByInfo(configInfo,config, _current);
                if(_current->isResponse())
                {
                    if (_current->getRequestVersion() == WUPVERSION || _current->getRequestVersion() == WUPVERSION2)
                    {
                        UniAttribute<taf::BufferWriter, taf::BufferReader>  tafAttr;
                        tafAttr.setVersion(_current->getRequestVersion());
                        tafAttr.put("", _ret);
                        tafAttr.put("config", config);
                        tafAttr.encode(_sResponseBuffer);
                    }
                    else
                    {
                        taf::JceOutputStream<taf::BufferWriter> _os;
                        _os.write(_ret, 0);
                        _os.write(config, 2);
                        _os.swap(_sResponseBuffer);
                    }
                }
                return taf::JCESERVERSUCCESS;

            }
        }
        return taf::JCESERVERNOFUNCERR;
    }


}

