// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "MttWeatherInfo.h"

@interface MttWeatherRsp : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(iUpdateTime,setIUpdateTime:)) JceInt32 JV2_PROP_NM(o,0,iUpdateTime);
@property (nonatomic, retain, JV2_PROP_GS_V2(sCityName,setSCityName:)) NSString* JV2_PROP_NM(o,1,sCityName);
@property (nonatomic, retain, JV2_PROP_GS_V2(vWeatherInfo,setVWeatherInfo:)) NSArray* JV2_PROP_EX(o,2,vWeatherInfo,VOMTTWeatherInfo);

@end
