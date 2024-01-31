@class PXUpdater, NSDictionary, NSSet, PXAssetsDataSourceManager, PXAssetsDataSource, NSString;
@protocol NSCopying;

@interface PXSwitchableAssetsDataSourceManager : PXAssetsDataSourceManager <PXAssetsDataSourceManagerObserver>

@property (readonly, nonatomic) NSDictionary *dataSourceManagerByKey;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSSet *allKeys;
@property (retain, nonatomic) id<NSCopying> currentDataSourceKey;
@property (retain, nonatomic) PXAssetsDataSource *currentDataSource;
@property (copy, nonatomic) id<NSCopying> currentKey;
@property (readonly, nonatomic) PXAssetsDataSourceManager *currentDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)a0;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)stopExcludingAssets:(id)a0;
- (id)init;
- (void)startBackgroundFetchIfNeeded;
- (id)sharedLibraryStatusProvider;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (void)stopForceIncludingAllAssets;
- (void)setFilterPredicate:(id)a0;
- (void)didPerformChanges;
- (void)refreshResultsForAssetCollection:(id)a0;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (id)filterPredicate;
- (BOOL)isBackgroundFetching;
- (BOOL)supportsCurationToggling;
- (void)_updateCurrentDataSource;
- (id)localizedLoadingInitialDataSourceMessage;
- (void)_setNeedsUpdate;
- (BOOL)supportsFiltering;
- (id)createInitialDataSource;
- (id)localizedEmptyPlaceholderTitle;
- (id)createDataSourceManagerForAssetsInSectionOfAsset:(id)a0;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void).cxx_destruct;
- (long long)backgroundFetchOriginSection;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (id)localizedEmptyPlaceholderAttributedMessage;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)setCurationEnabledForAllCollections:(BOOL)a0 collectionsToDiff:(id)a1;
- (id)sortDescriptors;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)_invalidateCurrentDataSource;
- (BOOL)isLoadingInitialDataSource;
- (void)assetsDataSourceManagerDidFinishLoadingInitialDataSource:(id)a0;
- (id)createDataSourceManagerForAsset:(id)a0;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (void)setBackgroundFetchOriginSection:(long long)a0;
- (void)setSortDescriptors:(id)a0;
- (void)ensureStartingSectionHasContent;
- (void)_enumerateAllDataSourceManagers:(id /* block */)a0;
- (id)dataSourceManagerForKey:(id)a0;
- (void)ensureLastSectionHasContent;
- (id)initWithDataSourceManagerByKey:(id)a0 currentKey:(id)a1;
- (void)waitForAvailabilityOfAsset:(id)a0 completionHandler:(id /* block */)a1;

@end
