@class NSArray, ECMessageFlags, NSString, NSDate, NSNumber;
@protocol EMMessageListItemChangeSummary, EMMessageListItemChangeFlagColors, EMMessageListItemChangeReadLater, EMMessageListItemChangeSendLaterDate, EMMessageListItemChangeFollowUp, EMCollectionItemID, EMMessageListItemChangeSubject;

@interface EMMessageListItemChange : NSObject <EFPubliclyDescribable, NSSecureCoding> {
    NSArray *_mailboxObjectIDs;
    NSArray *_mailboxes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *displayDate;
@property (retain, nonatomic) id<EMMessageListItemChangeSubject> subject;
@property (copy, nonatomic) id<EMMessageListItemChangeSummary> summary;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property BOOL isToMe;
@property BOOL isCCMe;
@property (retain, nonatomic) ECMessageFlags *flags;
@property (retain, nonatomic) NSNumber *hasUnflagged;
@property (copy, nonatomic) id<EMMessageListItemChangeFlagColors> flagColors;
@property (retain, nonatomic) NSNumber *isVIP;
@property (retain, nonatomic) NSNumber *isBlocked;
@property (retain, nonatomic) NSNumber *unsubscribeType;
@property (retain, nonatomic) NSNumber *hasAttachments;
@property (retain, nonatomic) NSNumber *conversationNotificationLevel;
@property (retain, nonatomic) NSNumber *senderBucket;
@property (retain, nonatomic) id<EMMessageListItemChangeReadLater> readLater;
@property (retain, nonatomic) id<EMMessageListItemChangeSendLaterDate> sendLaterDate;
@property (retain, nonatomic) id<EMMessageListItemChangeFollowUp> followUp;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *conversationID;
@property (copy, nonatomic) NSArray *mailboxObjectIDs;
@property (copy, nonatomic) NSArray *mailboxes;
@property (retain, nonatomic) id<EMCollectionItemID> displayMessageItemID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeFrom:(id)a0 to:(id)a1;
+ (id)changeForFlags:(id)a0;
+ (id)changeForKeyPaths:(id)a0 ofItem:(id)a1;
+ (id)changesForKeyPaths:(id)a0 ofItems:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void)addChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_changeDescriptionsForInternal:(BOOL)a0 useDebugDescriptions:(BOOL)a1;
- (id)_descriptionForInternal:(BOOL)a0 useDebugDescriptions:(BOOL)a1;
- (BOOL)applyToMessageListItem:(id)a0;

@end
