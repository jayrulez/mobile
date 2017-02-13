// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.1 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/MQQDLoaderServant.jce'
// **********************************************************************

package MQQDLoader;

public final class AppInfo extends com.qq.taf.jce.JceStruct
{
    public String className()
    {
        return "MQQDLoader.AppInfo";
    }

    public String sAppName = (String)"";

    public int nAppId = (int)0;

    public int nAppUid = (int)0;

    public String sVersion = (String)"";

    public String sVersionName = (String)"";

    public int nAppSize = (int)0;

    public String sPubDate = (String)"";

    public String sIconUrl = (String)"";

    public String sDescription = (String)"";

    public byte nStar = (byte)0;

    public String sDownUrl = (String)"";

    public String getSAppName()
    {
        return sAppName;
    }

    public void  setSAppName(String sAppName)
    {
        this.sAppName = sAppName;
    }

    public int getNAppId()
    {
        return nAppId;
    }

    public void  setNAppId(int nAppId)
    {
        this.nAppId = nAppId;
    }

    public int getNAppUid()
    {
        return nAppUid;
    }

    public void  setNAppUid(int nAppUid)
    {
        this.nAppUid = nAppUid;
    }

    public String getSVersion()
    {
        return sVersion;
    }

    public void  setSVersion(String sVersion)
    {
        this.sVersion = sVersion;
    }

    public String getSVersionName()
    {
        return sVersionName;
    }

    public void  setSVersionName(String sVersionName)
    {
        this.sVersionName = sVersionName;
    }

    public int getNAppSize()
    {
        return nAppSize;
    }

    public void  setNAppSize(int nAppSize)
    {
        this.nAppSize = nAppSize;
    }

    public String getSPubDate()
    {
        return sPubDate;
    }

    public void  setSPubDate(String sPubDate)
    {
        this.sPubDate = sPubDate;
    }

    public String getSIconUrl()
    {
        return sIconUrl;
    }

    public void  setSIconUrl(String sIconUrl)
    {
        this.sIconUrl = sIconUrl;
    }

    public String getSDescription()
    {
        return sDescription;
    }

    public void  setSDescription(String sDescription)
    {
        this.sDescription = sDescription;
    }

    public byte getNStar()
    {
        return nStar;
    }

    public void  setNStar(byte nStar)
    {
        this.nStar = nStar;
    }

    public String getSDownUrl()
    {
        return sDownUrl;
    }

    public void  setSDownUrl(String sDownUrl)
    {
        this.sDownUrl = sDownUrl;
    }

    public AppInfo()
    {
    }

    public AppInfo(String sAppName, int nAppId, int nAppUid, String sVersion, String sVersionName, int nAppSize, String sPubDate, String sIconUrl, String sDescription, byte nStar, String sDownUrl)
    {
        this.sAppName = sAppName;
        this.nAppId = nAppId;
        this.nAppUid = nAppUid;
        this.sVersion = sVersion;
        this.sVersionName = sVersionName;
        this.nAppSize = nAppSize;
        this.sPubDate = sPubDate;
        this.sIconUrl = sIconUrl;
        this.sDescription = sDescription;
        this.nStar = nStar;
        this.sDownUrl = sDownUrl;
    }

    public boolean equals(Object o)
    {
        AppInfo t = (AppInfo) o;
        return (
            com.qq.taf.jce.JceUtil.equals(sAppName, t.sAppName) && 
            com.qq.taf.jce.JceUtil.equals(nAppId, t.nAppId) && 
            com.qq.taf.jce.JceUtil.equals(nAppUid, t.nAppUid) && 
            com.qq.taf.jce.JceUtil.equals(sVersion, t.sVersion) && 
            com.qq.taf.jce.JceUtil.equals(sVersionName, t.sVersionName) && 
            com.qq.taf.jce.JceUtil.equals(nAppSize, t.nAppSize) && 
            com.qq.taf.jce.JceUtil.equals(sPubDate, t.sPubDate) && 
            com.qq.taf.jce.JceUtil.equals(sIconUrl, t.sIconUrl) && 
            com.qq.taf.jce.JceUtil.equals(sDescription, t.sDescription) && 
            com.qq.taf.jce.JceUtil.equals(nStar, t.nStar) && 
            com.qq.taf.jce.JceUtil.equals(sDownUrl, t.sDownUrl) );
    }

    public void writeTo(com.qq.taf.jce.JceOutputStream _os)
    {
        try
        {
            _os.write(sAppName, 0);
            _os.write(nAppId, 1);
            _os.write(nAppUid, 2);
            _os.write(sVersion, 3);
            _os.write(sVersionName, 4);
            _os.write(nAppSize, 5);
            _os.write(sPubDate, 6);
            _os.write(sIconUrl, 7);
            _os.write(sDescription, 8);
            _os.write(nStar, 9);
            _os.write(sDownUrl, 10);
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
            sAppName = "";
            sAppName = (String) _is.read(sAppName, 0, true);

            nAppId = 0;
            nAppId = (int) _is.read(nAppId, 1, true);

            nAppUid = 0;
            nAppUid = (int) _is.read(nAppUid, 2, true);

            sVersion = "";
            sVersion = (String) _is.read(sVersion, 3, true);

            sVersionName = "";
            sVersionName = (String) _is.read(sVersionName, 4, true);

            nAppSize = 0;
            nAppSize = (int) _is.read(nAppSize, 5, true);

            sPubDate = "";
            sPubDate = (String) _is.read(sPubDate, 6, true);

            sIconUrl = "";
            sIconUrl = (String) _is.read(sIconUrl, 7, true);

            sDescription = "";
            sDescription = (String) _is.read(sDescription, 8, true);

            nStar = 0;
            nStar = (byte) _is.read(nStar, 9, true);

            sDownUrl = "";
            sDownUrl = (String) _is.read(sDownUrl, 10, true);

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
