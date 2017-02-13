// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "MttEEntryType.h"

#if JCEV2_ENUM_ETOS_AND_STOE_SUPPORTED

@implementation MttEEntryTypeHelper

+ (NSString *)etos:(MttEEntryType)e
{
    switch(e){
        case MttEEntryType_STARTLINK: return @"MttEEntryType_STARTLINK";
        case MttEEntryType_INPUTADDR: return @"MttEEntryType_INPUTADDR";
        case MttEEntryType_BOOKMARK: return @"MttEEntryType_BOOKMARK";
        case MttEEntryType_HISTORY: return @"MttEEntryType_HISTORY";
        case MttEEntryType_OFTENUSE: return @"MttEEntryType_OFTENUSE";
        case MttEEntryType_FASTLINK: return @"MttEEntryType_FASTLINK";
        case MttEEntryType_OTHER: return @"MttEEntryType_OTHER";
        case MttEEntryType_ESEARCH: return @"MttEEntryType_ESEARCH";
        case MttEEntryType_HOTWORD: return @"MttEEntryType_HOTWORD";
        case MttEEntryType_APPCENTER: return @"MttEEntryType_APPCENTER";
        case MttEEntryType_FASTLINKCONF: return @"MttEEntryType_FASTLINKCONF";
        default: return @"";
    }
}

+ (MttEEntryType)stoe:(NSString *)s
{
    if(isJceEnumStringEqual(s, @"MttEEntryType_STARTLINK")) return MttEEntryType_STARTLINK;
    if(isJceEnumStringEqual(s, @"MttEEntryType_INPUTADDR")) return MttEEntryType_INPUTADDR;
    if(isJceEnumStringEqual(s, @"MttEEntryType_BOOKMARK")) return MttEEntryType_BOOKMARK;
    if(isJceEnumStringEqual(s, @"MttEEntryType_HISTORY")) return MttEEntryType_HISTORY;
    if(isJceEnumStringEqual(s, @"MttEEntryType_OFTENUSE")) return MttEEntryType_OFTENUSE;
    if(isJceEnumStringEqual(s, @"MttEEntryType_FASTLINK")) return MttEEntryType_FASTLINK;
    if(isJceEnumStringEqual(s, @"MttEEntryType_OTHER")) return MttEEntryType_OTHER;
    if(isJceEnumStringEqual(s, @"MttEEntryType_ESEARCH")) return MttEEntryType_ESEARCH;
    if(isJceEnumStringEqual(s, @"MttEEntryType_HOTWORD")) return MttEEntryType_HOTWORD;
    if(isJceEnumStringEqual(s, @"MttEEntryType_APPCENTER")) return MttEEntryType_APPCENTER;
    if(isJceEnumStringEqual(s, @"MttEEntryType_FASTLINKCONF")) return MttEEntryType_FASTLINKCONF;
    return NSIntegerMin;
}

@end

#endif
