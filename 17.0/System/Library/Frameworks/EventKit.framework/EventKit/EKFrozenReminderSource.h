@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (BOOL)disabled;
- (id)defaultAlarmOffset;
- (id)constraintsName;
- (id)lastSyncStartDate;
- (void)setLastSyncStartDate:(id)a0;
- (id)externalID;
- (id)syncError;
- (void)setLastSyncEndDate:(id)a0;
- (int)flags;
- (id)delegatedAccountOwnerStoreID;
- (void)setSyncError:(id)a0;
- (id)lastSyncEndDate;
- (id)title;
- (id)UUID;
- (int)managedConfigurationAccountAccess;
- (long long)sourceTypeRaw;
- (id)meltedObjectInStore:(id)a0;

@end
