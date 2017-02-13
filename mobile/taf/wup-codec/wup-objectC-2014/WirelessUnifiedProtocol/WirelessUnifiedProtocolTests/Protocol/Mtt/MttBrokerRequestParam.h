// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "MttBrokerDisplayInfo.h"
#import "MttBrokerPushRequest.h"

@interface MttBrokerRequestParam : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(cConcurrency,setCConcurrency:)) JceInt8 JV2_PROP_NM(r,0,cConcurrency);
@property (nonatomic, retain, JV2_PROP_GS_V2(sUrl,setSUrl:)) NSString* JV2_PROP_NM(r,1,sUrl);
@property (nonatomic, retain, JV2_PROP_GS_V2(sUserHttpHeader,setSUserHttpHeader:)) NSString* JV2_PROP_NM(r,2,sUserHttpHeader);
@property (nonatomic, retain, JV2_PROP_GS_V2(sPageEncodeName,setSPageEncodeName:)) NSString* JV2_PROP_NM(r,3,sPageEncodeName);
@property (nonatomic, assign, JV2_PROP_GS_V2(cZipType,setCZipType:)) JceInt8 JV2_PROP_NM(r,4,cZipType);
@property (nonatomic, assign, JV2_PROP_GS_V2(cContentType,setCContentType:)) JceInt8 JV2_PROP_NM(o,5,cContentType);
@property (nonatomic, assign, JV2_PROP_GS_V2(cPostEncrypted,setCPostEncrypted:)) JceInt8 JV2_PROP_NM(o,6,cPostEncrypted);
@property (nonatomic, assign, JV2_PROP_GS_V2(cImgQualityType,setCImgQualityType:)) JceInt8 JV2_PROP_NM(o,7,cImgQualityType);
@property (nonatomic, assign, JV2_PROP_GS_V2(wPageSizeKB,setWPageSizeKB:)) JceInt16 JV2_PROP_NM(o,8,wPageSizeKB);
@property (nonatomic, assign, JV2_PROP_GS_V2(wMaxPageSizeKB,setWMaxPageSizeKB:)) JceInt16 JV2_PROP_NM(o,9,wMaxPageSizeKB);
@property (nonatomic, assign, JV2_PROP_GS_V2(cBrand,setCBrand:)) JceInt8 JV2_PROP_NM(o,10,cBrand);
@property (nonatomic, retain, JV2_PROP_GS_V2(stDisplayInfo,setStDisplayInfo:)) MttBrokerDisplayInfo* JV2_PROP_NM(o,11,stDisplayInfo);
@property (nonatomic, retain, JV2_PROP_GS_V2(vImgCacheFNV,setVImgCacheFNV:)) NSArray* JV2_PROP_EX(o,12,vImgCacheFNV,VONSNumber);
@property (nonatomic, assign, JV2_PROP_GS_V2(iEntry,setIEntry:)) JceInt32 JV2_PROP_NM(o,13,iEntry);
@property (nonatomic, assign, JV2_PROP_GS_V2(iEntryType,setIEntryType:)) JceInt32 JV2_PROP_NM(o,14,iEntryType);
@property (nonatomic, assign, JV2_PROP_GS_V2(cReqEncrypted,setCReqEncrypted:)) JceInt8 JV2_PROP_NM(o,15,cReqEncrypted);
@property (nonatomic, assign, JV2_PROP_GS_V2(wVersion,setWVersion:)) JceInt16 JV2_PROP_NM(o,16,wVersion);
@property (nonatomic, assign, JV2_PROP_GS_V2(cHttpsForceProxy,setCHttpsForceProxy:)) JceInt8 JV2_PROP_NM(o,17,cHttpsForceProxy);
@property (nonatomic, assign, JV2_PROP_GS_V2(cLzmaDictOffset,setCLzmaDictOffset:)) JceInt8 JV2_PROP_NM(o,18,cLzmaDictOffset);
@property (nonatomic, assign, JV2_PROP_GS_V2(cReqType,setCReqType:)) JceInt8 JV2_PROP_NM(o,19,cReqType);
@property (nonatomic, retain, JV2_PROP_GS_V2(stPushReq,setStPushReq:)) MttBrokerPushRequest* JV2_PROP_NM(o,20,stPushReq);
@property (nonatomic, assign, JV2_PROP_GS_V2(cSecuritySwitch,setCSecuritySwitch:)) JceInt8 JV2_PROP_NM(o,21,cSecuritySwitch);
@property (nonatomic, assign, JV2_PROP_GS_V2(cReqOriginalPage,setCReqOriginalPage:)) JceInt8 JV2_PROP_NM(o,22,cReqOriginalPage);

@end
