@class NSString, NSMutableSet, NSDate;

@interface NNMKSyncedMessage : NSObject <NNMKBasicMessage>

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSString *sanitizedMessageId;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long statusVersion;
@property (retain, nonatomic) NSDate *dateReceived;
@property (nonatomic) BOOL usedProtectedChannelForMessageSync;
@property (nonatomic) BOOL usedNotificationPriorityForMessageSync;
@property (nonatomic) BOOL contentSyncedUsingNotificationPriority;
@property (nonatomic) BOOL contentSyncedBecauseUserRequested;
@property (nonatomic) BOOL contentSynced;
@property (nonatomic) BOOL contentRequestedByUser;
@property (retain, nonatomic) NSMutableSet *attachmentsContentIdsNotYetSynced;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL resendRequested;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) unsigned long long contentResendInterval;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) BOOL isThreadSpecific;
@property (nonatomic) unsigned long long isSpecialMailboxSpecific;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)initWithMessage:(id)a0 useDefaultMailbox:(BOOL)a1;
- (BOOL)isContentCompletelySynced;

@end
