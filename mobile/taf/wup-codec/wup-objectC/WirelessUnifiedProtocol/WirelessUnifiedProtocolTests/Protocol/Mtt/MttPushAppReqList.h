// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "MttBrokerDisplayInfo.h"

@interface MttPushAppReqList : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(wAppId,setWAppId:)) JceInt16 JV2_PROP_NM(r,0,wAppId);
@property (nonatomic, retain, JV2_PROP_GS_V2(vData,setVData:)) NSData* JV2_PROP_NM(o,1,vData);
@property (nonatomic, assign, JV2_PROP_GS_V2(bValidCookie,setBValidCookie:)) JceInt8 JV2_PROP_NM(o,2,bValidCookie);
@property (nonatomic, retain, JV2_PROP_GS_V2(stDisplayInfo,setStDisplayInfo:)) MttBrokerDisplayInfo* JV2_PROP_NM(o,3,stDisplayInfo);
@property (nonatomic, assign, JV2_PROP_GS_V2(iLastRecvTime,setILastRecvTime:)) JceInt32 JV2_PROP_NM(o,4,iLastRecvTime);
@property (nonatomic, retain, JV2_PROP_GS_V2(sFeatureString,setSFeatureString:)) NSData* JV2_PROP_NM(o,5,sFeatureString);

@end
