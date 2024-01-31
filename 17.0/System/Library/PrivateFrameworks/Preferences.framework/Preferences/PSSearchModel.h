@class NSString, PSSearchResults, NSOperationQueue, NSObject, NSMutableSet, NSMutableArray, NSMapTable, PSSearchOperation;
@protocol OS_dispatch_queue, PSSearchModelDataSource;

@interface PSSearchModel : NSObject <PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver> {
    NSMutableSet *_delegates;
    NSMapTable *_specifierDataSources;
    NSMutableSet *_entriesBeingIndexed;
    NSMutableSet *_indexingEntriesWithLoadedDataSources;
    NSMutableSet *_removedEntriesStillIndexing;
    NSMutableArray *_deferredSpecifierUpdates;
    PSSearchResults *_currentResults;
    NSString *_queryForCurrentResults;
    NSMutableSet *_entriesPendingSearch;
    NSMutableSet *_removedEntriesStillSearching;
    NSObject<OS_dispatch_queue> *_searchStateAccessQueue;
    BOOL _hasLoadedRootEntries;
    BOOL _hasStartedIndexing;
    NSOperationQueue *_indexOperationQueue;
    NSOperationQueue *_searchOperationQueue;
}

@property (copy) NSString *currentQuery;
@property (retain) PSSearchOperation *activeSearchOperation;
@property (nonatomic) BOOL showSectionInDetailText;
@property (readonly, nonatomic) NSMutableArray *rootEntries;
@property (weak, nonatomic) id<PSSearchModelDataSource> dataSource;
@property (readonly) PSSearchResults *currentResults;
@property (readonly, nonatomic, getter=isLoadingResults) BOOL loadingResults;
@property (readonly, nonatomic, getter=isIndexing) BOOL indexing;
@property (readonly, nonatomic) BOOL hasCompletedIndexing;
@property (nonatomic) BOOL waitUntilFinished;
@property (readonly, nonatomic) long long observerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)recursiveDescription;
- (id)init;
- (void)dealloc;
- (void)preheat;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_rootSpecifiers;
- (void)searchForQuery:(id)a0;
- (void)_addSearchEntries:(id)a0 parent:(id)a1 usingBlock:(id /* block */)a2;
- (void)_addSpecifierDataSource:(id)a0 forSearchEntry:(id)a1;
- (void)_beginIndexingIfNecessary;
- (void)_beginSearchingEntriesForCurrentQuery:(id)a0 newSearch:(BOOL)a1;
- (void)_cancelAllSearchOperations;
- (id /* block */)_defaultSearchResultsSectionComparator;
- (void)_enumerateDelegatesUsingBlock:(id /* block */)a0;
- (void)_finishedIndexingEntry:(id)a0;
- (void)_loadChildrenForEntry:(id)a0;
- (void)_performDeferredUpdatesForEntry:(id)a0;
- (void)_performSpecifierUpdates:(id)a0 forSearchEntries:(id)a1;
- (void)_reloadSearchEntries:(id)a0;
- (void)_removeSearchEntries:(id)a0 usingBlock:(id /* block */)a1;
- (void)_removeSearchEntries:(id)a0 usingBlock:(id /* block */)a1 forReload:(BOOL)a2;
- (id)_searchEntriesForSpecifierDataSource:(id)a0;
- (void)_updateWithNewSearchResults:(id)a0 forQuery:(id)a1 newSearch:(BOOL)a2;
- (void)_updatedEntry:(id)a0 withChildren:(id)a1;
- (void)addRootSpecifier:(id)a0;
- (void)dataSource:(id)a0 performUpdates:(id)a1;
- (void)invalidateSpecifiersForDataSource:(id)a0;
- (void)reloadRootSpecifier:(id)a0;
- (void)removeRootSpecifier:(id)a0;
- (void)searchIndexOperation:(id)a0 didFindSpecifierDataSource:(id)a1;
- (void)searchIndexOperationDidCancel:(id)a0;
- (void)searchIndexOperationDidFinish:(id)a0 searchEntries:(id)a1;
- (void)searchOperation:(id)a0 configureSearchResults:(id)a1;
- (id)searchOperation:(id)a0 filteredEntriesForEntries:(id)a1;
- (void)searchOperationDidBegin:(id)a0;
- (void)searchOperationDidCancel:(id)a0;
- (void)searchOperationDidFinish:(id)a0 withResults:(id)a1;

@end
