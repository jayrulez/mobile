// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

package com.duowan.QUAN;

public final class SType
{
    private static SType[] __values = new SType[7];
    private int __value;
    private String __T = new String();

    public static final int _FRIEND = 0;
    public static final SType FRIEND = new SType(0,_FRIEND,"FRIEND");
    public static final int _FFRIEND = 1;
    public static final SType FFRIEND = new SType(1,_FFRIEND,"FFRIEND");
    public static final int _RECMD = 2;
    public static final SType RECMD = new SType(2,_RECMD,"RECMD");
    public static final int _SYS = 3;
    public static final SType SYS = new SType(3,_SYS,"SYS");
    public static final int _ME = 4;
    public static final SType ME = new SType(4,_ME,"ME");
    public static final int _GUIDE = 5;
    public static final SType GUIDE = new SType(5,_GUIDE,"GUIDE");
    public static final int _NONE = 6;
    public static final SType NONE = new SType(6,_NONE,"NONE");

    public static SType convert(int val)
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

    public static SType convert(String val)
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

    private SType(int index, int val, String s)
    {
        __T = s;
        __value = val;
        __values[index] = this;
    }

}
