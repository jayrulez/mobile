// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"

@interface MttPushSysNotify : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(cPriority,setCPriority:)) JceInt8 JV2_PROP_NM(r,0,cPriority);
@property (nonatomic, assign, JV2_PROP_GS_V2(cType,setCType:)) JceInt8 JV2_PROP_NM(r,1,cType);
@property (nonatomic, retain, JV2_PROP_GS_V2(strData,setStrData:)) NSString* JV2_PROP_NM(r,2,strData);

@end
