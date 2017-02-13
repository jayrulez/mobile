// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.5.7
// Generated from `EndpointF.jce'
// **********************************************************************

#ifndef __ENDPOINTF_H_
#define __ENDPOINTF_H_

#include <map>
#include <string>
#include <vector>
#include "jce/Jce.h"
using namespace std;


namespace taf
{
    struct EndpointF : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "taf.EndpointF";
        }
        static string MD5()
        {
            return "3c95a43b6bbc16f7786e3f34b8fa053b";
        }
        EndpointF(const std::string &host,taf::Int32 port,taf::Int32 timeout,taf::Int32 istcp,taf::Int32 grid,taf::Int32 groupworkid,taf::Int32 grouprealid,const std::string &setId,taf::Int32 qos)
            :host(host),port(port),timeout(timeout),istcp(istcp),grid(grid),groupworkid(groupworkid),grouprealid(grouprealid),setId(setId),qos(qos)
        {
        }
        EndpointF()
        :host(""),port(0),timeout(0),istcp(0),grid(0),groupworkid(0),grouprealid(0),setId(""),qos(0)
        {
        }
        void resetDefautlt()
        {
            host = "";
            port = 0;
            timeout = 0;
            istcp = 0;
            grid = 0;
            groupworkid = 0;
            grouprealid = 0;
            setId = "";
            qos = 0;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(host, 0);
            _os.write(port, 1);
            _os.write(timeout, 2);
            _os.write(istcp, 3);
            _os.write(grid, 4);
            _os.write(groupworkid, 5);
            _os.write(grouprealid, 6);
            _os.write(setId, 7);
            _os.write(qos, 8);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(host, 0, true);
            _is.read(port, 1, true);
            _is.read(timeout, 2, true);
            _is.read(istcp, 3, true);
            _is.read(grid, 4, true);
            _is.read(groupworkid, 5, false);
            _is.read(grouprealid, 6, false);
            _is.read(setId, 7, false);
            _is.read(qos, 8, false);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(host,"host");
            _ds.display(port,"port");
            _ds.display(timeout,"timeout");
            _ds.display(istcp,"istcp");
            _ds.display(grid,"grid");
            _ds.display(groupworkid,"groupworkid");
            _ds.display(grouprealid,"grouprealid");
            _ds.display(setId,"setId");
            _ds.display(qos,"qos");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(host, true);
            _ds.displaySimple(port, true);
            _ds.displaySimple(timeout, true);
            _ds.displaySimple(istcp, true);
            _ds.displaySimple(grid, true);
            _ds.displaySimple(groupworkid, true);
            _ds.displaySimple(grouprealid, true);
            _ds.displaySimple(setId, true);
            _ds.displaySimple(qos, false);
            return _os;
        }
    public:
        std::string host;
        taf::Int32 port;
        taf::Int32 timeout;
        taf::Int32 istcp;
        taf::Int32 grid;
        taf::Int32 groupworkid;
        taf::Int32 grouprealid;
        std::string setId;
        taf::Int32 qos;
    };
    inline bool operator==(const EndpointF&l, const EndpointF&r)
    {
        return l.host == r.host && l.port == r.port && l.timeout == r.timeout && l.istcp == r.istcp && l.grid == r.grid && l.groupworkid == r.groupworkid && l.grouprealid == r.grouprealid && l.setId == r.setId && l.qos == r.qos;
    }
    inline bool operator!=(const EndpointF&l, const EndpointF&r)
    {
        return !(l == r);
    }
    inline bool operator<(const EndpointF&l, const EndpointF&r)
    {
        if(l.host != r.host)  return (l.host < r.host);
        if(l.port != r.port)  return (l.port < r.port);
        if(l.timeout != r.timeout)  return (l.timeout < r.timeout);
        if(l.istcp != r.istcp)  return (l.istcp < r.istcp);
        if(l.grid != r.grid)  return (l.grid < r.grid);
        if(l.qos != r.qos)  return (l.qos < r.qos);
        return false;
    }
    inline bool operator<=(const EndpointF&l, const EndpointF&r)
    {
        return !(r < l);
    }
    inline bool operator>(const EndpointF&l, const EndpointF&r)
    {
        return r < l;
    }
    inline bool operator>=(const EndpointF&l, const EndpointF&r)
    {
        return !(l < r);
    }


}

#define taf_EndpointF_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.host,b.host);jce_copy_struct(a.port,b.port);jce_copy_struct(a.timeout,b.timeout);jce_copy_struct(a.istcp,b.istcp);jce_copy_struct(a.grid,b.grid);jce_copy_struct(a.groupworkid,b.groupworkid);jce_copy_struct(a.grouprealid,b.grouprealid);jce_copy_struct(a.setId,b.setId);jce_copy_struct(a.qos,b.qos);



#endif
