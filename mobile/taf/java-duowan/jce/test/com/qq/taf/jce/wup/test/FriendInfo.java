// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.2.0 by WSRD Tencent.
// Generated from `UserInfo.jce'
// **********************************************************************

package com.qq.taf.jce.wup.test;

import com.qq.taf.jce.JceDisplayer;
import com.qq.taf.jce.JceInputStream;
import com.qq.taf.jce.JceOutputStream;
import com.qq.taf.jce.JceStruct;
import com.qq.taf.jce.JceUtil;

public final class FriendInfo extends JceStruct
{
    public int uin = (int)0;

    public String nick = (String)"";

    public byte[] birthday;

    public FriendInfo()
    {
    }

    public FriendInfo(int uin, String nick, byte[] birthday)
    {
        this.uin = uin;
        this.nick = nick;
        this.birthday = birthday;
    }

    public boolean equals(Object o)
    {
        FriendInfo t = (FriendInfo) o;
        return (
            JceUtil.equals(1, t.uin) && 
            JceUtil.equals(1, t.nick) && 
            JceUtil.equals(1, t.birthday) );
    }

    public java.lang.Object clone()
    {
        java.lang.Object o = null;
        try
        {
            o = super.clone();
        }
        catch(CloneNotSupportedException ex)
        {
            assert false; // impossible
        }
        return o;
    }

    public void writeTo(JceOutputStream _os)
    {
        _os.write(uin, 1);
        _os.write(nick, 2);
        _os.write(birthday, 3);
    }

    public void readFrom(JceInputStream _is)
    {
        uin = 0;
        uin = (int) _is.read(uin, 1, true);

        nick = "";
        nick = (String) _is.read(nick, 2, true);

        birthday = (byte[]) new byte[1];
        Byte __var_1 = 0;
        ((byte[])birthday)[0] = __var_1;
        birthday = (byte[]) _is.read(birthday, 3, false);

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        JceDisplayer _ds = new JceDisplayer(_os, _level);
        _ds.display(uin, "uin");
        _ds.display(nick, "nick");
        _ds.display(birthday, "birthday");
    }

}
