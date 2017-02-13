// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttSTOperator.h"

@implementation MttSTOperator

@synthesize JV2_PROP_NM(r,0,stUB);
@synthesize JV2_PROP_EX(r,1,stTotal,VOMTTSTTotal);
@synthesize JV2_PROP_NM(r,2,iMCC);
@synthesize JV2_PROP_NM(r,3,iMNC);
@synthesize JV2_PROP_NM(r,4,sOpUserID);
@synthesize JV2_PROP_NM(r,5,iReportTime);

+ (void)initialize
{
    if (self == [MttSTOperator class]) {
        [MttSTTotal initialize];
        [MttUserBase initialize];
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(stUB) = [MttUserBase object];
        JV2_PROP(stTotal) = DefaultJceArray;
        JV2_PROP(sOpUserID) = DefaultJceString;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(stUB) = nil;
    JV2_PROP(stTotal) = nil;
    JV2_PROP(sOpUserID) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.STOperator";
}

@end
