// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

package com.duowan.QUAN;

public final class PostFavorReq extends com.duowan.taf.jce.JceStruct implements java.lang.Cloneable
{
    public String className()
    {
        return "QUAN.PostFavorReq";
    }

    public String fullClassName()
    {
        return "com.duowan.QUAN.PostFavorReq";
    }

    public com.duowan.QUAN.UserId tUserId = null;

    public long lId = 0;

    public long lSId = 0;

    public int iType = 0;

    public int iOp = 0;

    public long lFavoredId = 0;

    public com.duowan.QUAN.UserId getTUserId()
    {
        return tUserId;
    }

    public void  setTUserId(com.duowan.QUAN.UserId tUserId)
    {
        this.tUserId = tUserId;
    }

    public long getLId()
    {
        return lId;
    }

    public void  setLId(long lId)
    {
        this.lId = lId;
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

    public int getIOp()
    {
        return iOp;
    }

    public void  setIOp(int iOp)
    {
        this.iOp = iOp;
    }

    public long getLFavoredId()
    {
        return lFavoredId;
    }

    public void  setLFavoredId(long lFavoredId)
    {
        this.lFavoredId = lFavoredId;
    }

    public PostFavorReq()
    {
        setTUserId(tUserId);
        setLId(lId);
        setLSId(lSId);
        setIType(iType);
        setIOp(iOp);
        setLFavoredId(lFavoredId);
    }

    public PostFavorReq(com.duowan.QUAN.UserId tUserId, long lId, long lSId, int iType, int iOp, long lFavoredId)
    {
        setTUserId(tUserId);
        setLId(lId);
        setLSId(lSId);
        setIType(iType);
        setIOp(iOp);
        setLFavoredId(lFavoredId);
    }

    public boolean equals(Object o)
    {
        if(o == null)
        {
            return false;
        }

        PostFavorReq t = (PostFavorReq) o;
        return (
            com.duowan.taf.jce.JceUtil.equals(tUserId, t.tUserId) && 
            com.duowan.taf.jce.JceUtil.equals(lId, t.lId) && 
            com.duowan.taf.jce.JceUtil.equals(lSId, t.lSId) && 
            com.duowan.taf.jce.JceUtil.equals(iType, t.iType) && 
            com.duowan.taf.jce.JceUtil.equals(iOp, t.iOp) && 
            com.duowan.taf.jce.JceUtil.equals(lFavoredId, t.lFavoredId) );
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
        _os.write(lId, 1);
        _os.write(lSId, 2);
        _os.write(iType, 3);
        _os.write(iOp, 4);
        _os.write(lFavoredId, 5);
    }

    static com.duowan.QUAN.UserId cache_tUserId;

    public void readFrom(com.duowan.taf.jce.JceInputStream _is)
    {
        if(null == cache_tUserId)
        {
            cache_tUserId = new com.duowan.QUAN.UserId();
        }
        setTUserId((com.duowan.QUAN.UserId) _is.read(cache_tUserId, 0, false));

        setLId((long) _is.read(lId, 1, false));

        setLSId((long) _is.read(lSId, 2, false));

        setIType((int) _is.read(iType, 3, false));

        setIOp((int) _is.read(iOp, 4, false));

        setLFavoredId((long) _is.read(lFavoredId, 5, false));

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.duowan.taf.jce.JceDisplayer _ds = new com.duowan.taf.jce.JceDisplayer(_os, _level);
        _ds.display(tUserId, "tUserId");
        _ds.display(lId, "lId");
        _ds.display(lSId, "lSId");
        _ds.display(iType, "iType");
        _ds.display(iOp, "iOp");
        _ds.display(lFavoredId, "lFavoredId");
    }

}

