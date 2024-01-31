@class NSString, PXPhotoKitAssetsDataSource, NSPredicate, NSArray, PHPhotoLibrary, PXPhotosDataSource, NSObject, NSNumber;
@protocol OS_dispatch_queue, PXPhotosDataSourceProvider;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager, PXChangeObserver> {
    PXPhotosDataSource *_photosDataSource;
    NSNumber *_backgroundFetchOriginSection;
    NSObject<OS_dispatch_queue> *_initialDataSourceLoadingQueue;
    NSString *_localizedLoadingInitialDataSourceMessage;
    NSPredicate *_filterPredicate;
    NSArray *_sortDescriptors;
}

@property (retain, nonatomic) id<PXPhotosDataSourceProvider> photosDataSourceProvider;
@property (nonatomic, setter=_setLoadingInitialPhotosDataSource:) BOOL _isLoadingInitialPhotosDataSource;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSourceIfExists;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSource *dataSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long libraryFilter;
@property (nonatomic) BOOL ignoreSharedLibraryFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (copy, nonatomic) NSArray *sortDescriptors;

+ (BOOL)_includeUnsavedSyndicatedAssetsForAssetCollection:(id)a0;
+ (id)dataSourceManagerWithAsset:(id)a0 options:(unsigned long long)a1;
+ (id)dataSourceManagerWithAssets:(id)a0 containerTitle:(id)a1 options:(unsigned long long)a2;
+ (id)dataSourceManagerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1 existingKeyAssetsFetchResult:(id)a2 fetchPropertySets:(id)a3 basePredicate:(id)a4 options:(unsigned long long)a5 ignoreSharedLibraryFilters:(BOOL)a6;
+ (id)dataSourceManagerWithAsset:(id)a0;
+ (id)dataSourceManagerForAssetCollection:(id)a0;
+ (id)dataSourceManagerWithAssets:(id)a0;
+ (id)dataSourceManagerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1 existingKeyAssetsFetchResult:(id)a2 fetchPropertySets:(id)a3 basePredicate:(id)a4 options:(unsigned long long)a5 ignoreSharedLibraryFilters:(BOOL)a6 reverseSortOrder:(BOOL)a7;

- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)stopExcludingAssets:(id)a0;
- (id)init;
- (void)startBackgroundFetchIfNeeded;
- (id)sharedLibraryStatusProvider;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (void)stopForceIncludingAllAssets;
- (id)px_sharedLibrarySharingSuggestionsCountsManager;
- (void)refreshResultsForAssetCollection:(id)a0;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (id)initWithPhotosDataSourceProvider:(id)a0;
- (BOOL)isBackgroundFetching;
- (BOOL)supportsCurationToggling;
- (id)_createAssetsDataSourceWithPhotosDataSource:(id)a0 withChange:(id)a1;
- (id)localizedLoadingInitialDataSourceMessage;
- (void)_didFinishLoadingInitialPhotosDataSource;
- (BOOL)supportsFiltering;
- (id)createInitialDataSource;
- (id)localizedEmptyPlaceholderTitle;
- (id)initWithPhotosDataSource:(id)a0;
- (id)createDataSourceManagerForAssetsInSectionOfAsset:(id)a0;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void).cxx_destruct;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (void)updateWithPhotosDataSource:(id)a0 andDataSourceChange:(id)a1;
- (id)photosDataSourceInterestingAssetReferences:(id)a0;
- (id)localizedEmptyPlaceholderAttributedMessage;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)photosDataSourceDidFinishBackgroundFetching:(id)a0;
- (void)setPhotosDataSource:(id)a0 publishIntermediateEmptySnapshot:(BOOL)a1;
- (void)setCurationEnabledForAllCollections:(BOOL)a0 collectionsToDiff:(id)a1;
- (void)_ensurePhotosDataSource;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (BOOL)isLoadingInitialDataSource;
- (id)createDataSourceManagerForAsset:(id)a0;
- (void)excludeAssetsAtIndexPaths:(id)a0;

@end
