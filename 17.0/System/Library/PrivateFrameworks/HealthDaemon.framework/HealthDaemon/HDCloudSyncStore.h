@class NSUUID, NSString, HDProfile, HDSyncIdentity, HDCloudSyncShardPredicate, HDSharingPredicate;

@interface HDCloudSyncStore : NSObject <NSCopying, HDSyncStore> {
    long long _syncProvenance;
    long long _syncEpoch;
    int _syncProtocolVersion;
}

@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) HDSyncIdentity *syncIdentity;
@property (readonly, nonatomic) BOOL canPush;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate;
@property (readonly, copy, nonatomic) NSString *sharingIdentifier;
@property (readonly, nonatomic) HDSharingPredicate *sharingPredicate;
@property (readonly, nonatomic) BOOL syncTombstonesOnly;
@property (readonly, nonatomic) BOOL supportsRebase;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createOrUpdateShardStoresForProfile:(id)a0 throughDate:(id)a1 syncCircleName:(id)a2 ownerIdentifier:(id)a3 containerIdentifier:(id)a4 syncIdentity:(id)a5 error:(id *)a6;
+ (void)samplesDeletedInProfile:(id)a0 byUser:(BOOL)a1 intervals:(id)a2;
+ (id)shardPredicatesForProfile:(id)a0 syncCircleName:(id)a1 currentDate:(id)a2 error:(id *)a3;
+ (id)syncStoreForProfile:(id)a0 storeIdentifier:(id)a1 syncCircleName:(id)a2 ownerIdentifier:(id)a3 syncIdentity:(id)a4 containerIdentifier:(id)a5 error:(id *)a6;

- (id)syncStoreIdentifier;
- (void).cxx_destruct;
- (id)orderedSyncEntities;
- (id)databaseIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getPersistedAnchorMapWithError:(id *)a0;
- (id)receivedSyncAnchorMapWithError:(id *)a0;
- (id)_syncAnchorMapByStrippingBlockedEntities:(id)a0;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)a0;
- (BOOL)clearAllSyncAnchorsWithError:(id *)a0;
- (BOOL)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)a0;
- (BOOL)persistState:(id)a0 error:(id *)a1;
- (id)persistedStateWithError:(id *)a0;
- (id)primaryOrderedSyncEntities;
- (BOOL)replaceFrozenAnchorMap:(id)a0 updateDate:(id)a1 error:(id *)a2;
- (BOOL)replacePersistedAnchorMap:(id)a0 error:(id *)a1;
- (BOOL)resetReceivedSyncAnchorMapWithError:(id *)a0;
- (void)setExpectedSequenceNumber:(long long)a0 forSyncEntityClass:(Class)a1;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)a0;
- (BOOL)shouldEnforceSequenceOrdering;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)a0;
- (id)syncEntityDependenciesForSyncEntity:(Class)a0;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreForEpoch:(long long)a0;
- (id)syncStoreForProtocolVersion:(int)a0;
- (id)syncStoreForTombstoneSyncOnly:(BOOL)a0;

@end
