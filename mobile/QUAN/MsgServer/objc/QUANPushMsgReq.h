// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `MsgBase.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "QUANIdRange.h"
#import "QUANUserId.h"

@interface QUANPushMsgReq : JceObjectV2

@property (nonatomic, retain, JV2_PROP_GS_V2(tUserId,setTUserId:)) QUANUserId* JV2_PROP_NM(o,0,tUserId);
@property (nonatomic, retain, JV2_PROP_GS_V2(tRange,setTRange:)) QUANIdRange* JV2_PROP_NM(o,1,tRange);
@property (nonatomic, assign, JV2_PROP_GS_V2(iCount,setICount:)) JceInt32 JV2_PROP_NM(o,2,iCount);

@end
