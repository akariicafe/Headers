@class TRIAssetStore;
@protocol TRIStorageManagementProtocol, TRIPaths;

@interface TRIAssetStoreOperator : NSObject <TRIAssetStoreOperations> {
    id<TRIPaths> _paths;
    id<TRIStorageManagementProtocol> _storageManagement;
    TRIAssetStore *_store;
}

+ (unsigned long long)_fileSizeInBytesForPath:(id)a0;

- (BOOL)_removeAssetWithIdentifier:(id)a0 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a1 deletedAssetSize:(unsigned long long *)a2 dryRun:(BOOL)a3;
- (BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)a0 dest:(id)a1;
- (BOOL)_migrateAssetsDatabaseWithLocalAssetStorePath:(id)a0;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(BOOL)a2 dryRun:(BOOL)a3 includedCacheDeletableAssetIds:(id)a4 deletedAssetIds:(id *)a5;
- (BOOL)_acquireLockfileAndRunBlock:(id /* block */)a0;
- (BOOL)_fixFileProtectionForFileURL:(id)a0;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1 finalPermissionBits:(const unsigned short *)a2;
- (BOOL)addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2;
- (BOOL)_incrementUnrefAgeForAssetWithIdentifier:(id)a0 newValue:(unsigned int *)a1 dryRun:(BOOL)a2;
- (unsigned short)_hardLinkCountForFileWithPath:(id)a0;
- (id)_collectUnreferencedAssetsIncludingLinkTargetsForReferencedAssetIds:(id)a0 ignoreRecentlyCreatedAssets:(BOOL)a1;
- (void)_fixupPermissionsOnPath:(id)a0 permissionBits:(const unsigned short *)a1;
- (unsigned short)_hardLinkCountForAssetWithIdentifier:(id)a0;
- (BOOL)_removePaths:(id)a0 numRemoved:(unsigned int *)a1;
- (BOOL)removeAssetWithIdentifier:(id)a0;
- (id)_collectDeadSymlinks;
- (BOOL)_moveDirectoryAssetFromDirectory:(id)a0 toLocationForAssetIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)referenceMAAutoAssetWithId:(id)a0 futurePath:(id)a1 currentPath:(id)a2 isFileFactor:(BOOL)a3;
- (id)_requireAssetStoreTempDir;
- (BOOL)saveAssetWithIdentifier:(id)a0 sourcePath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2 removeSourceOnFailure:(BOOL)a3;
- (BOOL)migrateToGlobalAssetStoreFromLocalAssetStore:(id)a0;
- (BOOL)_removeUnreferencedAssetsWithFlockWitness:(struct TRIFlockWitness_ { int x0; } *)a0 olderThanAge:(unsigned int)a1 numRemoved:(unsigned int *)a2 deletedAssetsSize:(unsigned long long *)a3 ignoreRecentlyCreatedAssets:(BOOL)a4 dryRun:(BOOL)a5 includedCacheDeletableAssetIds:(id)a6 deletedAssetIds:(id *)a7;
- (id)initWithPaths:(id)a0 storageManagement:(id)a1 assetStore:(id)a2;
- (BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)a0;
- (BOOL)fixFileProtectionForAssetStoreFiles;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (id)_creationDateForAsset:(id)a0;
- (BOOL)_relinkLocalAssetToGlobalAssetStore:(id)a0 withAssetId:(id)a1 localAssetDir:(id)a2;
- (BOOL)_acquireLockfileInAssetStorePath:(id)a0 andRunBlock:(id /* block */)a1;
- (BOOL)_removeDeadSymlinksWithFlockWitness:(struct TRIFlockWitness_ { int x0; } *)a0 numRemoved:(unsigned int *)a1;
- (BOOL)_migrateAssetContentsWithLocalAssetStorePath:(id)a0 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a1;

@end
