// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttBrokerUserInfo.h"

@implementation MttBrokerUserInfo

@synthesize JV2_PROP_NM(r,0,sGUID);
@synthesize JV2_PROP_NM(r,1,sQUA);
@synthesize JV2_PROP_NM(r,2,sLC);
@synthesize JV2_PROP_NM(r,3,sIMEI);
@synthesize JV2_PROP_NM(r,4,sSession);
@synthesize JV2_PROP_NM(r,5,wTabId);
@synthesize JV2_PROP_NM(o,6,sIMSI);
@synthesize JV2_PROP_NM(o,7,sCellid);
@synthesize JV2_PROP_NM(o,8,sLAC);
@synthesize JV2_PROP_NM(o,9,sAPN);
@synthesize JV2_PROP_NM(o,10,sChannelId);
@synthesize JV2_PROP_NM(o,11,sUin);
@synthesize JV2_PROP_NM(o,12,sUserSession);
@synthesize JV2_PROP_NM(o,13,cStoreAbility);
@synthesize JV2_PROP_NM(o,14,iLanguageType);
@synthesize JV2_PROP_NM(o,15,iMCC);
@synthesize JV2_PROP_NM(o,16,iMNC);
@synthesize JV2_PROP_NM(o,17,cARMV7);

+ (void)initialize
{
    if (self == [MttBrokerUserInfo class]) {
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sGUID) = DefaultJceData;
        JV2_PROP(sQUA) = DefaultJceString;
        JV2_PROP(sLC) = DefaultJceString;
        JV2_PROP(sIMEI) = DefaultJceString;
        JV2_PROP(sSession) = DefaultJceString;
        JV2_PROP(sIMSI) = DefaultJceString;
        JV2_PROP(sCellid) = DefaultJceString;
        JV2_PROP(sLAC) = DefaultJceString;
        JV2_PROP(sAPN) = DefaultJceString;
        JV2_PROP(sChannelId) = DefaultJceString;
        JV2_PROP(sUin) = DefaultJceString;
        JV2_PROP(sUserSession) = DefaultJceString;
        JV2_PROP(cStoreAbility) = 1;
        JV2_PROP(iLanguageType) = 200;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(sGUID) = nil;
    JV2_PROP(sQUA) = nil;
    JV2_PROP(sLC) = nil;
    JV2_PROP(sIMEI) = nil;
    JV2_PROP(sSession) = nil;
    JV2_PROP(sIMSI) = nil;
    JV2_PROP(sCellid) = nil;
    JV2_PROP(sLAC) = nil;
    JV2_PROP(sAPN) = nil;
    JV2_PROP(sChannelId) = nil;
    JV2_PROP(sUin) = nil;
    JV2_PROP(sUserSession) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.BrokerUserInfo";
}

@end
