// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

#import "JceObjectV2.h"

@interface QUANContentInfo : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(lCId,setLCId:)) JceInt64 JV2_PROP_NM(o,0,lCId);
@property (nonatomic, assign, JV2_PROP_GS_V2(lSId,setLSId:)) JceInt64 JV2_PROP_NM(o,1,lSId);
@property (nonatomic, assign, JV2_PROP_GS_V2(lUId,setLUId:)) JceInt64 JV2_PROP_NM(o,2,lUId);
@property (nonatomic, assign, JV2_PROP_GS_V2(isFirst,setIsFirst:)) JceBool JV2_PROP_NM(o,3,isFirst);
@property (nonatomic, retain, JV2_PROP_GS_V2(Time,setTime:)) NSString* JV2_PROP_NM(o,4,Time);
@property (nonatomic, retain, JV2_PROP_GS_V2(sContent,setSContent:)) NSString* JV2_PROP_NM(o,5,sContent);
@property (nonatomic, assign, JV2_PROP_GS_V2(iFavorNum,setIFavorNum:)) JceInt32 JV2_PROP_NM(o,6,iFavorNum);
@property (nonatomic, assign, JV2_PROP_GS_V2(isFavor,setIsFavor:)) JceBool JV2_PROP_NM(o,7,isFavor);
@property (nonatomic, assign, JV2_PROP_GS_V2(iPortrait,setIPortrait:)) JceInt32 JV2_PROP_NM(o,8,iPortrait);

@end
