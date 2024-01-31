@class NSString, NSArray, PHFetchResult, NSDictionary;
@protocol PXSearchTopAssetsResultChangeDelegate;

@interface PXSearchTopAssetsResult : NSObject <PHPhotoLibraryChangeObserver, PXSearchResultItem>

@property (readonly, copy, nonatomic) NSString *priorityAssetUUID;
@property (readonly, copy, nonatomic) NSArray *removedObjects;
@property (readonly, copy, nonatomic) NSArray *hiddenObjects;
@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) PHFetchResult *topAssetsFetchResult;
@property (weak, nonatomic) id<PXSearchTopAssetsResultChangeDelegate> delegate;
@property (readonly) NSDictionary *debugDictionary;
@property (copy, nonatomic) id /* block */ topAssetFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long itemType;

+ (id)_fetchAssetsForAssetUUIDs:(id)a0;
+ (id)_fetchResultForTopAssets:(id)a0;
+ (id)sampledAssetUUIDsFrom:(id)a0 numberOfTopAssets:(long long)a1 maxNumberToSample:(long long)a2 rangeToSample:(long long)a3;
+ (id)sortedPreviewAssetsFrom:(id)a0 priorityAssetUUID:(id)a1 numberOfTopAssets:(long long)a2;

- (id)init;
- (void)dealloc;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_curateThumbnailAssets;
- (void)_filterTopAssets:(id)a0;
- (void)_notifyDelegateOfAssetChanges:(id)a0 newCuration:(BOOL)a1;
- (BOOL)_shouldRecurateForChangeDetails:(id)a0;
- (id)initWithAssetUUIDs:(id)a0 priorityAssetUUID:(id)a1;
- (unsigned long long)numberOfTopAssets;

@end
