@class TRIAssetStore, TRIAssetStoreOperator;
@protocol TRITrialInternalSystemEntitled, TRIStorageManagementProtocol;

@interface TRIInternalSystemServiceRequestHandler : NSObject <TRIXPCInternalSystemServiceProtocol> {
    id<TRITrialInternalSystemEntitled> _entitlementWitness;
    TRIAssetStore *_store;
    TRIAssetStoreOperator *_operator;
    id<TRIStorageManagementProtocol> _storageManagement;
}

- (void)logSystemCovariates;
- (void).cxx_destruct;
- (void)addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2 completion:(id /* block */)a3;
- (void)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(BOOL)a2 dryRun:(BOOL)a3 includedCacheDeletableAssetIds:(id)a4 completion:(id /* block */)a5;
- (void)fixFileProtectionForAssetStoreWithCompletion:(id /* block */)a0;
- (void)migrateToGlobalAssetStoreIfNeededFromLocalStore:(id)a0 sourceExtension:(id)a1 completion:(id /* block */)a2;
- (void)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(id)a0 factorPackMap:(id)a1 rolloutDeploymentMap:(id)a2 completion:(id /* block */)a3;
- (void)referenceMAAutoAssetWithId:(id)a0 futurePath:(id)a1 currentPath:(id)a2 isFileFactor:(BOOL)a3 sourceExtension:(id)a4 completion:(id /* block */)a5;
- (void)removeAssetWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeUnreferencedGlobalFactorPacksWithCompletion:(id /* block */)a0;
- (void)saveAssetWithIdentifier:(id)a0 sourcePath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2 removeSourceOnFailure:(BOOL)a3 completion:(id /* block */)a4;
- (void)saveFactorPackForUserId:(id)a0 toGlobalPath:(id)a1 fromTemporaryPath:(id)a2 factors:(id)a3 sourceExtension:(id)a4 completion:(id /* block */)a5;
- (void)updateFactorPackForUserId:(id)a0 atGlobalPath:(id)a1 deletingFactors:(id)a2 completion:(id /* block */)a3;
- (void)updateFactorPackForUserId:(id)a0 atGlobalPath:(id)a1 populatingFactors:(id)a2 completion:(id /* block */)a3;
- (BOOL)_updateOnDemandReferenceCountsForUser:(id)a0 atGlobalPath:(id)a1 addingFactors:(id)a2 removingFactors:(id)a3 newlyUnreferencedFactors:(id *)a4;
- (id)initWithEntitlementWitness:(id)a0;

@end
