@class PHCachingImageManager, PXSearchActiveSearch, NSTimer, NSDictionary, NSString, PXSearchResultsSectionedDataSource, PSIDatabase;
@protocol PXSearchResultsSectionedDataSourceChangeObserver;

@interface PXSearchResultsSectionedDataSourceManager : NSObject <PXSearchResultsSectionedDataSourceChangeObserver>

@property (retain, nonatomic) PHCachingImageManager *cachingImageManager;
@property (retain, nonatomic) PSIDatabase *psiSearchIndex;
@property (retain, nonatomic) NSTimer *searchIndexStatusTimer;
@property (retain, nonatomic) PXSearchResultsSectionedDataSource *searchResultsDataSource;
@property (nonatomic) BOOL isIndexingPaused;
@property (nonatomic) unsigned long long itemsRemainingCount;
@property (retain, nonatomic) PXSearchActiveSearch *activeSearch;
@property (readonly, nonatomic) BOOL resultsReady;
@property (readonly) NSDictionary *debugDictionary;
@property (weak, nonatomic) id<PXSearchResultsSectionedDataSourceChangeObserver> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopMonitoringSearchIndexStatus;
- (id)initWithSearchSectionedDataSource:(id)a0;
- (void)mergePendingChanges;
- (void)prepareDataSourceWithCompletion:(id /* block */)a0;
- (BOOL)queryHasChanged:(id)a0 maxSuggestionCount:(long long)a1;
- (void)searchResultsDataSource:(id)a0 didChangeThumbnailAssetsForSearchResult:(id)a1 atIndexes:(id)a2;
- (void)searchResultsDataSource:(id)a0 didChangeThumbnailAssetsForSearchResult:(id)a1 topAssetsSectionExists:(BOOL)a2;
- (void)searchResultsDataSource:(id)a0 didFetchAssetsForSearchResult:(id)a1 indexPath:(id)a2;
- (void)searchResultsDataSourceHasPendingChanges:(id)a0 shouldMergePendingChanges:(BOOL)a1;
- (void)startMonitoringSearchIndexStatusWithCompletion:(id /* block */)a0;

@end
