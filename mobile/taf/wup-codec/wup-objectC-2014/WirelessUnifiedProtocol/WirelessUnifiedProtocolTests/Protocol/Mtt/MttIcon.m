// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttIcon.h"

@implementation MttIcon

@synthesize JV2_PROP_NM(r,0,sName);
@synthesize JV2_PROP_NM(r,1,sData);

+ (void)initialize
{
    if (self == [MttIcon class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sName) = DefaultJceString;
        JV2_PROP(sData) = DefaultJceData;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(sName) = nil;
    JV2_PROP(sData) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.Icon";
}

@end