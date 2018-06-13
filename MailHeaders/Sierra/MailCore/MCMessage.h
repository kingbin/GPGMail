//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "ECMessage-Protocol.h"
#import "MCMessageSortingInterface-Protocol.h"
#import "MCMessageDataSource-Protocol.h"

@class MCDisplayNameInfo, MCMessageHeaders, MCMimeBody, MCParsedMessage, NSArray, NSColor, NSData, NSDate, NSMutableSet, NSSet, NSString, NSUUID;

@interface MCMessage : NSObject <MCMessageSortingInterface, ECMessage>
{
    NSString *_subject;	// 8 = 0x8
    NSArray *_toRecipients;	// 16 = 0x10
    NSString *_sender;	// 24 = 0x18
    NSData *_messageIDHeaderDigest;	// 32 = 0x20
    NSData *_inReplyToHeaderDigest;	// 40 = 0x28
    NSUUID *_documentID;	// 48 = 0x30
    CDStruct_7ad7028e _messageColor;	// 56 = 0x38
    BOOL _type;	// 59 = 0x3b
    double _dateSentInterval;	// 64 = 0x40
    double _dateReceivedInterval;	// 72 = 0x48
    double _dateLastViewedInterval;	// 80 = 0x50
    id <MCMessageDataSource> _dataSource;	// 88 = 0x58
    // Error parsing type: Aq, name: _messageFlags
    unsigned char _subjectPrefixLength;	// 104 = 0x68
    NSMutableSet *_gmailLabels;	// 112 = 0x70
    BOOL _recipientType;	// 120 = 0x78
    BOOL _markedForOverwrite;	// 121 = 0x79
    long long _conversationID;	// 128 = 0x80
}

+ (BOOL)isMessageURLString:(id)arg1;	// IMP=0x000000000003eccf
+ (long long)displayablePriorityForPriority:(long long)arg1;	// IMP=0x000000000003c667
+ (long long)validatePriority:(long long)arg1;	// IMP=0x000000000003c648
+ (BOOL)messageColorIsValid:(CDStruct_7ad7028e)arg1;	// IMP=0x000000000003bd06
+ (BOOL)allMessages:(id)arg1 areSameType:(BOOL)arg2;	// IMP=0x000000000003ad42
+ (unsigned char)subjectPrefixLengthUnknown;	// IMP=0x000000000003a698
+ (id)unreadMessagesFromMessages:(id)arg1;	// IMP=0x000000000003a4df
+ (BOOL)_messageTypeForMessageTypeKey:(id)arg1;	// IMP=0x000000000003a444
+ (id)messageTypeKeyForMessageType:(BOOL)arg1;	// IMP=0x000000000003a3c4
+ (id)descriptionForType:(BOOL)arg1 plural:(BOOL)arg2;	// IMP=0x000000000003a34a
+ (id)replyPrefixWithSpacer:(BOOL)arg1;	// IMP=0x000000000003a243
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;	// IMP=0x000000000003a13c
+ (id)messageWithRFC822Data:(id)arg1 sanitizeData:(BOOL)arg2;	// IMP=0x0000000000039f9c
+ (id)messageWithRFC822Data:(id)arg1;	// IMP=0x0000000000039f19
+ (void)initialize;	// IMP=0x0000000000039ea7
@property(readonly) long long conversationID; // @synthesize conversationID=_conversationID;
@property BOOL markedForOverwrite; // @synthesize markedForOverwrite=_markedForOverwrite;
@property BOOL recipientType; // @synthesize recipientType=_recipientType;
@property double primitiveDateLastViewedInterval; // @synthesize primitiveDateLastViewedInterval=_dateLastViewedInterval;
@property double primitiveDateReceivedInterval; // @synthesize primitiveDateReceivedInterval=_dateReceivedInterval;
@property double primitiveDateSentInterval; // @synthesize primitiveDateSentInterval=_dateSentInterval;
@property BOOL primitiveMessageType; // @synthesize primitiveMessageType=_type;
//- (void).cxx_destruct;	// IMP=0x0000000000040fba
@property(readonly, nonatomic) MCParsedMessage *parsedMessage;
- (id)imageArchiveURL;	// IMP=0x0000000000040d43
- (void)_updateAttributeSet:(id)arg1 includingHTML:(BOOL)arg2 withParsedMessage:(id)arg3 orderedAttachments:(id *)arg4;	// IMP=0x0000000000040420
- (id)_searchableItemWithHTML:(id)arg1 parsedMessage:(id)arg2 updatableAttributesOnly:(BOOL)arg3 outOrderedAttachments:(id *)arg4;	// IMP=0x000000000003f158
- (id)searchableItemWithHTML:(id)arg1 parsedMessage:(id)arg2 updatableAttributesOnly:(BOOL)arg3;	// IMP=0x000000000003f0f8
- (void)setAttachmentFilenames:(id)arg1;	// IMP=0x000000000003f0f2
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;	// IMP=0x000000000003f08d
- (BOOL)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4 force:(BOOL)arg5;	// IMP=0x000000000003eea6
- (BOOL)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4;	// IMP=0x000000000003ee81
- (void)setAttachmentInfoFromBody:(id)arg1;	// IMP=0x000000000003ee27
@property(readonly) NSData *headerData;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;	// IMP=0x000000000003ed9b
@property(readonly, copy, nonatomic) NSData *bodyData;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;	// IMP=0x000000000003ed0f
@property(readonly, copy, nonatomic) NSString *persistentID;
@property(readonly, copy) NSArray *listUnsubscribe;
@property(readonly, copy) NSString *listID;
- (id)URLStringWithHeaders:(id)arg1;	// IMP=0x000000000003ec07
@property(readonly, copy, nonatomic) NSString *URLStringIfAvailable;
@property(readonly, copy, nonatomic) NSString *URLString;
- (id)_URLStringWithHeaders:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;	// IMP=0x000000000003ea43
@property(readonly, copy, nonatomic) NSString *remoteMailboxURLString;
@property(readonly, nonatomic) id <MCMailAccount> account;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly) CDStruct_7ad7028e messageColor;
@property(readonly, nonatomic) unsigned int uid;
@property(readonly, copy) NSString *remoteID;
@property(readonly, copy) NSArray *references;
- (void)setMessageInfoFromMessage:(id)arg1;	// IMP=0x000000000003e7fb
- (void)setMessageInfo:(id)arg1 subjectPrefixLength:(unsigned char)arg2 to:(id)arg3 sender:(id)arg4 type:(BOOL)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHeaderDigest:(id)arg8 inReplyToHeaderDigest:(id)arg9 dateLastViewedTimeIntervalSince1970:(double)arg10;	// IMP=0x000000000003e2ae
@property(readonly) BOOL conversationMuted;
@property(readonly) BOOL conversationVIP;
@property(readonly) BOOL senderVIP;
@property(readonly) BOOL junk;
@property(readonly) BOOL answered;
@property(readonly) BOOL flagged;
@property(readonly, copy) NSArray *cc;
@property(copy) NSArray *to;
@property(readonly, nonatomic) MCDisplayNameInfo *senderDisplayNameInfo;
@property(readonly, copy, nonatomic) NSString *senderDisplayName;
@property(readonly, copy) NSString *senderIfAvailable;
@property(copy) NSString *sender;
@property(readonly, copy) NSArray *from;
@property double dateLastViewedAsTimeIntervalSince1970;
@property(readonly) NSDate *dateLastViewed;
@property double dateSentAsTimeIntervalSince1970;
@property(readonly) NSDate *dateSent;
@property double dateReceivedAsTimeIntervalSince1970;
@property(readonly) NSDate *dateReceived;
@property(readonly, nonatomic) BOOL shouldImmediatelyCalculateSnippets;
@property(readonly, nonatomic) BOOL supportsSnippets;
@property unsigned long long subjectPrefixLength;
@property(copy) NSString *subject;
@property(readonly, copy) NSString *subjectIfAvailable;
@property(readonly, copy, nonatomic) NSString *subjectNotIncludingReAndFwdPrefix;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1 type:(BOOL)arg2;	// IMP=0x000000000003ce1a
- (void)_setDateSentFromHeaders:(id)arg1;	// IMP=0x000000000003cd75
- (void)_setDateReceivedFromHeaders:(id)arg1;	// IMP=0x000000000003ccd0
- (id)_newDateFromDateHeaderInHeaders:(id)arg1;	// IMP=0x000000000003ccae
- (id)_newDateFromHeader:(id)arg1 inHeaders:(id)arg2;	// IMP=0x000000000003cbd1
- (id)_newDateFromReceivedHeadersInHeaders:(id)arg1;	// IMP=0x000000000003c9af
- (id)rawSourceFromHeaders:(id)arg1 body:(id)arg2;	// IMP=0x000000000003c808
@property(readonly, nonatomic) long long priority;
- (void)setPriorityFromHeaders:(id)arg1;	// IMP=0x000000000003c697
@property(readonly, nonatomic) long long junkMailLevel;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) BOOL hasCalculatedNumberOfAttachments;
@property(readonly, nonatomic) BOOL isPartialMessageBodyAvailable;
@property(readonly, nonatomic) BOOL isMessageContentLocallyAvailable;
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly, copy) NSData *rawInReplyToHeaderDigest;
@property(copy) NSData *inReplyToHeaderDigest;
- (void)unlockedSetInReplyToHeaderDigest:(id)arg1;	// IMP=0x000000000003c306
@property(readonly, nonatomic) BOOL isReply;
@property(readonly, copy) NSData *rawMessageIDHeaderDigest;
- (void)setMessageIDHeaderDigest:(id)arg1;	// IMP=0x000000000003bf66
- (void)unlockedSetMessageIDHeaderDigest:(id)arg1;	// IMP=0x000000000003bee5
@property(readonly, copy) NSData *messageIDHeaderDigest;
@property(readonly, copy, nonatomic) NSString *messageID;
@property(readonly, nonatomic) unsigned long long messageSize;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;	// IMP=0x000000000003bcf4
- (void)setPrimitiveColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;	// IMP=0x000000000003bc3c
@property BOOL colorHasBeenEvaluated;
- (void)setPrimitiveColorHasBeenEvaluated:(BOOL)arg1;	// IMP=0x000000000003bbd1
@property(copy) NSColor *color;
- (void)setPrimitiveColor:(id)arg1;	// IMP=0x000000000003bb37
@property(readonly, nonatomic) unsigned char flagColorSet;
@property(readonly, nonatomic) int colorForSort;
@property(readonly, nonatomic) int colorIntValue;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2 fetchIfNotAvailable:(BOOL)arg3;	// IMP=0x000000000003b3d2
- (void)removeGmailLabels:(id)arg1;	// IMP=0x000000000003b34f
- (void)addGmailLabels:(id)arg1;	// IMP=0x000000000003b2a7
@property(retain) NSSet *gmailLabels;
- (void)setPrimitiveMessageFlags:(long long)arg1 mask:(long long)arg2;	// IMP=0x000000000003b130
@property(readonly, nonatomic) long long primitiveMessageFlags;
- (void)setMessageFlags:(long long)arg1 mask:(long long)arg2;	// IMP=0x000000000003b10d
@property(readonly, nonatomic) long long messageFlags;
@property(copy) NSUUID *documentID;
@property(readonly, nonatomic) BOOL isMessageMeeting;
@property(readonly, nonatomic) BOOL isEditable;
@property BOOL type;
@property(readonly, nonatomic) MCMessageHeaders *headersIfAvailable;
@property(readonly) MCMessageHeaders *headers;
- (void)_cacheMessageBodyDataIfPossible:(id)arg1;	// IMP=0x000000000003ab58
@property(readonly, copy) NSData *cachedMessageBodyData;
- (void)_cacheMimeBodyIfPossible:(id)arg1;	// IMP=0x000000000003ab4a
@property(readonly) MCMimeBody *cachedMimeBody;
- (void)_cacheHeaderDataIfPossible:(id)arg1;	// IMP=0x000000000003ab3c
@property(readonly, copy) NSData *cachedHeaderData;
- (void)_cacheHeadersIfPossible:(id)arg1;	// IMP=0x000000000003ab2e
@property(readonly) MCMessageHeaders *cachedHeaders;
- (void)uncacheBodyAndHeader;	// IMP=0x000000000003ab20
- (void)cacheBodyAndHeader;	// IMP=0x000000000003ab1a
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) BOOL dataSourceShouldBeSet;
@property(readonly, nonatomic) __weak id <MCMessageDataSource> primitiveDataSource;
- (void)setDataSource:(id)arg1;	// IMP=0x000000000003aa69
- (id)dataSource;	// IMP=0x000000000003aa50
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003a70c
- (id)init;	// IMP=0x000000000003a6a3

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
