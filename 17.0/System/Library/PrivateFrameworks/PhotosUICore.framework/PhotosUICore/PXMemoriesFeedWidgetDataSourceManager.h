@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase

@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) BOOL onlyFavorites;

- (id)fetchOptions;
- (unsigned long long)_extendedMaxCount;
- (id)_generateEntryFromMemories:(id)a0;
- (void)_regenerateMemoriesWithChange:(id)a0;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleChangedKeyAssetsForMemories:(id)a0;
- (void)handleIncrementalFetchResultChange:(id)a0 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)a1;
- (void)handleNonIncrementalFetchResultChange:(id)a0;
- (void)startGeneratingMemories;

@end
