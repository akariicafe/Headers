@class NSArray, PXSharedLibraryStatusProvider, PXSharedLibrarySharingSuggestionsCountsManager, NSString, NSPredicate, PXAssetsDataSource, NSAttributedString;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager>

@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsCountsManager *px_sharedLibrarySharingSuggestionsCountsManager;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderTitle;
@property (readonly, copy, nonatomic) NSAttributedString *localizedEmptyPlaceholderAttributedMessage;
@property (readonly, copy, nonatomic) NSString *localizedLoadingInitialDataSourceMessage;
@property (readonly, nonatomic) BOOL isLoadingInitialDataSource;
@property (readonly, nonatomic) BOOL isBackgroundFetching;
@property (readonly, nonatomic) BOOL supportsCurationToggling;
@property (readonly, nonatomic) BOOL supportsFiltering;
@property (readonly, nonatomic) NSPredicate *filterPredicate;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)stopExcludingAssets:(id)a0;
- (void)startBackgroundFetchIfNeeded;
- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (void)stopForceIncludingAllAssets;
- (void)setFilterPredicate:(id)a0;
- (void)refreshResultsForAssetCollection:(id)a0;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (id)mutableChangeObject;
- (id)createDataSourceManagerForAssetsInSectionOfAsset:(id)a0;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void).cxx_destruct;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)setCurationEnabledForAllCollections:(BOOL)a0 collectionsToDiff:(id)a1;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (id)createDataSourceManagerForAsset:(id)a0;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)ensureStartingSectionHasContent;
- (void)ensureLastSectionHasContent;
- (void)waitForAvailabilityOfAsset:(id)a0 completionHandler:(id /* block */)a1;

@end
