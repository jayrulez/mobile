// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttIconInfo.h"

@implementation MttIconInfo

@synthesize JV2_PROP_NM(r,0,iIconId);
@synthesize JV2_PROP_NM(r,1,sIconName);
@synthesize JV2_PROP_NM(r,2,vIconData);

+ (void)initialize
{
    if (self == [MttIconInfo class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sIconName) = DefaultJceString;
        JV2_PROP(vIconData) = DefaultJceData;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(sIconName) = nil;
    JV2_PROP(vIconData) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.IconInfo";
}

@end
