@class PLLazyObject, NSPersistentStore, NSMutableSet, PLThumbnailCascadingDownscaleContext, NSLock, NSMutableArray;

@interface PLThumbnailManager : PLThumbnailManagerCore {
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSLock *_fixLock;
    PLThumbnailCascadingDownscaleContext *_downscaleContext;
    BOOL _shouldRebuildThumbnails;
    BOOL _didCheckShouldRebuildThumbnails;
    BOOL _hasExceededThumbnailRebuildRequestLimit;
    BOOL _isRebuildingThumbnails;
    NSPersistentStore *_migrationStore;
    PLLazyObject *_slowPersistenceManagers;
}

@property (retain, nonatomic) id observerToken;

+ (BOOL)hasRebuildingThumbnailsIndicatorAndRebuildingWithPathManager:(id)a0;
+ (id)thumbnailIdentifierWithAssetUUID:(id)a0 directory:(id)a1 filename:(id)a2 bundleScope:(unsigned short)a3 pathManager:(id)a4;
+ (id)_thumbnailRebuildIndicatorPathWithPathManager:(id)a0;
+ (id)masterThumbFilename;

- (BOOL)isRebuildingThumbnails;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)dealloc;
- (void)setThumbnailsForAsset:(id)a0 withImage:(id)a1;
- (id)thumbManagerForFormatID:(unsigned short)a0 readOnly:(BOOL)a1;
- (id)_tableDescriptions;
- (void)continueRebuildingTableThumbsInLibrary:(id)a0;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)a0 library:(id)a1 error:(id *)a2;
- (long long)removeAllThumbnailsInContext:(id)a0 dryRun:(BOOL)a1 count:(unsigned long long *)a2;
- (id)indexStatisticsForLibrary:(id)a0;
- (void)removeObsoleteMetadata;
- (id)_rebuildThumbnailsQueue;
- (id)imageTableForFormat:(unsigned short)a0;
- (BOOL)wantsTableOnlyRebuild;
- (id)placeholderDataForFormat:(unsigned short)a0 photoImageSize:(struct CGSize { double x0; double x1; })a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7;
- (void)reStampConfigAsNeedingTableThumbMigration;
- (id)dataForPhoto:(id)a0 format:(unsigned short)a1 allowPlaceholder:(BOOL)a2 width:(int *)a3 height:(int *)a4 bytesPerRow:(int *)a5 dataWidth:(int *)a6 dataHeight:(int *)a7 imageDataOffset:(int *)a8;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)a0;
- (BOOL)setThumbnailsForThumbIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 assetUUID:(id)a2 kind:(short)a3 extension:(id)a4 withImage:(id)a5;
- (id)_missingThumbnailPredicate;
- (BOOL)hasExceededRebuildThumbnailRequestLimit;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)deleteThumbnailsWithIdentifier:(id)a0 orIndex:(unsigned long long)a1 uuid:(id)a2;
- (void)_recordRebuildThumbnailsAttempt;
- (id)_dataForAsset:(id)a0 format:(unsigned short)a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7 imageDataFormat:(unsigned short *)a8;
- (id)thumbnailJPEGPathForPhoto:(id)a0;
- (struct CGImage { } *)newImageForAsset:(id)a0 format:(id)a1;
- (void)_removeMasterThumbDirectoriesWithFileManagerDelegate:(id)a0;
- (BOOL)resetThumbnailsWithResetType:(long long)a0 deferHintChanges:(BOOL)a1 inContext:(id)a2;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0 withToken:(id)a1;
- (void)rebuildAllMissingThumbnailsInLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)_thumbnailLoadingAssetIsHiddenOrTrashed:(id)a0;
- (id)initWithPhotoLibraryPathManager:(id)a0 storeFromMigration:(id)a1;
- (void)removeRebuildThumbnailsRequest:(const char *)a0;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0;
- (id)imageTableForFormat:(unsigned short)a0 readOnly:(BOOL)a1;
- (BOOL)hasMissingThumbnailsInLibrary:(id)a0;
- (void)addRebuildThumbnailsRequest;
- (id)newSlowPersistenceManagers;
- (BOOL)resetThumbnailsForced:(BOOL)a0 isMissingTables:(BOOL)a1 inContext:(id)a2;
- (long long)_diskFootprintOfTableThumbnailTables;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)a0;
- (BOOL)_performUncompressedTableDownscaleIntoDatas:(id)a0 image:(id)a1 assetUUID:(id)a2;
- (id)_contextForConfigurationChanges;
- (BOOL)hasRebuildThumbnailsRequest;
- (id)thumbManagerForFormatID:(unsigned short)a0;
- (BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 image:(id)a2 assetUUID:(id)a3;
- (void)preheatThumbnailDataWithFormat:(unsigned short)a0 thumbnailIndexes:(id)a1;

@end
