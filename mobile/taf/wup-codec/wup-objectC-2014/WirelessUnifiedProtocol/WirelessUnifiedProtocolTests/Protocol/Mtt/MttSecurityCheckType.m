// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "MttSecurityCheckType.h"

#if JCEV2_ENUM_ETOS_AND_STOE_SUPPORTED

@implementation MttSecurityCheckTypeHelper

+ (NSString *)etos:(MttSecurityCheckType)e
{
    switch(e){
        case MttSecurityCheckType_SCT_WEBURL: return @"MttSecurityCheckType_SCT_WEBURL";
        case MttSecurityCheckType_SCT_SOFT: return @"MttSecurityCheckType_SCT_SOFT";
        default: return @"";
    }
}

+ (MttSecurityCheckType)stoe:(NSString *)s
{
    if(isJceEnumStringEqual(s, @"MttSecurityCheckType_SCT_WEBURL")) return MttSecurityCheckType_SCT_WEBURL;
    if(isJceEnumStringEqual(s, @"MttSecurityCheckType_SCT_SOFT")) return MttSecurityCheckType_SCT_SOFT;
    return NSIntegerMin;
}

@end

#endif
