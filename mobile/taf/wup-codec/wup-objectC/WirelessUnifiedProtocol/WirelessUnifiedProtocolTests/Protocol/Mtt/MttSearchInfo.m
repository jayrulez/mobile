// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttSearchInfo.h"

@implementation MttSearchInfo

@synthesize JV2_PROP_NM(r,0,sShortName);
@synthesize JV2_PROP_NM(r,1,sAllName);
@synthesize JV2_PROP_NM(r,2,sHref);
@synthesize JV2_PROP_NM(r,3,sImageName);
@synthesize JV2_PROP_NM(r,4,sEncodeType);
@synthesize JV2_PROP_NM(o,5,iDefault);
@synthesize JV2_PROP_NM(o,6,sSearchName);
@synthesize JV2_PROP_NM(o,7,sImageData);

+ (void)initialize
{
    if (self == [MttSearchInfo class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sShortName) = DefaultJceString;
        JV2_PROP(sAllName) = DefaultJceString;
        JV2_PROP(sHref) = DefaultJceString;
        JV2_PROP(sImageName) = DefaultJceString;
        JV2_PROP(sEncodeType) = DefaultJceString;
        JV2_PROP(sSearchName) = DefaultJceString;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(sShortName) = nil;
    JV2_PROP(sAllName) = nil;
    JV2_PROP(sHref) = nil;
    JV2_PROP(sImageName) = nil;
    JV2_PROP(sEncodeType) = nil;
    JV2_PROP(sSearchName) = nil;
    JV2_PROP(sImageData) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.SearchInfo";
}

@end
