// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.6 by WSRD Tencent.
// Generated from `Basic.jce'
// **********************************************************************

package com.qq.java.test.basic;

public final class BasicPrxHelper extends com.qq.taf.proxy.ServantProxy implements BasicPrx
{

    public BasicPrxHelper taf_hash(int hashCode)
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

    public int testHello(String s, int i, long l, boolean b, byte c, byte [] vt, java.util.Map<String, String> mp, com.qq.java.test.basic.Send send, com.qq.taf.holder.JceStringHolder r)
    {
        return testHello(s, i, l, b, c, vt, mp, send, r, __defaultContext());
    }

    @SuppressWarnings("unchecked")
    public int testHello(String s, int i, long l, boolean b, byte c, byte [] vt, java.util.Map<String, String> mp, com.qq.java.test.basic.Send send, com.qq.taf.holder.JceStringHolder r, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(s, 1);
        _os.write(i, 2);
        _os.write(l, 3);
        _os.write(b, 4);
        _os.write(c, 5);
        _os.write(vt, 6);
        _os.write(mp, 7);
        _os.write(send, 8);
        if(r.value != null)         _os.write(r.value, 9);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        byte[] _returnSBuffer = taf_invoke("testHello", _sBuffer, __ctx, status);

        com.qq.taf.jce.JceInputStream _is = new com.qq.taf.jce.JceInputStream(_returnSBuffer);
        _is.setServerEncoding(sServerEncoding);
        int _ret = 0;
        _ret = (int) _is.read(_ret, 0, true);
        r.value = "";
        r.value = (String) _is.read(r.value, 9, true);
        return _ret;
    }

    public void async_testHello(com.qq.java.test.basic.BasicPrxCallback callback, String s, int i, long l, boolean b, byte c, byte [] vt, java.util.Map<String, String> mp, com.qq.java.test.basic.Send send)
    {
        async_testHello(callback, s, i, l, b, c, vt, mp, send, __defaultContext());
    }

    public void async_testHello(com.qq.java.test.basic.BasicPrxCallback callback, String s, int i, long l, boolean b, byte c, byte [] vt, java.util.Map<String, String> mp, com.qq.java.test.basic.Send send, java.util.Map __ctx)
    {
        com.qq.taf.jce.JceOutputStream _os = new com.qq.taf.jce.JceOutputStream(0);
        _os.setServerEncoding(sServerEncoding);
        _os.write(s, 1);
        _os.write(i, 2);
        _os.write(l, 3);
        _os.write(b, 4);
        _os.write(c, 5);
        _os.write(vt, 6);
        _os.write(mp, 7);
        _os.write(send, 8);
        byte[] _sBuffer = com.qq.taf.jce.JceUtil.getJceBufArray(_os.getByteBuffer());

        java.util.HashMap<String, String> status = new java.util.HashMap<String, String>();

        taf_invokeAsync(callback, "testHello", _sBuffer, __ctx, status);

    }

}
