@class NSData, NSString, REMObjectID, REMAccountTemplatesContext, NSSet, REMResolutionTokenMap, REMAccountCapabilities, REMStore, REMAccountStorage, REMCRMergeableOrderedSet, NSOrderedSet, REMAccountGroupContext;

@interface REMAccount : NSObject <REMPersonIDProviding, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding>

@property (class, readonly, nonatomic) REMObjectID *localInternalAccountID;
@property (class, readonly, nonatomic) REMObjectID *localAccountID;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (nonatomic) BOOL markedForRemoval;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) NSSet *listIDsToUndelete;
@property (readonly, nonatomic) NSSet *smartListIDsToUndelete;
@property (readonly, nonatomic) BOOL listsDADisplayOrderChanged;
@property (readonly, nonatomic) BOOL debugSyncDisabled;
@property (readonly, nonatomic) REMAccountTemplatesContext *templatesContext;
@property (retain, nonatomic) REMStore *store;
@property (readonly, copy, nonatomic) REMAccountStorage *storage;
@property (retain, nonatomic) REMAccountCapabilities *capabilities;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (readonly, nonatomic) NSData *listIDsMergeableOrderingData;
@property (readonly, nonatomic) NSOrderedSet *listIDsOrdering;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL inactive;
@property (readonly, nonatomic) BOOL didChooseToMigrate;
@property (readonly, nonatomic) BOOL didChooseToMigrateLocally;
@property (readonly, nonatomic) BOOL didFinishMigration;
@property (readonly, nonatomic) long long persistenceCloudSchemaVersion;
@property (readonly, nonatomic) NSString *daConstraintsDescriptionPath;
@property (readonly, nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (readonly, nonatomic) BOOL daSupportsPhoneNumbers;
@property (readonly, nonatomic) BOOL daSupportsSharedCalendars;
@property (readonly, nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) BOOL supportsSharingLists;
@property (readonly, nonatomic) REMAccountGroupContext *groupContext;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *personID;
@property (copy, nonatomic) NSData *personIDSalt;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *daSyncToken;
@property (readonly, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (BOOL)canCopyReminderLosslesslyFromAccountWithType:(long long)a0 toAccountWithType:(long long)a1 accountTypeHost:(id)a2;
+ (BOOL)isCloudBasedAccountType:(long long)a0;
+ (id)newObjectID;
+ (id)_accountTypeMaskWithBitMask:(long long)a0;
+ (id)objectIDWithUUID:(id)a0;

- (id)externalIdentifierForMarkedForDeletionObject;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)isUnsupported;
- (BOOL)shouldUseExternalIdentifierAsDeletionKey;
- (id)optionalObjectID;
- (unsigned long long)hash;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithStore:(id)a0 storage:(id)a1;
- (id)fetchListsWithError:(id *)a0;
- (BOOL)canCopyReminderLosslesslyToAccount:(id)a0;
- (id)description;
- (BOOL)isConsideredEmptyWithResultPtr:(BOOL *)a0 withError:(id *)a1;
- (id)fetchCustomSmartListsWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)MCIsManagedWithResultPtr:(BOOL *)a0 error:(id *)a1;
- (id)accountTypeHost;
- (id)fetchListsIncludingSpecialContainersWithError:(id *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
