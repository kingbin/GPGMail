//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MFMailAccount.h>

#import "MCRemoteStoreAccount-Protocol.h"

@class MCAuthScheme, MFBehaviorTracker, NSArray, NSOperationQueue, NSString;

@interface MFRemoteStoreAccount : MFMailAccount <MCRemoteStoreAccount>
{
}

+ (BOOL)cachePoliciesNeedUpdating;
@property(readonly, copy, nonatomic) NSString *offlineCacheDirectory;
- (BOOL)_shouldSynchronizeMailbox:(id)arg1;
- (void)didSynchronizeMailboxCachesAndFoundChanges:(BOOL)arg1;
- (BOOL)synchronizesDataWithServer;
- (void)resetNeedToSynchronizeMailboxCaches;
@property(readonly, nonatomic) BOOL needToSynchronizeMailboxCaches;
- (void)considerSynchronizingNow;
- (BOOL)canBeSynchronized;
@property(readonly, nonatomic) BOOL shouldCacheAggressively;
- (BOOL)_canEmptyMessagesFromMailbox:(id)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (id)_specialMailboxWithType:(int)arg1 create:(BOOL)arg2 isLocal:(BOOL)arg3;
- (id)_specialMailboxWithType:(int)arg1 create:(BOOL)arg2;
- (id)_localMailboxRelativePathForType:(int)arg1 usingDisplayName:(id)arg2;
- (void)_renameLocalSpecialMailboxesToName:(id)arg1;
- (BOOL)_setStoreSpecialMailboxType:(int)arg1 onServer:(BOOL)arg2;
- (BOOL)_isMailboxTypeStoredLocally:(int)arg1;
@property BOOL storeTrashOnServer;
@property BOOL storeSentMessagesOnServer;
@property BOOL storeJunkOnServer;
@property BOOL storeDraftsOnServer;
- (BOOL)shouldCacheAttachmentsForMessageWithDateReceived:(id)arg1;
@property long long cachePolicy;
- (BOOL)canGoOffline;
@property(copy) NSString *displayName;
@property(readonly) MFBehaviorTracker *behaviorTracker;

// Remaining properties
@property(readonly, copy) NSString *accountTypeString;
@property BOOL allowInsecureAuthentication;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *authenticationScheme;
@property(copy) NSString *canonicalEmailAddress;
@property(readonly, copy) NSString *clientInfo;
@property BOOL configureDynamically;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSString *externalHostname;
@property(readonly) unsigned long long hash;
@property(copy) NSString *hostname;
@property(readonly, copy) NSString *identifier;
@property(readonly, nonatomic) BOOL isGmailAccount;
@property(readonly) BOOL isYahooAccount;
@property(readonly, copy) NSString *machineID;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *oneTimePassword;
@property(copy) NSString *password;
@property long long portNumber;
@property(retain) MCAuthScheme *preferredAuthScheme;
@property(readonly, nonatomic) NSOperationQueue *remoteFetchQueue;
@property(readonly, nonatomic) NSOperationQueue *remoteTaskQueue;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property long long securityLayerType;
@property BOOL shouldUseAuthentication;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly) Class superclass;
@property(copy) NSString *username;
@property BOOL usesSSL;

@end

