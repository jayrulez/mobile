// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttRequestFragment.h"

@implementation MttRequestFragment

@synthesize JV2_PROP_NM(r,0,wVersion);
@synthesize JV2_PROP_NM(r,1,sSessionID);
@synthesize JV2_PROP_NM(r,2,wTabID);
@synthesize JV2_PROP_NM(r,3,iRequestID);
@synthesize JV2_PROP_NM(r,4,iExpectSequenceID);
@synthesize JV2_PROP_NM(r,5,iExpectOffset);
@synthesize JV2_PROP_NM(r,6,iRspMaxSize);

+ (void)initialize
{
    if (self == [MttRequestFragment class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sSessionID) = DefaultJceString;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(sSessionID) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.RequestFragment";
}

@end
