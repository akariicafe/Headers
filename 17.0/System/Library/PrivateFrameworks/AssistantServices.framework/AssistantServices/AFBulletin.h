@class NSArray, NSDictionary, NSString, NSDate, BBBulletin;

@interface AFBulletin : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *actionsStore;
@property (retain, nonatomic) NSDictionary *actionsByIdentifier;
@property (readonly, nonatomic) unsigned long long feed;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL availableOnLockScreen;
@property (nonatomic) BOOL supportsSpokenNotification;
@property (nonatomic) long long announcementType;
@property (nonatomic, getter=isRead) BOOL read;
@property (readonly, nonatomic) BBBulletin *bbBulletin;
@property (readonly, copy, nonatomic) NSString *bulletinID;
@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *modalAlertContentMessage;
@property (readonly, copy, nonatomic) NSDate *recencyDate;
@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) long long sectionSubtype;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *timeZone;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *intentIDs;
@property (readonly, copy, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL previewRestricted;
@property (readonly, copy, nonatomic) NSString *threadID;
@property (readonly, copy, nonatomic) NSString *internalID;

+ (id)_createAssistantActionsForBulletin:(id)a0;
+ (id)internalIDForBBBulletinID:(id)a0;

- (id)_displayNameForBulletin:(id)a0;
- (void)setNotification:(id)a0 fromSourceApp:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)actions;
- (void)setBulletin:(id)a0;
- (void)wasRemovedFromFeed:(unsigned long long)a0;
- (void)setBulletin:(id)a0 forFeed:(unsigned long long)a1;
- (id)actionForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
