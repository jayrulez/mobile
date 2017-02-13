// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.1 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/MQQDLoaderServant.jce'
// **********************************************************************

package MQQDLoader;

public final class MQQDL_ERRCODE
{
    private static MQQDL_ERRCODE[] __values = new MQQDL_ERRCODE[3];
    private int __value;
    private String __T = new String();

    public static final int _MQQDL_ERR_NONE = 0;
    public static final MQQDL_ERRCODE MQQDL_ERR_NONE = new MQQDL_ERRCODE(_MQQDL_ERR_NONE,"MQQDL_ERR_NONE");
    public static final int _MQQDL_ERR_REQ_FORMAT = 1;
    public static final MQQDL_ERRCODE MQQDL_ERR_REQ_FORMAT = new MQQDL_ERRCODE(_MQQDL_ERR_REQ_FORMAT,"MQQDL_ERR_REQ_FORMAT");
    public static final int _MQQDL_ERR_SERVICE_FAIL = 2;
    public static final MQQDL_ERRCODE MQQDL_ERR_SERVICE_FAIL = new MQQDL_ERRCODE(_MQQDL_ERR_SERVICE_FAIL,"MQQDL_ERR_SERVICE_FAIL");

    public static MQQDL_ERRCODE convert(int val)
    {
        for(int __i = 0; __i < __values.length; ++__i)
        {
            if(__values[__i].value() == val)
            {
                return __values[__i];
            }
        }
        return null;
    }

    public static MQQDL_ERRCODE convert(String val)
    {
        for(int __i = 0; __i < __values.length; ++__i)
        {
            if(__values[__i].toString().equals(val))
            {
                return __values[__i];
            }
        }
        return null;
    }

    public int value()
    {
        return __value;
    }

    public String toString()
    {
        return __T;
    }

    private MQQDL_ERRCODE(int val, String s)
    {
        __T = s;
        __value = val;
        __values[val] = this;
    }

}
