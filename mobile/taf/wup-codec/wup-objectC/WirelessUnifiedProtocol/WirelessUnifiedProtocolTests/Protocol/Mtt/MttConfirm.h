// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"

@interface MttConfirm : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(wVersion,setWVersion:)) JceInt16 JV2_PROP_NM(r,0,wVersion);
@property (nonatomic, retain, JV2_PROP_GS_V2(sSessionID,setSSessionID:)) NSString* JV2_PROP_NM(r,1,sSessionID);
@property (nonatomic, assign, JV2_PROP_GS_V2(iRequestID,setIRequestID:)) JceInt32 JV2_PROP_NM(r,2,iRequestID);
@property (nonatomic, assign, JV2_PROP_GS_V2(iExpectSequenceID,setIExpectSequenceID:)) JceInt32 JV2_PROP_NM(r,3,iExpectSequenceID);

@end
