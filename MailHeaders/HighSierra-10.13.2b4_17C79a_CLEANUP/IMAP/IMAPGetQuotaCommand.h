//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAPSingleCommand.h>

@class NSString;

@interface IMAPGetQuotaCommand : IMAPSingleCommand
{
    NSString *_quotaRoot;
}

@property(readonly, copy, nonatomic) NSString *quotaRoot; // @synthesize quotaRoot=_quotaRoot;
//- (void).cxx_destruct;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)shouldSendAgainOnError;
- (id)activityString;
- (id)commandTypeString;
- (id)init;
- (id)initWithQuotaRoot:(id)arg1;

@end

