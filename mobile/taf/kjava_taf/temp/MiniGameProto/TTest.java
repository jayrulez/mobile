// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 1.5.1 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/MiniGameProto_new.jce'
// **********************************************************************

package MiniGameProto;

public final class TTest extends com.qq.taf.jce.JceStruct
{
    public String className()
    {
        return "MiniGameProto.TTest";
    }

    public MiniGameProto.TTestA x = new MiniGameProto.TTestA();

    public MiniGameProto.TTestB y1 = new MiniGameProto.TTestB();

    public MiniGameProto.TTestB y2 = new MiniGameProto.TTestB();

    public MiniGameProto.TTestB y3 = new MiniGameProto.TTestB();

    public MiniGameProto.TTestB y4 = new MiniGameProto.TTestB();

    public MiniGameProto.TTestB y5 = new MiniGameProto.TTestB();

    public MiniGameProto.TTestB y6 = new MiniGameProto.TTestB();

    public MiniGameProto.TTestB y7 = new MiniGameProto.TTestB();

    public MiniGameProto.TTestA getX()
    {
        return x;
    }

    public void  setX(MiniGameProto.TTestA x)
    {
        this.x = x;
    }

    public MiniGameProto.TTestB getY1()
    {
        return y1;
    }

    public void  setY1(MiniGameProto.TTestB y1)
    {
        this.y1 = y1;
    }

    public MiniGameProto.TTestB getY2()
    {
        return y2;
    }

    public void  setY2(MiniGameProto.TTestB y2)
    {
        this.y2 = y2;
    }

    public MiniGameProto.TTestB getY3()
    {
        return y3;
    }

    public void  setY3(MiniGameProto.TTestB y3)
    {
        this.y3 = y3;
    }

    public MiniGameProto.TTestB getY4()
    {
        return y4;
    }

    public void  setY4(MiniGameProto.TTestB y4)
    {
        this.y4 = y4;
    }

    public MiniGameProto.TTestB getY5()
    {
        return y5;
    }

    public void  setY5(MiniGameProto.TTestB y5)
    {
        this.y5 = y5;
    }

    public MiniGameProto.TTestB getY6()
    {
        return y6;
    }

    public void  setY6(MiniGameProto.TTestB y6)
    {
        this.y6 = y6;
    }

    public MiniGameProto.TTestB getY7()
    {
        return y7;
    }

    public void  setY7(MiniGameProto.TTestB y7)
    {
        this.y7 = y7;
    }

    public TTest()
    {
    }

    public TTest(MiniGameProto.TTestA x, MiniGameProto.TTestB y1, MiniGameProto.TTestB y2, MiniGameProto.TTestB y3, MiniGameProto.TTestB y4, MiniGameProto.TTestB y5, MiniGameProto.TTestB y6, MiniGameProto.TTestB y7)
    {
        this.x = x;
        this.y1 = y1;
        this.y2 = y2;
        this.y3 = y3;
        this.y4 = y4;
        this.y5 = y5;
        this.y6 = y6;
        this.y7 = y7;
    }

    public boolean equals(Object o)
    {
        TTest t = (TTest) o;
        return (
            com.qq.taf.jce.JceUtil.equals(x, t.x) && 
            com.qq.taf.jce.JceUtil.equals(y1, t.y1) && 
            com.qq.taf.jce.JceUtil.equals(y2, t.y2) && 
            com.qq.taf.jce.JceUtil.equals(y3, t.y3) && 
            com.qq.taf.jce.JceUtil.equals(y4, t.y4) && 
            com.qq.taf.jce.JceUtil.equals(y5, t.y5) && 
            com.qq.taf.jce.JceUtil.equals(y6, t.y6) && 
            com.qq.taf.jce.JceUtil.equals(y7, t.y7) );
    }

    public void writeTo(com.qq.taf.jce.JceOutputStream _os)
    {
        try
        {
            _os.write(x, 0);
            _os.write(y1, 1);
            _os.write(y2, 2);
            _os.write(y3, 3);
            _os.write(y4, 4);
            _os.write(y5, 5);
            _os.write(y6, 6);
            _os.write(y7, 7);
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
            x = new MiniGameProto.TTestA();
            x = (MiniGameProto.TTestA) _is.read(x, 0, false);

            y1 = new MiniGameProto.TTestB();
            y1 = (MiniGameProto.TTestB) _is.read(y1, 1, false);

            y2 = new MiniGameProto.TTestB();
            y2 = (MiniGameProto.TTestB) _is.read(y2, 2, false);

            y3 = new MiniGameProto.TTestB();
            y3 = (MiniGameProto.TTestB) _is.read(y3, 3, false);

            y4 = new MiniGameProto.TTestB();
            y4 = (MiniGameProto.TTestB) _is.read(y4, 4, false);

            y5 = new MiniGameProto.TTestB();
            y5 = (MiniGameProto.TTestB) _is.read(y5, 5, false);

            y6 = new MiniGameProto.TTestB();
            y6 = (MiniGameProto.TTestB) _is.read(y6, 6, false);

            y7 = new MiniGameProto.TTestB();
            y7 = (MiniGameProto.TTestB) _is.read(y7, 7, false);

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
