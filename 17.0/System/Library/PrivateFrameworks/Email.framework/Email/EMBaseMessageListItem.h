@class NSURL, ECSubject, NSDate, NSObject, ECMessageFlags, NSString, EFFuture, EMFollowUp, NSIndexSet, NSArray, EMReadLater, EMObjectID, EMMessageRepository;
@protocol OS_os_log, ECEmailAddressConvertible, EMCollectionItemID;

@interface EMBaseMessageListItem : EMRepositoryObject <EFLoggable, EMBaseMessageListItemBuilder, EMMutableMessageListItem, EMMessageListItem> {
    unsigned long long _isEditable;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMMessageRepository *repository;
@property (retain, nonatomic) id<ECEmailAddressConvertible> senderAddress;
@property (copy, nonatomic) NSArray *bccList;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDate *date;
@property (retain) NSDate *displayDate;
@property (retain) ECSubject *subject;
@property (copy) NSString *summary;
@property (copy) NSArray *senderList;
@property (copy) NSArray *toList;
@property (copy) NSArray *ccList;
@property BOOL isToMe;
@property BOOL isCCMe;
@property (retain) ECMessageFlags *flags;
@property BOOL hasUnflagged;
@property (copy) NSIndexSet *flagColors;
@property BOOL isVIP;
@property BOOL isBlocked;
@property long long unsubscribeType;
@property BOOL hasAttachments;
@property long long conversationNotificationLevel;
@property long long senderBucket;
@property (retain, nonatomic) NSURL *brandIndicatorLocation;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (retain) EMFollowUp *followUp;
@property unsigned long long count;
@property long long conversationID;
@property (copy) NSArray *mailboxObjectIDs;
@property (copy) NSArray *mailboxes;
@property (retain) id<EMCollectionItemID> displayMessageItemID;
@property long long _internalID;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly) EFFuture *displayMessage;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly) BOOL supportsArchiving;
@property (readonly) BOOL shouldArchiveByDefault;
@property (readonly) BOOL isEditable;
@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

+ (BOOL)supportsSecureCoding;

- (id)valueForUndefinedKey:(id)a0;
- (void)setRepository:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0;
- (void)_commonInitWithBaseBuilder:(id /* block */)a0;
- (id)initWithObjectID:(id)a0 baseBuilder:(id /* block */)a1;

@end
