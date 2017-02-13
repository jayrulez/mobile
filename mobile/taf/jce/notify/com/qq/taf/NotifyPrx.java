// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `Notify.jce'
// **********************************************************************

package com.qq.taf;

public interface NotifyPrx
{
    public int getNotifyInfo(com.qq.taf.NotifyKey stKey, com.qq.taf.NotifyInfoHolder stInfo);

    public int getNotifyInfo(com.qq.taf.NotifyKey stKey, com.qq.taf.NotifyInfoHolder stInfo, java.util.Map __ctx);

    public void async_getNotifyInfo(com.qq.taf.NotifyPrxCallback callback, com.qq.taf.NotifyKey stKey);

    public void async_getNotifyInfo(com.qq.taf.NotifyPrxCallback callback, com.qq.taf.NotifyKey stKey, java.util.Map __ctx);


    public void notifyServer(String sServerName, int level, String sMessage);

    public void notifyServer(String sServerName, int level, String sMessage, java.util.Map __ctx);

    public void async_notifyServer(com.qq.taf.NotifyPrxCallback callback, String sServerName, int level, String sMessage);

    public void async_notifyServer(com.qq.taf.NotifyPrxCallback callback, String sServerName, int level, String sMessage, java.util.Map __ctx);


    public void reportServer(String sServerName, String sThreadId, String sMessage);

    public void reportServer(String sServerName, String sThreadId, String sMessage, java.util.Map __ctx);

    public void async_reportServer(com.qq.taf.NotifyPrxCallback callback, String sServerName, String sThreadId, String sMessage);

    public void async_reportServer(com.qq.taf.NotifyPrxCallback callback, String sServerName, String sThreadId, String sMessage, java.util.Map __ctx);


}
