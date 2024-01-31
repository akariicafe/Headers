@class PLPhotoLibrary, PLLibraryServicesManager, NSMutableSet, PLLazyObject;

@interface PLDuplicateProcessor : NSObject {
    PLLibraryServicesManager *_lsm;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processingLock;
    NSMutableSet *_inFlightMergeAssetUuids;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inFlightMergeLock;
    PLLazyObject *_lazyAppPrivateData;
    BOOL _enableEXIFDataAccess;
}

@property (retain) PLPhotoLibrary *unitTestLibrary;
@property (readonly) BOOL isMerging;

+ (void)signalBackgroundJobSeviceDuplicateProcessingWithLibrary:(id)a0;
+ (void)updateSharedLibraryIsEnabledFeatureVersionIfNeededWithPhotoLibrary:(id)a0 cplConfiguration:(id)a1;
+ (BOOL)removeAllDuplicateSharedLibraryAssetFromAlbumWithPhotoLibrary:(id)a0 error:(id *)a1;
+ (BOOL)isExitingSharedLibraryForLibrary:(id)a0;
+ (BOOL)sharedLibraryDedupeEnabledWithPathManager:(id)a0;
+ (BOOL)isValidDuplicateProcessorForLibraryServicesManager:(id)a0;
+ (BOOL)_removeAssetsFromDuplicateAlbumUsingFetchRequest:(id)a0 library:(id)a1 error:(id *)a2;

- (id)initWithLibraryServicesManager:(id)a0;
- (id)_photoLibrary;
- (void).cxx_destruct;
- (id)_appPrivateData;
- (BOOL)_processMergeAlbumAssetOIDMap:(id)a0 localIdentifierMap:(id)a1 library:(id)a2 error:(id *)a3;
- (BOOL)_batchEnumerateOrGenerateAssetObjectIdsFromStartingAssetOIDs:(id)a0 library:(id)a1 error:(id *)a2 continuationHandler:(id /* block */)a3 processingBatchBlock:(id /* block */)a4;
- (id)_buildInterruptBatchFromStartingOIDs:(id)a0 library:(id)a1;
- (BOOL)_detectDuplicatesAndInsertIntoDuplicateAlbumWithPhotoLibrary:(id)a0 detector:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (id)_duplicateAlbumsFromAssets:(id)a0;
- (id)_fetchAssetOIDsForPhotoLibrary:(id)a0 error:(id *)a1;
- (id)_fetchAssetsFromOIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (id)_fetchAssetsFromReference:(id)a0 isOID:(BOOL)a1 library:(id)a2 error:(id *)a3;
- (id)_fetchAssetsFromUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (id)_fetchAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 error:(id *)a2;
- (id)_fetchCloudIdentifiersFromAssetUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (void)_inFlightMergeAssetsAddUUIDs:(id)a0;
- (void)_inFlightMergeAssetsRemoveUUIDs:(id)a0;
- (BOOL)_insertIntoDuplicateAlbum:(id)a0 assets:(id)a1 duplicateType:(short)a2 photoLibrary:(id)a3 error:(id *)a4;
- (BOOL)_isAssetValidForMerge:(id)a0;
- (BOOL)_isMergeFeatureEnabled:(id *)a0;
- (BOOL)_isValidSharedLibraryStateWithLibrary:(id)a0 error:(id *)a1;
- (BOOL)_moveDuplicateAlbumAssestFromAlbums:(id)a0 toTargetAlbum:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (id)_processAlbumGroupingFromAssets:(id)a0 localIdentifierToCloudIdentifiers:(id)a1 library:(id)a2;
- (void)_processCloudScopedIdentifierFromLocalIdentifiers:(id)a0 localToCloudIdentifierMap:(id)a1 cplManager:(id)a2 completionHandler:(id /* block */)a3;
- (void)_processCloudScopedIdentifiersFromAssetUUIDS:(id)a0 library:(id)a1 completionHandler:(id /* block */)a2;
- (id)_processContainersAssetUUIDS:(id)a0 library:(id)a1;
- (BOOL)_processDuplicatesWithPhotoLibrary:(id)a0 processingType:(unsigned long long)a1 assetObjectIds:(id)a2 error:(id *)a3;
- (BOOL)_processMergeAssets:(id)a0 localIdentifierMap:(id)a1 library:(id)a2 error:(id *)a3;
- (BOOL)_processMergeGroup:(id)a0 processedAssetCount:(unsigned long long *)a1 skippedAssetCount:(unsigned long long *)a2 processedAssetCountAfterSave:(unsigned long long *)a3 library:(id)a4 error:(id *)a5;
- (BOOL)_processMergeGroupContainer:(id)a0 processedAssetCount:(unsigned long long *)a1 skippedAssetCount:(unsigned long long *)a2 library:(id)a3 error:(id *)a4;
- (BOOL)_processedDuplicateAssetSubGroupWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (id)_processedDuplicateAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 duplicateType:(short)a2 associatedDuplicateAlbum:(id *)a3 error:(id *)a4;
- (BOOL)_processedRemoveExclusionGroupAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 error:(id *)a2;
- (id)_resumeInterruptMarker;
- (void)_setInterruptMarker:(id)a0;
- (BOOL)assetsArePendingForDuplicateMergeProcessing:(id)a0;
- (void)mergeDuplicateAssetsWithAssetUUIDs:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)processDuplicatesOfAssetObjectIds:(id)a0 processingType:(unsigned long long)a1 error:(id *)a2 continuationHandler:(id /* block */)a3;

@end
