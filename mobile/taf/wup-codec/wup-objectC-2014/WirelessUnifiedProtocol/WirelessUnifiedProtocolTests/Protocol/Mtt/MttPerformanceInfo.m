// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttPerformanceInfo.h"

@implementation MttPerformanceInfo

@synthesize JV2_PROP_NM(o,0,sDevice);
@synthesize JV2_PROP_NM(o,1,sUrl);
@synthesize JV2_PROP_NM(o,2,sAPN);
@synthesize JV2_PROP_NM(o,3,iProxyType);
@synthesize JV2_PROP_NM(o,4,iTotalTime);
@synthesize JV2_PROP_NM(o,5,iMainResDownloadTime);
@synthesize JV2_PROP_NM(o,6,iAvgDNSTime);
@synthesize JV2_PROP_NM(o,7,iAvgConnectTime);
@synthesize JV2_PROP_NM(o,8,iAvgWaitRspTime);
@synthesize JV2_PROP_NM(o,9,iAvgSpeed);

+ (void)initialize
{
    if (self == [MttPerformanceInfo class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sDevice) = DefaultJceString;
        JV2_PROP(sUrl) = DefaultJceString;
        JV2_PROP(sAPN) = DefaultJceString;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(sDevice) = nil;
    JV2_PROP(sUrl) = nil;
    JV2_PROP(sAPN) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.PerformanceInfo";
}

@end
