// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

package com.duowan.QUAN;

public final class PostReportReq extends com.duowan.taf.jce.JceStruct implements java.lang.Cloneable
{
    public String className()
    {
        return "QUAN.PostReportReq";
    }

    public String fullClassName()
    {
        return "com.duowan.QUAN.PostReportReq";
    }

    public com.duowan.QUAN.UserId tUserId = null;

    public long lSId = 0;

    public int iType = 0;

    public long lReportedId = 0;

    public com.duowan.QUAN.UserId getTUserId()
    {
        return tUserId;
    }

    public void  setTUserId(com.duowan.QUAN.UserId tUserId)
    {
        this.tUserId = tUserId;
    }

    public long getLSId()
    {
        return lSId;
    }

    public void  setLSId(long lSId)
    {
        this.lSId = lSId;
    }

    public int getIType()
    {
        return iType;
    }

    public void  setIType(int iType)
    {
        this.iType = iType;
    }

    public long getLReportedId()
    {
        return lReportedId;
    }

    public void  setLReportedId(long lReportedId)
    {
        this.lReportedId = lReportedId;
    }

    public PostReportReq()
    {
        setTUserId(tUserId);
        setLSId(lSId);
        setIType(iType);
        setLReportedId(lReportedId);
    }

    public PostReportReq(com.duowan.QUAN.UserId tUserId, long lSId, int iType, long lReportedId)
    {
        setTUserId(tUserId);
        setLSId(lSId);
        setIType(iType);
        setLReportedId(lReportedId);
    }

    public boolean equals(Object o)
    {
        if(o == null)
        {
            return false;
        }

        PostReportReq t = (PostReportReq) o;
        return (
            com.duowan.taf.jce.JceUtil.equals(tUserId, t.tUserId) && 
            com.duowan.taf.jce.JceUtil.equals(lSId, t.lSId) && 
            com.duowan.taf.jce.JceUtil.equals(iType, t.iType) && 
            com.duowan.taf.jce.JceUtil.equals(lReportedId, t.lReportedId) );
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
        if (null != tUserId)
        {
            _os.write(tUserId, 0);
        }
        _os.write(lSId, 1);
        _os.write(iType, 2);
        _os.write(lReportedId, 3);
    }

    static com.duowan.QUAN.UserId cache_tUserId;

    public void readFrom(com.duowan.taf.jce.JceInputStream _is)
    {
        if(null == cache_tUserId)
        {
            cache_tUserId = new com.duowan.QUAN.UserId();
        }
        setTUserId((com.duowan.QUAN.UserId) _is.read(cache_tUserId, 0, false));

        setLSId((long) _is.read(lSId, 1, false));

        setIType((int) _is.read(iType, 2, false));

        setLReportedId((long) _is.read(lReportedId, 3, false));

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.duowan.taf.jce.JceDisplayer _ds = new com.duowan.taf.jce.JceDisplayer(_os, _level);
        _ds.display(tUserId, "tUserId");
        _ds.display(lSId, "lSId");
        _ds.display(iType, "iType");
        _ds.display(lReportedId, "lReportedId");
    }

}
