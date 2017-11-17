//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MFEWSGateway.h>

//#import "NSKeyedUnarchiverDelegate-Protocol.h"

@class MFEWSConnection, MFEWSResponseOperation, NSMutableDictionary, NSOperationQueue, NSString;

@interface MFEWSOfflineGateway : MFEWSGateway <NSKeyedUnarchiverDelegate>
{
    NSMutableDictionary *_offlineToRealEWSIdStrings;
    id _offlineToRealEWSIdStringsLock;
    NSOperationQueue *_requestResponseQueue;
    MFEWSConnection *_offlineConnection;
    MFEWSResponseOperation *_lastResponseDecoded;
}

+ (id)keyPathsForValuesAffectingRequestResponseQueue;
@property(retain) MFEWSResponseOperation *lastResponseDecoded; // @synthesize lastResponseDecoded=_lastResponseDecoded;
@property(retain) MFEWSConnection *offlineConnection; // @synthesize offlineConnection=_offlineConnection;
- (id)requestResponseQueue;
//- (void).cxx_destruct;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (void)_undeleteMessagesFromFailedDeleteRequest:(id)arg1;
- (void)_undeleteMessagesFromFailedCopyRequest:(id)arg1;
- (void)_moveMessageFromFailedCreateRequest:(id)arg1 withBackupManager:(id)arg2 toMailboxNamed:(id)arg3 actualName:(id *)arg4;
- (id)_deleteRequestRemovingUndeletedItems:(id)arg1;
- (id)_EWSFolderFromCreateRequestOperation:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *offlineToRealEWSIdStrings;
- (id)playbackRequests:(id)arg1 offlineToRealEWSIdStrings:(id *)arg2 error:(id *)arg3;
- (void)takeRequestOffline:(id)arg1 error:(id)arg2;
- (void)addOfflineToRealEWSIdStrings:(id)arg1 forRequest:(id)arg2;
- (id)resolvedIdStringForIdString:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)connection;
- (id)initWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 connection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

