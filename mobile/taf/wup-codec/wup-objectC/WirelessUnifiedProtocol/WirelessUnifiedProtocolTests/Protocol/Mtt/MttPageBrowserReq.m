// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttPageBrowserReq.h"

@implementation MttPageBrowserReq

@synthesize JV2_PROP_NM(r,0,version);
@synthesize JV2_PROP_NM(r,1,size);
@synthesize JV2_PROP_NM(r,2,lastVersionMD5);
@synthesize JV2_PROP_NM(o,3,special);
@synthesize JV2_PROP_NM(o,4,iWidth);
@synthesize JV2_PROP_NM(o,5,iHeight);
@synthesize JV2_PROP_NM(o,6,iFontSize);
@synthesize JV2_PROP_NM(o,7,iRowSpacing);
@synthesize JV2_PROP_NM(o,8,vCharSetKey);
@synthesize JV2_PROP_NM(o,9,wVersion);
@synthesize JV2_PROP_NM(o,10,iNaviTime);

+ (void)initialize
{
    if (self == [MttPageBrowserReq class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(version) = 3;
        JV2_PROP(size) = 24;
        JV2_PROP(lastVersionMD5) = DefaultJceString;
        JV2_PROP(iWidth) = 240;
        JV2_PROP(iHeight) = 320;
        JV2_PROP(iFontSize) = 16;
        JV2_PROP(iRowSpacing) = 1;
        JV2_PROP(wVersion) = 1;
        JV2_PROP(iNaviTime) = -1;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(lastVersionMD5) = nil;
    JV2_PROP(vCharSetKey) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.PageBrowserReq";
}

@end
