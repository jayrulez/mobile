// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "MttIcon.h"
#import "MttPageRsp.h"

@interface MttBrowserRsp : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(version,setVersion:)) JceInt8 JV2_PROP_NM(r,0,version);
@property (nonatomic, assign, JV2_PROP_GS_V2(resultCode,setResultCode:)) JceInt8 JV2_PROP_NM(r,1,resultCode);
@property (nonatomic, retain, JV2_PROP_GS_V2(resultStr,setResultStr:)) NSString* JV2_PROP_NM(r,2,resultStr);
@property (nonatomic, assign, JV2_PROP_GS_V2(currServerTime,setCurrServerTime:)) JceInt32 JV2_PROP_NM(r,3,currServerTime);
@property (nonatomic, retain, JV2_PROP_GS_V2(allPageId,setAllPageId:)) NSArray* JV2_PROP_EX(r,4,allPageId,VONSNumber);
@property (nonatomic, retain, JV2_PROP_GS_V2(pages,setPages:)) NSArray* JV2_PROP_EX(r,5,pages,VOMTTPageRsp);
@property (nonatomic, retain, JV2_PROP_GS_V2(imageRes,setImageRes:)) NSArray* JV2_PROP_EX(r,6,imageRes,VOMTTIcon);

@end
