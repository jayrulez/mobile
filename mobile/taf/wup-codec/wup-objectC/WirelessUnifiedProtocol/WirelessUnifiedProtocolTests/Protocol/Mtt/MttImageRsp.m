// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttImageRsp.h"

@implementation MttImageRsp

@synthesize JV2_PROP_NM(r,0,iRspPicSize);

+ (void)initialize
{
    if (self == [MttImageRsp class]) {
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
    return @"MTT.ImageRsp";
}

@end
