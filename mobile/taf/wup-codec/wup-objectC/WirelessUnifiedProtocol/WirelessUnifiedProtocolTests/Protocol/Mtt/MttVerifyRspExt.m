// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttVerifyRspExt.h"

@implementation MttVerifyRspExt

@synthesize JV2_PROP_NM(r,0,iVerifyId);
@synthesize JV2_PROP_NM(r,1,iCommand);
@synthesize JV2_PROP_NM(r,2,vParameter);
@synthesize JV2_PROP_NM(r,3,iServerTime);

+ (void)initialize
{
    if (self == [MttVerifyRspExt class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(vParameter) = DefaultJceData;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(vParameter) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.VerifyRspExt";
}

@end
