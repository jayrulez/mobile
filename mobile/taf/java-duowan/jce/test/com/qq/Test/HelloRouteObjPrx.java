// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.2.0 by WSRD Tencent.
// Generated from `HelloRouteObj.jce'
// **********************************************************************

package com.qq.Test;

public interface HelloRouteObjPrx
{
    public int testHello(String sInput, com.qq.taf.holder.JceStringHolder sOutput);

    public int testHello(String sInput, com.qq.taf.holder.JceStringHolder sOutput, java.util.Map __ctx);

    public void async_testHello(com.qq.Test.HelloRouteObjPrxCallback callback, String sInput);

    public void async_testHello(com.qq.Test.HelloRouteObjPrxCallback callback, String sInput, java.util.Map __ctx);


}