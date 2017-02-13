// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.3.1 by WSRD Tencent.
// Generated from `Notify.jce'
// **********************************************************************

package com.qq.taf.server.jce2java;

public final class NotifyKey extends com.qq.taf.jce.JceStruct
{
    public String name = (String)"";

    public String ip = (String)"";

    public int page = (int)0;

    public String getName()
    {
        return name;
    }

    public void  setName(String name)
    {
        this.name = name;
    }

    public String getIp()
    {
        return ip;
    }

    public void  setIp(String ip)
    {
        this.ip = ip;
    }

    public int getPage()
    {
        return page;
    }

    public void  setPage(int page)
    {
        this.page = page;
    }

    public NotifyKey()
    {
    }

    public NotifyKey(String name, String ip, int page)
    {
        this.name = name;
        this.ip = ip;
        this.page = page;
    }

    public boolean equals(Object o)
    {
        NotifyKey t = (NotifyKey) o;
        return (
            com.qq.taf.jce.JceUtil.equals(name, t.name) && 
            com.qq.taf.jce.JceUtil.equals(ip, t.ip) && 
            com.qq.taf.jce.JceUtil.equals(page, t.page) );
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

    public void writeTo(com.qq.taf.jce.JceOutputStream _os)
    {
        _os.write(name, 1);
        _os.write(ip, 2);
        _os.write(page, 3);
    }

    public void readFrom(com.qq.taf.jce.JceInputStream _is)
    {
        name = "";
        name = (String) _is.read(name, 1, true);

        ip = "";
        ip = (String) _is.read(ip, 2, true);

        page = 0;
        page = (int) _is.read(page, 3, true);

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.qq.taf.jce.JceDisplayer _ds = new com.qq.taf.jce.JceDisplayer(_os, _level);
        _ds.display(name, "name");
        _ds.display(ip, "ip");
        _ds.display(page, "page");
    }

}
