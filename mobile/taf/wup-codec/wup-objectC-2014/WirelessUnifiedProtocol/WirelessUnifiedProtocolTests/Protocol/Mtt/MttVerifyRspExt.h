// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"

@interface MttVerifyRspExt : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(iVerifyId,setIVerifyId:)) JceInt32 JV2_PROP_NM(r,0,iVerifyId);
@property (nonatomic, assign, JV2_PROP_GS_V2(iCommand,setICommand:)) JceInt32 JV2_PROP_NM(r,1,iCommand);
@property (nonatomic, retain, JV2_PROP_GS_V2(vParameter,setVParameter:)) NSData* JV2_PROP_NM(r,2,vParameter);
@property (nonatomic, assign, JV2_PROP_GS_V2(iServerTime,setIServerTime:)) JceInt32 JV2_PROP_NM(r,3,iServerTime);

@end
