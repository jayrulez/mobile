// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `Notify.jce'
// **********************************************************************

package com.qq.taf;

public final class NotifyInfo extends com.qq.taf.jce.JceStruct implements java.lang.Cloneable
{
    public String className()
    {
        return "taf.NotifyInfo";
    }

    public String fullClassName()
    {
        return "com.qq.taf.NotifyInfo";
    }

    public int nextpage = 0;

    public java.util.ArrayList<com.qq.taf.NotifyItem> notifyItems = null;

    public int getNextpage()
    {
        return nextpage;
    }

    public void  setNextpage(int nextpage)
    {
        this.nextpage = nextpage;
    }

    public java.util.ArrayList<com.qq.taf.NotifyItem> getNotifyItems()
    {
        return notifyItems;
    }

    public void  setNotifyItems(java.util.ArrayList<com.qq.taf.NotifyItem> notifyItems)
    {
        this.notifyItems = notifyItems;
    }

    public NotifyInfo()
    {
        setNextpage(nextpage);
        setNotifyItems(notifyItems);
    }

    public NotifyInfo(int nextpage, java.util.ArrayList<com.qq.taf.NotifyItem> notifyItems)
    {
        setNextpage(nextpage);
        setNotifyItems(notifyItems);
    }

    public boolean equals(Object o)
    {
        if(o == null)
        {
            return false;
        }

        NotifyInfo t = (NotifyInfo) o;
        return (
            com.qq.taf.jce.JceUtil.equals(nextpage, t.nextpage) && 
            com.qq.taf.jce.JceUtil.equals(notifyItems, t.notifyItems) );
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

    public void writeTo(com.qq.taf.jce.JceOutputStream _os)
    {
        _os.write(nextpage, 1);
        _os.write(notifyItems, 2);
    }

    static java.util.ArrayList<com.qq.taf.NotifyItem> cache_notifyItems;

    public void readFrom(com.qq.taf.jce.JceInputStream _is)
    {
        setNextpage((int) _is.read(nextpage, 1, true));

        if(null == cache_notifyItems)
        {
            cache_notifyItems = new java.util.ArrayList<com.qq.taf.NotifyItem>();
            com.qq.taf.NotifyItem __var_1 = new com.qq.taf.NotifyItem();
            ((java.util.ArrayList<com.qq.taf.NotifyItem>)cache_notifyItems).add(__var_1);
        }
        setNotifyItems((java.util.ArrayList<com.qq.taf.NotifyItem>) _is.read(cache_notifyItems, 2, true));

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.qq.taf.jce.JceDisplayer _ds = new com.qq.taf.jce.JceDisplayer(_os, _level);
        _ds.display(nextpage, "nextpage");
        _ds.display(notifyItems, "notifyItems");
    }

}
