// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.7 by WSRD Tencent.
// Generated from `TafCaseServant.jce'
// **********************************************************************

package com.qq.java.testcase.testcaseservant;

public final class TafCaseServantPrxHelper extends com.qq.taf.proxy.ServantProxy implements TafCaseServantPrx
{

    public TafCaseServantPrxHelper taf_hash(int hashCode)
    {
        super.taf_hash(hashCode);
        return this;
    }

    public java.util.Map __defaultContext()
    {
        java.util.HashMap _ctx = new java.util.HashMap();
        return _ctx;
    }

    protected String sServerEncoding = "GBK";
    public int setServerEncoding(String se){
        sServerEncoding = se;
        return 0;
    }

    public int getUser(com.qq.java.testcase.testcaseservant.UserInfo inUser, com.qq.java.testcase.testcaseservant.UserInfoHolder outUser)
    {
        return getUser(inUser, outUser, __defaultContext());
    }

    @SuppressWarnings("unchecked")
    public int getUser(com.qq.java.testcase.testcaseservant.UserInfo inUser, com.qq.java.testcase.testcaseservant.UserInfoHolder outUser, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(inUser, 1);
        if(outUser.value != null)         _os.write(outUser.value, 2);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        byte[] _returnSBuffer = taf_invoke("getUser", _sBuffer, __ctx, status);

        com.qq.taf.jce.JceInputStream _is = new com.qq.taf.jce.JceInputStream(_returnSBuffer);
        _is.setServerEncoding(sServerEncoding);
        int _ret = 0;
        _ret = (int) _is.read(_ret, 0, true);
        outUser.value = new com.qq.java.testcase.testcaseservant.UserInfo();
        outUser.value = (com.qq.java.testcase.testcaseservant.UserInfo) _is.read(outUser.value, 2, true);
        return _ret;
    }

    public void async_getUser(com.qq.java.testcase.testcaseservant.TafCaseServantPrxCallback callback, com.qq.java.testcase.testcaseservant.UserInfo inUser)
    {
        async_getUser(callback, inUser, __defaultContext());
    }

    public void async_getUser(com.qq.java.testcase.testcaseservant.TafCaseServantPrxCallback callback, com.qq.java.testcase.testcaseservant.UserInfo inUser, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(inUser, 1);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        taf_invokeAsync(callback, "getUser", _sBuffer, __ctx, status);

    }

    public int test()
    {
        return test(__defaultContext());
    }

    @SuppressWarnings("unchecked")
    public int test(java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        byte[] _returnSBuffer = taf_invoke("test", _sBuffer, __ctx, status);

        com.qq.taf.jce.JceInputStream _is = new com.qq.taf.jce.JceInputStream(_returnSBuffer);
        _is.setServerEncoding(sServerEncoding);
        int _ret = 0;
        _ret = (int) _is.read(_ret, 0, true);
        return _ret;
    }

    public void async_test(com.qq.java.testcase.testcaseservant.TafCaseServantPrxCallback callback)
    {
        async_test(callback, __defaultContext());
    }

    public void async_test(com.qq.java.testcase.testcaseservant.TafCaseServantPrxCallback callback, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        taf_invokeAsync(callback, "test", _sBuffer, __ctx, status);

    }

    public int testUnsigned(short ubInUin, int usInUin, long uiInUin, com.qq.taf.holder.JceShortHolder ubOutUin, com.qq.taf.holder.JceIntHolder usOutUin, com.qq.taf.holder.JceLongHolder uiOutUin)
    {
        return testUnsigned(ubInUin, usInUin, uiInUin, ubOutUin, usOutUin, uiOutUin, __defaultContext());
    }

    @SuppressWarnings("unchecked")
    public int testUnsigned(short ubInUin, int usInUin, long uiInUin, com.qq.taf.holder.JceShortHolder ubOutUin, com.qq.taf.holder.JceIntHolder usOutUin, com.qq.taf.holder.JceLongHolder uiOutUin, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(ubInUin, 1);
        _os.write(usInUin, 2);
        _os.write(uiInUin, 3);
        _os.write(ubOutUin.value, 4);
        _os.write(usOutUin.value, 5);
        _os.write(uiOutUin.value, 6);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        byte[] _returnSBuffer = taf_invoke("testUnsigned", _sBuffer, __ctx, status);

        com.qq.taf.jce.JceInputStream _is = new com.qq.taf.jce.JceInputStream(_returnSBuffer);
        _is.setServerEncoding(sServerEncoding);
        int _ret = 0;
        _ret = (int) _is.read(_ret, 0, true);
        ubOutUin.value = 0;
        ubOutUin.value = (short) _is.read(ubOutUin.value, 4, true);
        usOutUin.value = 0;
        usOutUin.value = (int) _is.read(usOutUin.value, 5, true);
        uiOutUin.value = 0L;
        uiOutUin.value = (long) _is.read(uiOutUin.value, 6, true);
        return _ret;
    }

    public void async_testUnsigned(com.qq.java.testcase.testcaseservant.TafCaseServantPrxCallback callback, short ubInUin, int usInUin, long uiInUin)
    {
        async_testUnsigned(callback, ubInUin, usInUin, uiInUin, __defaultContext());
    }

    public void async_testUnsigned(com.qq.java.testcase.testcaseservant.TafCaseServantPrxCallback callback, short ubInUin, int usInUin, long uiInUin, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(ubInUin, 1);
        _os.write(usInUin, 2);
        _os.write(uiInUin, 3);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        taf_invokeAsync(callback, "testUnsigned", _sBuffer, __ctx, status);

    }

}
