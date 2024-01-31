@class MFMailboxUid, NSString, NSURL, MFMessageInfo;

@interface MFMailMessage : MFMessage <MFBaseMessage, EFPubliclyDescribable> {
    unsigned long long _messageFlags;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
    NSURL *_globalMessageURL;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned int dateReceivedInterval;
@property (readonly, nonatomic) unsigned int dateSentInterval;
@property (readonly, nonatomic) long long conversationHash;
@property (readonly, nonatomic) unsigned int mailboxID;
@property (readonly, nonatomic) long long messageIDHash;
@property (readonly, nonatomic) BOOL flagged;
@property (readonly, nonatomic) BOOL read;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL senderVIP;
@property (readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
@property (readonly, nonatomic) unsigned int libraryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property unsigned long long modSequenceNumber;
@property (nonatomic) BOOL shouldUseMailDrop;
@property (nonatomic) unsigned long long messageFlags;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)displayablePriorityForPriority:(int)a0;
+ (Class)dataMessageStoreToUse;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)a0;
+ (unsigned int)validatePriority:(int)a0;
+ (id)externalDataTypeIdentifiers;

- (id)messageStore;
- (void)dealloc;
- (void)setSummary:(id)a0;
- (id)account;
- (int)priority;
- (id)URL;
- (unsigned long long)numberOfAttachments;
- (id)from;
- (BOOL)junk;
- (BOOL)answered;
- (BOOL)conversationVIP;
- (BOOL)isSearchResultWithBogusRemoteId;
- (id)listUnsubscribe;
- (id)loadMeetingData;
- (void)markAsForwarded;
- (void)markAsNotViewed;
- (id)_privacySafeDescription;
- (id)bestAlternativePart;
- (id)bestAlternativePart:(BOOL *)a0;
- (unsigned long long)conversationFlags;
- (long long)conversationHash;
- (BOOL)conversationMuted;
- (id)externalConversationID;
- (id)globalMessageURL;
- (void)loadCachedHeaderValuesFromHeaders:(id)a0;
- (id)loadMeetingExternalID;
- (id)loadMeetingMetadata;
- (id)mailMessageStore;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)originalMailboxURL;
- (id)remoteMailboxURL;
- (void)setConversationFlags:(unsigned long long)a0;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)a0;
- (void)setMutableInfoFromMessage:(id)a0;
- (void)setPriorityFromHeaders:(id)a0;
- (BOOL)shouldSetSummary;
- (id)copyMessageInfo;

@end
