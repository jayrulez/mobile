// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

package com.duowan.QUAN;

public final class IdType
{
    private static IdType[] __values = new IdType[2];
    private int __value;
    private String __T = new String();

    public static final int _SECRET = 0;
    public static final IdType SECRET = new IdType(0,_SECRET,"SECRET");
    public static final int _CONTENT = 1;
    public static final IdType CONTENT = new IdType(1,_CONTENT,"CONTENT");

    public static IdType convert(int val)
    {
        for(int __i = 0; __i < __values.length; ++__i)
        {
            if(__values[__i].value() == val)
            {
                return __values[__i];
            }
        }
        assert false;
        return null;
    }

    public static IdType convert(String val)
    {
        for(int __i = 0; __i < __values.length; ++__i)
        {
            if(__values[__i].toString().equals(val))
            {
                return __values[__i];
            }
        }
        assert false;
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

    private IdType(int index, int val, String s)
    {
        __T = s;
        __value = val;
        __values[index] = this;
    }

}
