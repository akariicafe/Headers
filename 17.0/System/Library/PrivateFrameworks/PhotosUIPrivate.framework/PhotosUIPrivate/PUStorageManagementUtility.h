@class PHPhotoLibrary, NSNumber;

@interface PUStorageManagementUtility : NSObject

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSNumber *cloudStorageTotalBytes;
@property (readonly, nonatomic) BOOL isCPLEnabled;
@property (readonly, nonatomic) BOOL isCPLInExitMode;
@property (readonly, nonatomic) BOOL shouldHideCPL;
@property (readonly, nonatomic) BOOL isDeletableItemsInTrash;
@property (readonly, nonatomic) NSNumber *sizeForRecentlyDeletedItems;
@property (readonly, nonatomic) BOOL isOptimizedModeOn;
@property (readonly, nonatomic) unsigned long long totalReclaimableSizeFromPurgingVideoClips;
@property (readonly, nonatomic) BOOL shouldShowCloudStorageTip;
@property (readonly, nonatomic) unsigned long long cloudStorageTotalBytesSize;

+ (id)_predicateForPersonalLibraryAssets;
+ (unsigned long long)cloudStorageTotalBytesSizeFromCloudQuotaDictionary:(id)a0;
+ (id)predicateForMinimumVideoSize;
+ (id)predicateForUploadedAssetFetch;
+ (id)storageTipAssetCollectionForType:(unsigned long long)a0 photoLibrary:(id)a1;
+ (id)storageTipAssetFetchOptionsForType:(unsigned long long)a0 photoLibrary:(id)a1;
+ (id)stringWithSizeUnitForValue:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)_assetsInTrash;
- (id)_defaultVideoAssetFetchOptionsWithSortOrder:(BOOL)a0;
- (id)_deleteableVideoAssets;
- (void)enableCPLWithCompletionBlock:(id /* block */)a0;
- (void)enableOptimizedMode:(BOOL)a0;
- (void)expungeRecentlyDeletedItemsWithCompletionBlock:(id /* block */)a0;
- (id)fetchVideoAssetsBySizeWithSortOrder:(BOOL)a0;
- (void)purgeableSizeAndOriginalsInLibrary:(id /* block */)a0;
- (id)significantItems;

@end
