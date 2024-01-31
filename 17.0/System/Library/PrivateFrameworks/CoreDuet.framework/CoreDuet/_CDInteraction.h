@class NSArray, NSString, NSURL, NSDate, _CDContact;

@interface _CDInteraction : NSObject <_CDInteractionOrUncachedSentinel, _CDPDataPoint, NSSecureCoding> {
    id _recipients;
    NSString *_bundleId;
    NSString *_targetBundleId;
    NSString *_account;
    NSString *_derivedIntentIdentifier;
    NSString *_domainIdentifier;
    NSString *_groupName;
    _CDContact *_sender;
    NSURL *_contentURL;
    NSString *_nsUserName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL userIsSender;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *peopleIdentifiers;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL userIsThreadInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL forcePersistInteraction;
@property (nonatomic) BOOL mailShareSheetDeletionCandidate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *updateDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *locationUUID;
@property (nonatomic) long long mechanism;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL isResponse;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *targetBundleId;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSString *derivedIntentIdentifier;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *account;
@property (retain, nonatomic) _CDContact *sender;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic) long long selfParticipantStatus;
@property (copy, nonatomic) NSString *nsUserName;

+ (id)generateConversationIdFromHandle:(id)a0;
+ (id)shareSheetInteractionFromINInteraction:(id)a0 bundleID:(id)a1 nsUserName:(id)a2 knowledgeStore:(id)a3;
+ (id)generateConversationIdFromInteractionRecipients:(id)a0;
+ (id)_internPool;
+ (id)recipientIdentifiersFromMobileMailConversationId:(id)a0;

- (id)dateInterval;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)recipientsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionOfArray:(id)a0;
- (void)fetchAndAddShareSheetContentToInteractionWithKnowledgeStore:(id)a0;
- (id)initWithINInteraction:(id)a0 bundleID:(id)a1 nsUserName:(id)a2;
- (id)interactionIfCached;
- (BOOL)isGroupChat;
- (BOOL)isInteractionMechanismCalls;
- (BOOL)isUncachedSentinel;
- (BOOL)isValidInteraction;

@end
