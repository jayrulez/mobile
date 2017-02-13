// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.3.1 by WSRD Tencent.
// Generated from `./PropertyF.jce'
// **********************************************************************

package com.qq.taf.server.jce2java;

public final class StatPropMsgHead extends com.qq.taf.jce.JceStruct
{
    public String moduleName = (String)"";

    public String ip = (String)"";

    public String propertyName = (String)"";

    public String getModuleName()
    {
        return moduleName;
    }

    public void  setModuleName(String moduleName)
    {
        this.moduleName = moduleName;
    }

    public String getIp()
    {
        return ip;
    }

    public void  setIp(String ip)
    {
        this.ip = ip;
    }

    public String getPropertyName()
    {
        return propertyName;
    }

    public void  setPropertyName(String propertyName)
    {
        this.propertyName = propertyName;
    }

    public StatPropMsgHead()
    {
    }

    public StatPropMsgHead(String moduleName, String ip, String propertyName)
    {
        this.moduleName = moduleName;
        this.ip = ip;
        this.propertyName = propertyName;
    }

    public int compareTo(StatPropMsgHead o)
    {
        int[] r = 
        {
            com.qq.taf.jce.JceUtil.compareTo(moduleName, o.moduleName), 
            com.qq.taf.jce.JceUtil.compareTo(ip, o.ip), 
            com.qq.taf.jce.JceUtil.compareTo(propertyName, o.propertyName)
        };
        for(int i = 0; i < r.length; ++i)
        {
            if(r[i] != 0) return r[i];
        }
        return 0;
    }

    public boolean equals(Object o)
    {
        StatPropMsgHead t = (StatPropMsgHead) o;
        return (
            com.qq.taf.jce.JceUtil.equals(moduleName, t.moduleName) && 
            com.qq.taf.jce.JceUtil.equals(ip, t.ip) && 
            com.qq.taf.jce.JceUtil.equals(propertyName, t.propertyName) );
    }

    public int hashCode()
    {
        int [] hc = { 
            com.qq.taf.jce.JceUtil.hashCode(moduleName), 
            com.qq.taf.jce.JceUtil.hashCode(ip), 
            com.qq.taf.jce.JceUtil.hashCode(propertyName)
        };
        return java.util.Arrays.hashCode(hc);
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
        _os.write(moduleName, 0);
        _os.write(ip, 1);
        _os.write(propertyName, 2);
    }

    public void readFrom(com.qq.taf.jce.JceInputStream _is)
    {
        moduleName = "";
        moduleName = (String) _is.read(moduleName, 0, true);

        ip = "";
        ip = (String) _is.read(ip, 1, true);

        propertyName = "";
        propertyName = (String) _is.read(propertyName, 2, true);

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.qq.taf.jce.JceDisplayer _ds = new com.qq.taf.jce.JceDisplayer(_os, _level);
        _ds.display(moduleName, "moduleName");
        _ds.display(ip, "ip");
        _ds.display(propertyName, "propertyName");
    }

}
