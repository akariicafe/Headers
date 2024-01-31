@class MSVSQLDatabase, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MPServerObjectDatabase : NSObject <MPMediaKitEntityRelationshipPayloadProvider, MPObjectDatabase> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MSVSQLDatabase *_database;
    NSHashTable *_observers;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _observersLock;
}

@property (class, nonatomic) BOOL prefersInMemoryDatabase;
@property (class, readonly, nonatomic) MPServerObjectDatabase *sharedServerObjectDatabase;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)importObjectsFromRequest:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)_modelObjectMatchingIdentifierSet:(id)a0 propertySet:(id)a1 error:(id *)a2;
- (void)removeObserver:(id)a0;
- (id)modelObjectMatchingIdentifierSet:(id)a0 propertySet:(id)a1 error:(id *)a2;
- (void)registerObserver:(id)a0;
- (id)assetsMatchingIdentifierSet:(id)a0;
- (void)purgeGlideSubscriptionDataForHashedAccoundID:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)playbackAuthorizationTokenForEntityMatchingIdentifierSet:(id)a0 trustID:(id)a1;
- (id)relatedIdentifierSetsForParentIdentifierSet:(id)a0 childKey:(id)a1;
- (void)enumerateAssetsMissingSINFsForHashedPersonID:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)importAssetsFromRequest:(id)a0 error:(id *)a1;
- (void)removePlaybackAuthorizationTokensForTrust:(id)a0;
- (id)payloadForRelatedEntityWithIdentifierSet:(id)a0;
- (id)hlsAssetMatchingIdentifierSet:(id)a0;
- (id)_payloadForIdentifierSet:(id)a0 outError:(id *)a1;
- (id)assetsWithMiniSINFsMatchingIdentifierSet:(id)a0;
- (id)_assetsMatchingIdentifierSet:(id)a0 query:(id)a1;
- (void).cxx_destruct;
- (id)relatedIdentifierSetsForParentIdentifierSet:(id)a0 parentVersionHash:(id)a1 childKey:(id)a2;
- (id)identifiersMatchingIdentifierSet:(id)a0 propertySet:(id)a1 options:(unsigned long long)a2 trustID:(id)a3 error:(id *)a4;
- (id)identifiersMatchingIdentifierSet:(id)a0 propertySet:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)shouldRenewPlaybackAuthorizationTokenForEntityMatchingIdentifierSet:(id)a0 trustID:(id)a1;
- (id)modelObjectMatchingIdentifierSet:(id)a0 propertySet:(id)a1 trustID:(id)a2 error:(id *)a3;
- (id)payloadDataForIdentifierSet:(id)a0 outError:(id *)a1;
- (id)modelObjectMatchingIdentifierSet:(id)a0 propertySet:(id)a1;
- (BOOL)_createDatabaseSchema;
- (id)importObjectsFromRequest:(id)a0 options:(unsigned long long)a1 trustID:(id)a2 playActivityFeatureName:(id)a3 error:(id *)a4;
- (void)addObserver:(id)a0;
- (id)identifiersMatchingIdentifierSet:(id)a0 propertySet:(id)a1 options:(unsigned long long)a2;
- (id)importObjectsFromRequest:(id)a0 options:(unsigned long long)a1 trustID:(id)a2 error:(id *)a3;
- (id)_hlsAssetMatchingIdentifierSet:(id)a0 query:(id)a1;
- (id)_initWithDatabaseCreationBlock:(id /* block */)a0;

@end
