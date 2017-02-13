// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.6.4 by WSRD Tencent.
// Generated from `KevinTestServant.jce'
// **********************************************************************

#ifndef __KEVINTESTSERVANT_H_
#define __KEVINTESTSERVANT_H_

#include <map>
#include <string>
#include <vector>
#include "jce/Jce.h"
using namespace std;
#include "servant/ServantProxy.h"
#include "servant/Servant.h"


namespace Test
{
    enum TEST_ENUM
    {
        TT1,
        TT2,
        TT3,
    };
    inline string etos(const TEST_ENUM & e)
    {
        switch(e)
        {
            case TT1: return "TT1";
            case TT2: return "TT2";
            case TT3: return "TT3";
            default: return "";
        }
        return "";
    }
    inline int stoe(const string & s, TEST_ENUM & e)
    {
        if(s == "TT1")  { e=TT1; return 0;}
        if(s == "TT2")  { e=TT2; return 0;}
        if(s == "TT3")  { e=TT3; return 0;}

        return -1;
    }

    struct stUserInfo_t : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "Test.stUserInfo_t";
        }
        static string MD5()
        {
            return "e0e6bebdc7cc5edf58689237bacd177a";
        }
        stUserInfo_t()
        :sUserID(""),sUserName(""),sUserDesc("abcdefg")
        {
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(sUserID, 0);
            _os.write(sUserName, 1);
            _os.write(sUserDesc, 2);
            _os.write((taf::Int32)a, 3);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            _is.read(sUserID, 0, true);
            _is.read(sUserName, 1, true);
            _is.read(sUserDesc, 2, false);
            _is.read((taf::Int32&)a, 3, false);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(sUserID,"sUserID");
            _ds.display(sUserName,"sUserName");
            _ds.display(sUserDesc,"sUserDesc");
            _ds.display((taf::Int32)a,"a");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(sUserID, true);
            _ds.displaySimple(sUserName, true);
            _ds.displaySimple(sUserDesc, true);
            _ds.displaySimple((taf::Int32)a, false);
            return _os;
        }
    public:
        std::string sUserID;
        std::string sUserName;
        std::string sUserDesc;
        Test::TEST_ENUM a;
    };
    inline bool operator==(const stUserInfo_t&l, const stUserInfo_t&r)
    {
        return l.sUserID == r.sUserID && l.sUserName == r.sUserName && l.sUserDesc == r.sUserDesc && l.a == r.a;
    }
    inline bool operator!=(const stUserInfo_t&l, const stUserInfo_t&r)
    {
        return !(l == r);
    }


    /* callback of async proxy for client */
    class KevinTestServantPrxCallback: public taf::ServantProxyCallback
    {
    public:
        virtual ~KevinTestServantPrxCallback(){}
        virtual void callback_test(taf::Int32 ret)
        { throw std::runtime_error("callback_test() overloading incorrect."); }
        virtual void callback_test_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_test_exception() overloading incorrect."); }

        virtual void callback_setUser(const std::string& ret,  const Test::stUserInfo_t& outUser)
        { throw std::runtime_error("callback_setUser() overloading incorrect."); }
        virtual void callback_setUser_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_setUser_exception() overloading incorrect."); }

        virtual void callback_pay(const std::string& ret,  const std::string& sret)
        { throw std::runtime_error("callback_pay() overloading incorrect."); }
        virtual void callback_pay_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_pay_exception() overloading incorrect."); }

    public:
        int onDispatch(taf::ReqMessagePtr msg);
    };
    typedef taf::TC_AutoPtr<KevinTestServantPrxCallback> KevinTestServantPrxCallbackPtr;

    /* proxy for client */
    class KevinTestServantProxy : public taf::ServantProxy
    {
    public:
        typedef map<string, string> TAF_CONTEXT;
        taf::Int32 test(const map<string, string> &context = TAF_CONTEXT());
        void async_test(KevinTestServantPrxCallbackPtr callback,const map<string, string> &context = TAF_CONTEXT());

        std::string setUser(const std::string & suin,const Test::stUserInfo_t & inUser,Test::stUserInfo_t &outUser,const map<string, string> &context = TAF_CONTEXT());
        void async_setUser(KevinTestServantPrxCallbackPtr callback,const std::string & suin,const Test::stUserInfo_t & inUser,const map<string, string> &context = TAF_CONTEXT());

        std::string pay(const std::string & suin,std::string &sret,const map<string, string> &context = TAF_CONTEXT());
        void async_pay(KevinTestServantPrxCallbackPtr callback,const std::string & suin,const map<string, string> &context = TAF_CONTEXT());

        KevinTestServantProxy* taf_hash(int64_t key);
    };
    typedef taf::TC_AutoPtr<KevinTestServantProxy> KevinTestServantPrx;

    /* servant for server */
    class KevinTestServant : public taf::Servant
    {
    public:
        virtual ~KevinTestServant(){}
        virtual taf::Int32 test(taf::JceCurrentPtr current) = 0;
        static void async_response_test(taf::JceCurrentPtr current, taf::Int32 _ret);

        virtual std::string setUser(const std::string & suin,const Test::stUserInfo_t & inUser,Test::stUserInfo_t &outUser,taf::JceCurrentPtr current) = 0;
        static void async_response_setUser(taf::JceCurrentPtr current, const std::string &_ret, const Test::stUserInfo_t &outUser);

        virtual std::string pay(const std::string & suin,std::string &sret,taf::JceCurrentPtr current) = 0;
        static void async_response_pay(taf::JceCurrentPtr current, const std::string &_ret, const std::string &sret);

    public:
        int onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer);
    };


}

#define Test_stUserInfo_t_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.sUserID,b.sUserID);jce_copy_struct(a.sUserName,b.sUserName);jce_copy_struct(a.sUserDesc,b.sUserDesc);jce_copy_struct(a.a,b.a);



#endif
