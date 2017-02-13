// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.1 by WSRD Tencent.
// Generated from `Test.jce'
// **********************************************************************

using System;
namespace Test
{

    public sealed class TestInfo : Wup.Jce.JceStruct
    {
        int _ibegin = 0;
        public int ibegin
        {
            get
            {
                 return _ibegin;
            }
            set
            {
                _ibegin = value; 
            }
        }

        bool _b = true;
        public bool b
        {
            get
            {
                 return _b;
            }
            set
            {
                _b = value; 
            }
        }

        short _si = 0;
        public short si
        {
            get
            {
                 return _si;
            }
            set
            {
                _si = value; 
            }
        }

        byte _by = 0;
        public byte by
        {
            get
            {
                 return _by;
            }
            set
            {
                _by = value; 
            }
        }

        int _ii = 0;
        public int ii
        {
            get
            {
                 return _ii;
            }
            set
            {
                _ii = value; 
            }
        }

        long _li = 0;
        public long li
        {
            get
            {
                 return _li;
            }
            set
            {
                _li = value; 
            }
        }

        float _f = 0;
        public float f
        {
            get
            {
                 return _f;
            }
            set
            {
                _f = value; 
            }
        }

        double _d = 0;
        public double d
        {
            get
            {
                 return _d;
            }
            set
            {
                _d = value; 
            }
        }

        string _s = "";
        public string s
        {
            get
            {
                 return _s;
            }
            set
            {
                _s = value; 
            }
        }

        public System.Collections.Generic.List<int> vi {get; set;} 

        public System.Collections.Generic.Dictionary<int, string> mi {get; set;} 

        public A aa {get; set;} 

        int _iend = 0;
        public int iend
        {
            get
            {
                 return _iend;
            }
            set
            {
                _iend = value; 
            }
        }

        public System.Collections.Generic.List<byte> vb {get; set;} 

        public System.Collections.Generic.List<A> vi2 {get; set;} 

        public System.Collections.Generic.Dictionary<int, A> mi2 {get; set;} 

        long _uii = 0;
        public long uii
        {
            get
            {
                 return _uii;
            }
            set
            {
                _uii = value; 
            }
        }

        public System.Collections.Generic.Dictionary<string, System.Collections.Generic.List<A>> msv {get; set;} 

        public System.Collections.Generic.List<float> vf {get; set;} 

        public override void WriteTo(Wup.Jce.JceOutputStream _os)
        {
            _os.Write(ibegin, 0);
            _os.Write(b, 1);
            _os.Write(si, 2);
            _os.Write(by, 3);
            _os.Write(ii, 4);
            _os.Write(li, 5);
            _os.Write(f, 6);
            _os.Write(d, 7);
            _os.Write(s, 8);
            _os.Write(vi, 9);
            _os.Write(mi, 10);
            _os.Write(aa, 11);
            _os.Write(iend, 12);
            _os.Write(vb, 13);
            _os.Write(vi2, 15);
            _os.Write(mi2, 16);
            _os.Write(uii, 17);
            _os.Write(msv, 18);
            _os.Write(vf, 19);
        }

        public override void ReadFrom(Wup.Jce.JceInputStream _is)
        {
            ibegin = (int) _is.Read(ibegin, 0, true);

            b = (bool) _is.Read(b, 1, true);

            si = (short) _is.Read(si, 2, true);

            by = (byte) _is.Read(by, 3, true);

            ii = (int) _is.Read(ii, 4, true);

            li = (long) _is.Read(li, 5, true);

            f = (float) _is.Read(f, 6, true);

            d = (double) _is.Read(d, 7, true);

            s = (string) _is.Read(s, 8, true);

            vi = (System.Collections.Generic.List<int>) _is.Read(vi, 9, true);

            mi = (System.Collections.Generic.Dictionary<int, string>) _is.Read(mi, 10, true);

            aa = (A) _is.Read(aa, 11, true);

            iend = (int) _is.Read(iend, 12, true);

            vb = (System.Collections.Generic.List<byte>) _is.Read(vb, 13, true);

            vi2 = (System.Collections.Generic.List<A>) _is.Read(vi2, 15, true);

            mi2 = (System.Collections.Generic.Dictionary<int, A>) _is.Read(mi2, 16, true);

            uii = (long) _is.Read(uii, 17, true);

            msv = (System.Collections.Generic.Dictionary<string, System.Collections.Generic.List<A>>) _is.Read(msv, 18, true);

            vf = (System.Collections.Generic.List<float>) _is.Read(vf, 19, false);

        }

        public override void Display(System.Text.StringBuilder _os, int _level)
        {
            Wup.Jce.JceDisplayer _ds = new Wup.Jce.JceDisplayer(_os, _level);
            _ds.Display(ibegin, "ibegin");
            _ds.Display(b, "b");
            _ds.Display(si, "si");
            _ds.Display(by, "by");
            _ds.Display(ii, "ii");
            _ds.Display(li, "li");
            _ds.Display(f, "f");
            _ds.Display(d, "d");
            _ds.Display(s, "s");
            _ds.Display(vi, "vi");
            _ds.Display(mi, "mi");
            _ds.Display(aa, "aa");
            _ds.Display(iend, "iend");
            _ds.Display(vb, "vb");
            _ds.Display(vi2, "vi2");
            _ds.Display(mi2, "mi2");
            _ds.Display(uii, "uii");
            _ds.Display(msv, "msv");
            _ds.Display(vf, "vf");
        }

    }
}
