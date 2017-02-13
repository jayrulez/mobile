// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"

enum {
    MttEEntryType_STARTLINK,
    MttEEntryType_INPUTADDR,
    MttEEntryType_BOOKMARK,
    MttEEntryType_HISTORY,
    MttEEntryType_OFTENUSE,
    MttEEntryType_FASTLINK,
    MttEEntryType_OTHER,
    MttEEntryType_ESEARCH,
    MttEEntryType_HOTWORD,
    MttEEntryType_APPCENTER,
    MttEEntryType_FASTLINKCONF
};
#define MttEEntryType NSInteger

#if JCEV2_ENUM_ETOS_AND_STOE_SUPPORTED

@interface MttEEntryTypeHelper: JceEnumHelper

+ (NSString *)etos:(MttEEntryType)e;
+ (MttEEntryType)stoe:(NSString *)s;

@end

#endif
