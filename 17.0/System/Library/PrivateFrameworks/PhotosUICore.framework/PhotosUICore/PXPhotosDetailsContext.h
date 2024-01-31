@class PHAsset, PXDisplayTitleInfo, NSString, PXPhotosDataSource, PXPhotosDetailsVisualLookupData, PXPhotosDetailsViewModel, NSDictionary, PHFetchResult, NSCache;

@interface PXPhotosDetailsContext : PXObservable <PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver, PXChangeObserver, PXHierarchicalContext>

@property (class, readonly, nonatomic) NSCache *preheatedAssets;

@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo;
@property (readonly, weak, nonatomic) PXPhotosDetailsContext *parentContext;
@property (readonly, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (readonly, nonatomic) long long viewSourceOrigin;
@property (readonly, nonatomic) PXPhotosDetailsViewModel *viewModel;
@property (readonly, nonatomic) unsigned long long contextHierarchyDepth;
@property (readonly, nonatomic) PXPhotosDetailsVisualLookupData *visualLookupData;
@property (readonly, nonatomic) PHAsset *firstAsset;
@property (readonly, nonatomic) PHFetchResult *assetCollections;
@property (readonly, copy, nonatomic) NSDictionary *assetsByCollection;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, copy, nonatomic) NSString *titleFontName;
@property (readonly, nonatomic) BOOL shouldShowMovieHeader;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL shouldShowHeaderTitle;
@property (readonly, nonatomic) BOOL shouldUseKeyFace;
@property (copy, nonatomic) id /* block */ unlockDeviceStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fetchPropertySets;
+ (id)photosDetailsContextForAssetCollection:(id)a0 assets:(id)a1 viewSourceOrigin:(long long)a2;
+ (id)_assetFetchResultForAssets:(id)a0;
+ (id)_preheatedFetchResultForAsset:(id)a0;
+ (id)photosDetailsContextForAsset:(id)a0 parentContext:(id)a1;
+ (id)photosDetailsContextForAssetCollection:(id)a0 assets:(id)a1 keyAssets:(id)a2 enableCuration:(BOOL)a3 enableKeyAssets:(BOOL)a4 useVerboseSmartDescription:(BOOL)a5 viewSourceOrigin:(long long)a6;
+ (id)photosDetailsContextForAssetCollection:(id)a0 assets:(id)a1 keyAssets:(id)a2 enableCuration:(BOOL)a3 enableKeyAssets:(BOOL)a4 useVerboseSmartDescription:(BOOL)a5 viewSourceOrigin:(long long)a6 ignoreSharedLibraryFilters:(BOOL)a7;
+ (id)photosDetailsContextForMemory:(id)a0;
+ (id)photosDetailsContextForMemory:(id)a0 enableCuration:(BOOL)a1 enableKeyAssets:(BOOL)a2;
+ (void)photosDetailsContextPreheatForAssets:(id)a0;

- (void)setPhotosDataSource:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)setKeyAssetsFetchResult:(id)a0;
- (void)setViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setLocalizedSubtitle:(id)a0;
- (void)setHasLocation:(BOOL)a0;
- (void)setLocalizedTitle:(id)a0;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (id)mutableChangeObject;
- (void).cxx_destruct;
- (void)setPeople:(id)a0;
- (void)setTitleFontName:(id)a0;
- (void)_updatePropertiesDerivedFromDisplayTitleInfo;
- (void)_updatePropertiesDerivedFromPhotosDataSource;
- (id)initWithPhotosDataSource:(id)a0 displayTitleInfo:(id)a1 parentContext:(id)a2 keyAssetsFetchResult:(id)a3;
- (void)setAssetCollections:(id)a0;
- (void)setAssetsByCollection:(id)a0;
- (void)setShouldShowMovieHeader:(BOOL)a0;
- (void)setViewSourceOrigin:(long long)a0;
- (void)setVisualLookupData:(id)a0;

@end
