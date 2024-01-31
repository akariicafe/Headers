@class NSString, NSNumber, EKFrozenReminderSource;

@interface EKPersistentSource : EKPersistentObject

@property (readonly, nonatomic) NSString *UUID;
@property (nonatomic) long long sourceTypeRaw;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *defaultAlarmOffset;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (nonatomic) int strictestEventPrivateValue;
@property (retain, nonatomic) NSString *UUID;
@property (retain) EKFrozenReminderSource *reminderSource;

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;

- (id)ownerName;
- (id)constraints;
- (id)notes;
- (id)appGroupIdentifier;
- (void)setDelegatedAccountOwnerStoreID:(id)a0;
- (BOOL)disabled;
- (id)defaultAlarmOffset;
- (void)setOnlyCreatorCanModify:(BOOL)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)constraintsName;
- (void)setDisabled:(BOOL)a0;
- (id)externalModificationTag;
- (id)lastSyncStartDate;
- (void)setAppGroupIdentifier:(id)a0;
- (void)setLastSyncStartDate:(id)a0;
- (id)cachedExternalInfoData;
- (id)externalID;
- (void)setOwnerName:(id)a0;
- (void)setFlags:(int)a0;
- (void)setConstraintsName:(id)a0;
- (void)setSourceTypeRaw:(long long)a0;
- (id)creatorBundleID;
- (void)setNotes:(id)a0;
- (void)setPreferredEventPrivateValueRaw:(int)a0;
- (id)syncError;
- (void)setLastSyncEndDate:(id)a0;
- (int)flags;
- (int)flags2;
- (int)entityType;
- (int)strictestEventPrivateValueRaw;
- (void)setDefaultAllDayAlarmOffset:(id)a0;
- (void)setFlags2:(int)a0;
- (BOOL)onlyCreatorCanModify;
- (id)description;
- (BOOL)showsNotifications;
- (void)setDefaultAlarmOffset:(id)a0;
- (id)delegatedAccountOwnerStoreID;
- (void).cxx_destruct;
- (void)setExternalID:(id)a0;
- (void)setSyncError:(id)a0;
- (id)lastSyncEndDate;
- (void)setStrictestEventPrivateValueRaw:(int)a0;
- (id)title;
- (void)setCreatorBundleID:(id)a0;
- (id)creatorCodeSigningIdentity;
- (void)setCreatorCodeSigningIdentity:(id)a0;
- (int)preferredEventPrivateValueRaw;
- (void)setCachedExternalInfoData:(id)a0;
- (id)defaultAllDayAlarmOffset;
- (void)setTitle:(id)a0;
- (void)setDisplayOrder:(int)a0;
- (int)displayOrder;
- (int)managedConfigurationAccountAccess;
- (void)setShowsNotifications:(BOOL)a0;
- (long long)sourceTypeRaw;

@end
