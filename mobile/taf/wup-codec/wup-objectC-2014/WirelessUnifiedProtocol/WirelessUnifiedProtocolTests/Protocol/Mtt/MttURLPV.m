// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttURLPV.h"

@implementation MttURLPV

@synthesize JV2_PROP_NM(r,0,iEntry);
@synthesize JV2_PROP_NM(r,1,eEntryType);
@synthesize JV2_PROP_NM(r,2,iPV);

+ (void)initialize
{
    if (self == [MttURLPV class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
    }
    return self;
}

- (void)dealloc
{
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.URLPV";
}

@end
