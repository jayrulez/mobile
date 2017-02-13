// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"

enum {
    MttEPushServerType_PUSH_MSGBOX = 101,
    MttEPushServerType_PUSH_MB = 102,
    MttEPushServerType_PUSH_HOTWORD = 103,
    MttEPushServerType_PUSH_ADS = 104,
    MttEPushServerType_PUSH_BANNER = 105,
    MttEPushServerType_PUSH_HOMELAND = 106,
    MttEPushServerType_PUSH_MAIL = 107,
    MttEPushServerType_PUSH_WEATHER = 108
};
#define MttEPushServerType NSInteger

#if JCEV2_ENUM_ETOS_AND_STOE_SUPPORTED

@interface MttEPushServerTypeHelper: JceEnumHelper

+ (NSString *)etos:(MttEPushServerType)e;
+ (MttEPushServerType)stoe:(NSString *)s;

@end

#endif
