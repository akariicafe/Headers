@class HDDatabaseValueCache, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDSourceManager : NSObject <HDProfileReadyObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_sourceEntityByBundleIdentifierCache;
    HDDatabaseValueCache *_clientSourceCache;
    HDDatabaseValueCache *_localSourceForBundleIdentifierCache;
    HDDatabaseValueCache *_localSourceForSourceID;
}

- (void)profileDidBecomeReady:(id)a0;
- (id)sourceForAppleDeviceWithUUID:(id)a0 identifier:(id)a1 name:(id)a2 productType:(id)a3 createIfNecessary:(BOOL)a4 error:(id *)a5;
- (id)init;
- (void)dealloc;
- (id)sourceForCodableSource:(id)a0 provenance:(long long)a1 createIfNecessary:(BOOL)a2 isDeleted:(BOOL *)a3 error:(id *)a4;
- (id)initWithProfile:(id)a0;
- (BOOL)createSourcesWithCodables:(id)a0 provenance:(long long)a1 error:(id *)a2;
- (BOOL)_deleteSourcesWithUUIDs:(id)a0 localSourceEntityCacheKey:(id)a1 syncIdentity:(id)a2 deleteSamples:(BOOL)a3 transaction:(id)a4 error:(id *)a5;
- (id)publicSourceForClinicalExternalIdentifier:(id)a0 provenance:(long long)a1 createOrUpdateIfNecessary:(BOOL)a2 nameOnCreateOrUpdate:(id)a3 error:(id *)a4;
- (id)allSourcesWithError:(id *)a0;
- (id)sourceForClient:(id)a0 error:(id *)a1;
- (id)allWatchSourcesWithError:(id *)a0;
- (id)clientSourceForSourceEntities:(id)a0 error:(id *)a1;
- (id)clientSourceForUUID:(id)a0 error:(id *)a1;
- (id)insertSourceWithBundleIdentifier:(id)a0 owningAppBundleIdentifier:(id)a1 UUID:(id)a2 name:(id)a3 options:(unsigned long long)a4 isCurrentDevice:(BOOL)a5 productType:(id)a6 modificationDate:(id)a7 provenance:(long long)a8 error:(id *)a9;
- (id)uncachedClientSourceForPersistentID:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)sourceUUIDForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)clientSourceForPersistentID:(id)a0 error:(id *)a1;
- (id)createOrUpdateSourceForClient:(id)a0 error:(id *)a1;
- (id)sourceEntityForClientSource:(id)a0 createOrUpdateIfNecessary:(BOOL)a1 error:(id *)a2;
- (id)localSourceForBundleIdentifier:(id)a0 copyIfNecessary:(BOOL)a1 error:(id *)a2;
- (id)privateSourceForClinicalAccountIdentifier:(id)a0 provenance:(long long)a1 createOrUpdateIfNecessary:(BOOL)a2 nameOnCreateOrUpdate:(id)a3 error:(id *)a4;
- (id)clientSourceForSourceEntity:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)clientSourceForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)localSourceForSourceID:(id)a0 copyIfNecessary:(BOOL)a1 error:(id *)a2;
- (id)_createSourceEntityForLocalDeviceWithError:(id *)a0;
- (BOOL)updateCurrentDeviceNameWithError:(id *)a0;
- (BOOL)deleteSourceWithBundleIdentifier:(id)a0 error:(id *)a1;
- (void)_applicationsUninstalledNotification:(id)a0;
- (id)allSourcesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)sourceForApplicationIdentifier:(id)a0 createOrUpdateIfNecessary:(BOOL)a1 entitlements:(id)a2 name:(id)a3 error:(id *)a4;
- (id)localDeviceSourceWithError:(id *)a0;
- (id)insertCodableSource:(id)a0 provenance:(long long)a1 profile:(id)a2 error:(id *)a3;
- (id)localSourceForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)setLocalDeviceSourceUUID:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)clientSourcesForSourceIDs:(id)a0 error:(id *)a1;

@end
