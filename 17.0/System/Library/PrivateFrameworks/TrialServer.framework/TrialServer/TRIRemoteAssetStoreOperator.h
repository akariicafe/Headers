@class _PASXPCClientHelper;
@protocol TRIStorageManagementProtocol, TRIPaths;

@interface TRIRemoteAssetStoreOperator : NSObject <TRIAssetStoreOperations> {
    id<TRIPaths> _paths;
    _PASXPCClientHelper *_internalHelper;
    id<TRIStorageManagementProtocol> _storageManagement;
}

- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(BOOL)a2 dryRun:(BOOL)a3 includedCacheDeletableAssetIds:(id)a4 deletedAssetIds:(id *)a5;
- (BOOL)addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2;
- (BOOL)removeAssetWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)referenceMAAutoAssetWithId:(id)a0 futurePath:(id)a1 currentPath:(id)a2 isFileFactor:(BOOL)a3;
- (BOOL)saveAssetWithIdentifier:(id)a0 sourcePath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2 removeSourceOnFailure:(BOOL)a3;
- (id)initWithPaths:(id)a0;
- (BOOL)fixFileProtectionForAssetStoreFiles;
- (BOOL)migrateToGlobalAssetStoreIfNeeded;
- (BOOL)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(id)a0 factorPackMap:(id)a1 rolloutDeploymentMap:(id)a2;
- (BOOL)removeUnreferencedGlobalFactorPacksWithRemovedCount:(unsigned int *)a0;
- (BOOL)saveFactorPackToGlobalPath:(id)a0 fromTemporaryPath:(id)a1 factors:(id)a2;
- (BOOL)updateFactorPackAtGlobalPath:(id)a0 deletingFactors:(id)a1;
- (BOOL)updateFactorPackAtGlobalPath:(id)a0 withFactors:(id)a1;

@end
