// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.1 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/MiniGameProto_new.jce'
// **********************************************************************

package MiniGameProto;

public final class TTestB extends com.qq.taf.jce.JceStruct
{
    public String className()
    {
        return "MiniGameProto.TTestB";
    }

    public byte [] data = (byte[]) new byte[1];

    public int len = (int)0;

    public byte [] getData()
    {
        return data;
    }

    public void  setData(byte [] data)
    {
        this.data = data;
    }

    public int getLen()
    {
        return len;
    }

    public void  setLen(int len)
    {
        this.len = len;
    }

    public TTestB()
    {
    }

    public TTestB(byte [] data, int len)
    {
        this.data = data;
        this.len = len;
    }

    public boolean equals(Object o)
    {
        TTestB t = (TTestB) o;
        return (
            com.qq.taf.jce.JceUtil.equals(data, t.data) && 
            com.qq.taf.jce.JceUtil.equals(len, t.len) );
    }

    public void writeTo(com.qq.taf.jce.JceOutputStream _os)
    {
        try
        {
            _os.write(data, 0);
            _os.write(len, 1);
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }

    public void readFrom(com.qq.taf.jce.JceInputStream _is)
    {
        try
        {
            data = (byte[]) new byte[1];
            byte __var_2 = 0;
            ((byte[])data)[0] = __var_2;
            data = (byte []) _is.read(data, 0, false);

            len = 0;
            len = (int) _is.read(len, 1, false);

        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }

    public void display(java.lang.StringBuffer _os, int _level)
    {
    }

}
