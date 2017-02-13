// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

package com.duowan.QUAN;

public final class FavorType
{
    private static FavorType[] __values = new FavorType[8];
    private int __value;
    private String __T = new String();

    public static final int _FAVORY = 0;
    public static final FavorType FAVORY = new FavorType(0,_FAVORY,"FAVORY");
    public static final int _FAVORN = 1;
    public static final FavorType FAVORN = new FavorType(1,_FAVORN,"FAVORN");
    public static final int _REPORTY = 2;
    public static final FavorType REPORTY = new FavorType(2,_REPORTY,"REPORTY");
    public static final int _REPORTN = 3;
    public static final FavorType REPORTN = new FavorType(3,_REPORTN,"REPORTN");
    public static final int _REMOVEY = 4;
    public static final FavorType REMOVEY = new FavorType(4,_REMOVEY,"REMOVEY");
    public static final int _REMOVEN = 5;
    public static final FavorType REMOVEN = new FavorType(5,_REMOVEN,"REMOVEN");
    public static final int _CLEANY = 6;
    public static final FavorType CLEANY = new FavorType(6,_CLEANY,"CLEANY");
    public static final int _CLEANN = 7;
    public static final FavorType CLEANN = new FavorType(7,_CLEANN,"CLEANN");

    public static FavorType convert(int val)
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

    public static FavorType convert(String val)
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

    private FavorType(int index, int val, String s)
    {
        __T = s;
        __value = val;
        __values[index] = this;
    }

}
