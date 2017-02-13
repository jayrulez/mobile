// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.1 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/MiniGameProto_new.jce'
// **********************************************************************

package MiniGameProto;

public final class ROOM_EVENTID
{
    private static ROOM_EVENTID[] __values = new ROOM_EVENTID[18];
    private int __value;
    private String __T = new String();

    public static final int _EV_NULL = 0;
    public static final ROOM_EVENTID EV_NULL = new ROOM_EVENTID(_EV_NULL,"EV_NULL");
    public static final int _EV_ENTER = 1;
    public static final ROOM_EVENTID EV_ENTER = new ROOM_EVENTID(_EV_ENTER,"EV_ENTER");
    public static final int _EV_LEAVE = 2;
    public static final ROOM_EVENTID EV_LEAVE = new ROOM_EVENTID(_EV_LEAVE,"EV_LEAVE");
    public static final int _EV_SITDOWN = 3;
    public static final ROOM_EVENTID EV_SITDOWN = new ROOM_EVENTID(_EV_SITDOWN,"EV_SITDOWN");
    public static final int _EV_STANDUP = 4;
    public static final ROOM_EVENTID EV_STANDUP = new ROOM_EVENTID(_EV_STANDUP,"EV_STANDUP");
    public static final int _EV_START = 5;
    public static final ROOM_EVENTID EV_START = new ROOM_EVENTID(_EV_START,"EV_START");
    public static final int _EV_LOCKTABLE = 6;
    public static final ROOM_EVENTID EV_LOCKTABLE = new ROOM_EVENTID(_EV_LOCKTABLE,"EV_LOCKTABLE");
    public static final int _EV_VIEWGAME = 7;
    public static final ROOM_EVENTID EV_VIEWGAME = new ROOM_EVENTID(_EV_VIEWGAME,"EV_VIEWGAME");
    public static final int _EV_CANCELVIEW = 8;
    public static final ROOM_EVENTID EV_CANCELVIEW = new ROOM_EVENTID(_EV_CANCELVIEW,"EV_CANCELVIEW");
    public static final int _EV_GAMEOPEN = 9;
    public static final ROOM_EVENTID EV_GAMEOPEN = new ROOM_EVENTID(_EV_GAMEOPEN,"EV_GAMEOPEN");
    public static final int _EV_GAMECLOSE = 10;
    public static final ROOM_EVENTID EV_GAMECLOSE = new ROOM_EVENTID(_EV_GAMECLOSE,"EV_GAMECLOSE");
    public static final int _EV_SCORECHG = 11;
    public static final ROOM_EVENTID EV_SCORECHG = new ROOM_EVENTID(_EV_SCORECHG,"EV_SCORECHG");
    public static final int _EV_NETSPDCHG = 12;
    public static final ROOM_EVENTID EV_NETSPDCHG = new ROOM_EVENTID(_EV_NETSPDCHG,"EV_NETSPDCHG");
    public static final int _EV_BEKICKED = 13;
    public static final ROOM_EVENTID EV_BEKICKED = new ROOM_EVENTID(_EV_BEKICKED,"EV_BEKICKED");
    public static final int _EV_UNLOCKTABLE = 14;
    public static final ROOM_EVENTID EV_UNLOCKTABLE = new ROOM_EVENTID(_EV_UNLOCKTABLE,"EV_UNLOCKTABLE");
    public static final int _EV_BECANCELD = 15;
    public static final ROOM_EVENTID EV_BECANCELD = new ROOM_EVENTID(_EV_BECANCELD,"EV_BECANCELD");
    public static final int _EV_OFFLINE = 16;
    public static final ROOM_EVENTID EV_OFFLINE = new ROOM_EVENTID(_EV_OFFLINE,"EV_OFFLINE");
    public static final int _EV_RELOGIN = 17;
    public static final ROOM_EVENTID EV_RELOGIN = new ROOM_EVENTID(_EV_RELOGIN,"EV_RELOGIN");

    public static ROOM_EVENTID convert(int val)
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

    public static ROOM_EVENTID convert(String val)
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

    private ROOM_EVENTID(int val, String s)
    {
        __T = s;
        __value = val;
        __values[val] = this;
    }

}
