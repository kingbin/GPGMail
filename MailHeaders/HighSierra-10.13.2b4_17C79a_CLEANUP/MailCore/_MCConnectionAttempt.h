//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@interface _MCConnectionAttempt : NSObject
{
    long long _securityLayer;
    long long _port;
    double _connectTimeout;
}

@property(nonatomic) double connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(nonatomic) long long securityLayer; // @synthesize securityLayer=_securityLayer;
- (id)description;

@end

