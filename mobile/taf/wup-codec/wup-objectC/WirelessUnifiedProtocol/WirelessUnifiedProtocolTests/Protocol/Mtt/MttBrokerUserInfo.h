// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"

@interface MttBrokerUserInfo : JceObjectV2

@property (nonatomic, retain, JV2_PROP_GS_V2(sGUID,setSGUID:)) NSData* JV2_PROP_NM(r,0,sGUID);
@property (nonatomic, retain, JV2_PROP_GS_V2(sQUA,setSQUA:)) NSString* JV2_PROP_NM(r,1,sQUA);
@property (nonatomic, retain, JV2_PROP_GS_V2(sLC,setSLC:)) NSString* JV2_PROP_NM(r,2,sLC);
@property (nonatomic, retain, JV2_PROP_GS_V2(sIMEI,setSIMEI:)) NSString* JV2_PROP_NM(r,3,sIMEI);
@property (nonatomic, retain, JV2_PROP_GS_V2(sSession,setSSession:)) NSString* JV2_PROP_NM(r,4,sSession);
@property (nonatomic, assign, JV2_PROP_GS_V2(wTabId,setWTabId:)) JceInt16 JV2_PROP_NM(r,5,wTabId);
@property (nonatomic, retain, JV2_PROP_GS_V2(sIMSI,setSIMSI:)) NSString* JV2_PROP_NM(o,6,sIMSI);
@property (nonatomic, retain, JV2_PROP_GS_V2(sCellid,setSCellid:)) NSString* JV2_PROP_NM(o,7,sCellid);
@property (nonatomic, retain, JV2_PROP_GS_V2(sLAC,setSLAC:)) NSString* JV2_PROP_NM(o,8,sLAC);
@property (nonatomic, retain, JV2_PROP_GS_V2(sAPN,setSAPN:)) NSString* JV2_PROP_NM(o,9,sAPN);
@property (nonatomic, retain, JV2_PROP_GS_V2(sChannelId,setSChannelId:)) NSString* JV2_PROP_NM(o,10,sChannelId);
@property (nonatomic, retain, JV2_PROP_GS_V2(sUin,setSUin:)) NSString* JV2_PROP_NM(o,11,sUin);
@property (nonatomic, retain, JV2_PROP_GS_V2(sUserSession,setSUserSession:)) NSString* JV2_PROP_NM(o,12,sUserSession);
@property (nonatomic, assign, JV2_PROP_GS_V2(cStoreAbility,setCStoreAbility:)) JceInt8 JV2_PROP_NM(o,13,cStoreAbility);
@property (nonatomic, assign, JV2_PROP_GS_V2(iLanguageType,setILanguageType:)) JceInt32 JV2_PROP_NM(o,14,iLanguageType);
@property (nonatomic, assign, JV2_PROP_GS_V2(iMCC,setIMCC:)) JceInt16 JV2_PROP_NM(o,15,iMCC);
@property (nonatomic, assign, JV2_PROP_GS_V2(iMNC,setIMNC:)) JceInt16 JV2_PROP_NM(o,16,iMNC);
@property (nonatomic, assign, JV2_PROP_GS_V2(cARMV7,setCARMV7:)) JceInt8 JV2_PROP_NM(o,17,cARMV7);

@end
