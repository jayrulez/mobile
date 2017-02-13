// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttPageConfigReq.h"

@implementation MttPageConfigReq

@synthesize JV2_PROP_NM(r,0,stUserBase);
@synthesize JV2_PROP_NM(r,1,stBrowserReq);
@synthesize JV2_PROP_NM(r,2,stSearchReq);
@synthesize JV2_PROP_NM(r,3,stStaticConfigReq);
@synthesize JV2_PROP_NM(o,4,stSearchTypeReq);
@synthesize JV2_PROP_NM(o,5,stLPageReq);
@synthesize JV2_PROP_NM(o,6,stCityListReq);

+ (void)initialize
{
    if (self == [MttPageConfigReq class]) {
        [MttCityListReq initialize];
        [MttLPageReq initialize];
        [MttPageBrowserReq initialize];
        [MttSearchReq initialize];
        [MttSearchTypeReq initialize];
        [MttStaticConfigReq initialize];
        [MttUserBase initialize];
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(stUserBase) = [MttUserBase object];
        JV2_PROP(stBrowserReq) = [MttPageBrowserReq object];
        JV2_PROP(stSearchReq) = [MttSearchReq object];
        JV2_PROP(stStaticConfigReq) = [MttStaticConfigReq object];
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(stUserBase) = nil;
    JV2_PROP(stBrowserReq) = nil;
    JV2_PROP(stSearchReq) = nil;
    JV2_PROP(stStaticConfigReq) = nil;
    JV2_PROP(stSearchTypeReq) = nil;
    JV2_PROP(stLPageReq) = nil;
    JV2_PROP(stCityListReq) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.PageConfigReq";
}

@end
