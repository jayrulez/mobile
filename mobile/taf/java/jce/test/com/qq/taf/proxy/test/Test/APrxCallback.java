package com.qq.taf.proxy.test.Test;

public abstract class APrxCallback implements com.qq.taf.proxy.CallbackHandler
{
    protected String __Test__A_all[] = 
    {
        "test"
    };

    protected String sServerEncoding = "GBK";
    public int setServerEncoding(String se){
        sServerEncoding = se;
        return 0;
    }

    public abstract void callback_test(int _ret);

    public abstract void callback_test_exception(int _iRet);

    final public int _onDispatch(String sFuncName, com.qq.taf.ResponsePacket response)
    {

        int iPos = java.util.Arrays.binarySearch(__Test__A_all, sFuncName);
        if(iPos < 0 || iPos >= 1) return -1; //or throw execption?
        switch(iPos)
        {
            case 0:
            {
                if ( response.iRet != com.qq.taf.cnst.JCESERVERSUCCESS.value )
                {
                    callback_test_exception(response.iRet);
                    return response.iRet;
                }
                com.qq.taf.jce.JceInputStream _is = new com.qq.taf.jce.JceInputStream(response.sBuffer);
                _is.setServerEncoding(sServerEncoding);
                int _ret = 0;
                _ret = (int) _is.read(_ret, 0, true);

                callback_test(_ret);
                break;
            }
        }
        return 0;
    }
}
