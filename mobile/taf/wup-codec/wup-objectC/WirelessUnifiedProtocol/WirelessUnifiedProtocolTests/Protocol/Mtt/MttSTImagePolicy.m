// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttSTImagePolicy.h"

@implementation MttSTImagePolicy

@synthesize JV2_PROP_NM(r,0,iMaxRetNum);

+ (void)initialize
{
    if (self == [MttSTImagePolicy class]) {
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
    return @"MTT.STImagePolicy";
}

@end
