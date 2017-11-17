//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCBodyFetchContext-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface MFGlobalBodyFetchContext : NSObject <MCBodyFetchContext>
{
    NSMutableDictionary *_fetchContextsByAccountIdentifier;
    NSOperationQueue *_workQueue;
}

@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
//- (void).cxx_destruct;
- (void)cacheBodiesForMessages:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

