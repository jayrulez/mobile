// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

package com.duowan.QUAN;

public final class PostReportRsp extends com.duowan.taf.jce.JceStruct implements java.lang.Cloneable
{
    public String className()
    {
        return "QUAN.PostReportRsp";
    }

    public String fullClassName()
    {
        return "com.duowan.QUAN.PostReportRsp";
    }

    public int iStatus = 0;

    public int getIStatus()
    {
        return iStatus;
    }

    public void  setIStatus(int iStatus)
    {
        this.iStatus = iStatus;
    }

    public PostReportRsp()
    {
        setIStatus(iStatus);
    }

    public PostReportRsp(int iStatus)
    {
        setIStatus(iStatus);
    }

    public boolean equals(Object o)
    {
        if(o == null)
        {
            return false;
        }

        PostReportRsp t = (PostReportRsp) o;
        return (
            com.duowan.taf.jce.JceUtil.equals(iStatus, t.iStatus) );
    }

    public int hashCode()
    {
        try
        {
            throw new Exception("Need define key first!");
        }
        catch(Exception ex)
        {
            ex.printStackTrace();
        }
        return 0;
    }
    public java.lang.Object clone()
    {
        java.lang.Object o = null;
        try
        {
            o = super.clone();
        }
        catch(CloneNotSupportedException ex)
        {
            assert false; // impossible
        }
        return o;
    }

    public void writeTo(com.duowan.taf.jce.JceOutputStream _os)
    {
        _os.write(iStatus, 0);
    }


    public void readFrom(com.duowan.taf.jce.JceInputStream _is)
    {
        setIStatus((int) _is.read(iStatus, 0, false));

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.duowan.taf.jce.JceDisplayer _ds = new com.duowan.taf.jce.JceDisplayer(_os, _level);
        _ds.display(iStatus, "iStatus");
    }

}

