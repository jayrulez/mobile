// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

package com.duowan.QUAN;

public final class PostContentRsp extends com.duowan.taf.jce.JceStruct implements java.lang.Cloneable
{
    public String className()
    {
        return "QUAN.PostContentRsp";
    }

    public String fullClassName()
    {
        return "com.duowan.QUAN.PostContentRsp";
    }

    public int iStatus = 0;

    public com.duowan.QUAN.ContentInfo tContent = null;

    public int getIStatus()
    {
        return iStatus;
    }

    public void  setIStatus(int iStatus)
    {
        this.iStatus = iStatus;
    }

    public com.duowan.QUAN.ContentInfo getTContent()
    {
        return tContent;
    }

    public void  setTContent(com.duowan.QUAN.ContentInfo tContent)
    {
        this.tContent = tContent;
    }

    public PostContentRsp()
    {
        setIStatus(iStatus);
        setTContent(tContent);
    }

    public PostContentRsp(int iStatus, com.duowan.QUAN.ContentInfo tContent)
    {
        setIStatus(iStatus);
        setTContent(tContent);
    }

    public boolean equals(Object o)
    {
        if(o == null)
        {
            return false;
        }

        PostContentRsp t = (PostContentRsp) o;
        return (
            com.duowan.taf.jce.JceUtil.equals(iStatus, t.iStatus) && 
            com.duowan.taf.jce.JceUtil.equals(tContent, t.tContent) );
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
        if (null != tContent)
        {
            _os.write(tContent, 1);
        }
    }

    static com.duowan.QUAN.ContentInfo cache_tContent;

    public void readFrom(com.duowan.taf.jce.JceInputStream _is)
    {
        setIStatus((int) _is.read(iStatus, 0, false));

        if(null == cache_tContent)
        {
            cache_tContent = new com.duowan.QUAN.ContentInfo();
        }
        setTContent((com.duowan.QUAN.ContentInfo) _is.read(cache_tContent, 1, false));

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.duowan.taf.jce.JceDisplayer _ds = new com.duowan.taf.jce.JceDisplayer(_os, _level);
        _ds.display(iStatus, "iStatus");
        _ds.display(tContent, "tContent");
    }

}

