// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.1 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/MiniGameProto_new.jce'
// **********************************************************************

package MiniGameProto;

public final class TTableInfo extends com.qq.taf.jce.JceStruct
{
    public String className()
    {
        return "MiniGameProto.TTableInfo";
    }

    public short nTableID = (short)0;

    public short nTableStatus = (short)0;

    public java.util.Vector vecPlayerList = new java.util.Vector();

    public short getNTableID()
    {
        return nTableID;
    }

    public void  setNTableID(short nTableID)
    {
        this.nTableID = nTableID;
    }

    public short getNTableStatus()
    {
        return nTableStatus;
    }

    public void  setNTableStatus(short nTableStatus)
    {
        this.nTableStatus = nTableStatus;
    }

    public java.util.Vector getVecPlayerList()
    {
        return vecPlayerList;
    }

    public void  setVecPlayerList(java.util.Vector vecPlayerList)
    {
        this.vecPlayerList = vecPlayerList;
    }

    public TTableInfo()
    {
    }

    public TTableInfo(short nTableID, short nTableStatus, java.util.Vector vecPlayerList)
    {
        this.nTableID = nTableID;
        this.nTableStatus = nTableStatus;
        this.vecPlayerList = vecPlayerList;
    }

    public boolean equals(Object o)
    {
        TTableInfo t = (TTableInfo) o;
        return (
            com.qq.taf.jce.JceUtil.equals(nTableID, t.nTableID) && 
            com.qq.taf.jce.JceUtil.equals(nTableStatus, t.nTableStatus) && 
            com.qq.taf.jce.JceUtil.equals(vecPlayerList, t.vecPlayerList) );
    }

    public void writeTo(com.qq.taf.jce.JceOutputStream _os)
    {
        try
        {
            _os.write(nTableID, 0);
            _os.write(nTableStatus, 1);
            _os.write(vecPlayerList, 2);
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
            nTableID = 0;
            nTableID = (short) _is.read(nTableID, 0, true);

            nTableStatus = 0;
            nTableStatus = (short) _is.read(nTableStatus, 1, true);

            vecPlayerList = new java.util.Vector();
            MiniGameProto.TPlayerInfo __var_14 = new MiniGameProto.TPlayerInfo();
            vecPlayerList.addElement(__var_14);
            vecPlayerList = (java.util.Vector) _is.read(vecPlayerList, 2, true);

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
