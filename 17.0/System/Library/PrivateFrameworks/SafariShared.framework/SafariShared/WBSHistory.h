@class NSCountedSet, NSString, NSArray, NSMutableDictionary, WBSHistoryTagMap, NSObject, WBSHistoryActivityThrottler;
@protocol OS_dispatch_queue, WBSHistoryStore;

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate, WBSHistoricalHighLevelDomainsProvider> {
    NSObject<OS_dispatch_queue> *_entriesByURLStringAccessQueue;
    NSMutableDictionary *_entriesByURLString;
    NSCountedSet *_stringsForUserTypedDomainExpansion;
    BOOL _hasStartedLoadingHistory;
    NSObject<OS_dispatch_queue> *_waitUntilHistoryHasLoadedQueue;
    id<WBSHistoryStore> _historyStore;
    WBSHistoryActivityThrottler *_entryCreationThrottler;
}

@property (readonly, nonatomic) NSString *databaseID;
@property (readonly, nonatomic) NSString *profileLocalIdentifier;
@property (readonly) NSArray *allItems;
@property (readonly, nonatomic) BOOL hasAnyHistoryItems;
@property (readonly, nonatomic) unsigned long long numberOfHistoryItems;
@property (readonly, nonatomic) unsigned long long numberOfHistoryItemsOnHistoryQueue;
@property (nonatomic) double historyAgeLimit;
@property (readonly, nonatomic) WBSHistoryTagMap *historyTagMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearExistingSharedHistory;
+ (id)existingSharedHistory;
+ (id)historyDatabaseWriteAheadLogURL;
+ (id)defaultHistoryDatabaseDirectoryURL;
+ (id)historyDatabaseURL;
+ (id)historyPropertyListURL;
+ (id)profileDirectoryURLForProfileID:(id)a0;

- (void)performMaintenance;
- (void)vacuumHistoryWithCompletionHandler:(id /* block */)a0;
- (void)close;
- (void)_removeAllVisitedLinks;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (void)clearHistoryWithCompletionHandler:(id /* block */)a0;
- (void)computeFrequentlyVisitedSites:(unsigned long long)a0 minimalVisitCountScore:(unsigned long long)a1 blockList:(id)a2 allowList:(id)a3 options:(unsigned long long)a4 currentTime:(double)a5 completionHandler:(id /* block */)a6;
- (void)_addVisitedLinkForItemIfNeeded:(id)a0 withVisitOrigin:(long long)a1;
- (void)fetchTopicsFromStartDate:(id)a0 toEndDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchTopicsFromStartDate:(id)a0 toEndDate:(id)a1 limit:(unsigned long long)a2 minimumItemCount:(unsigned long long)a3 sortOrder:(long long)a4 completionHandler:(id /* block */)a5;
- (void)checkIfLocalVisitExistsInAnyOfItems:(id)a0 withCompletion:(id /* block */)a1;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTitle:(id)a0 ofTag:(id)a1 completionHandler:(id /* block */)a2;
- (void)searchForUserTypedString:(id)a0 options:(unsigned long long)a1 currentTime:(double)a2 enumerationBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)getVisitsCreatedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearHistory;
- (void).cxx_destruct;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)a0 beforeDate:(id)a1 onlyFromThisDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (Class)_historyItemClass;
- (void)getItemCountBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)releaseCloudHistory:(id /* block */)a0;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)performMaintenance:(id /* block */)a0;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDatabaseID:(id)a0;
- (void)performBlockAfterHistoryHasLoaded:(id /* block */)a0;
- (void)_dispatchHistoryItemWillChange:(id)a0;
- (void)_unload;
- (void)addTagWithIdentifier:(id)a0 title:(id)a1 toItemAtURL:(id)a2 level:(long long)a3 completionHandler:(id /* block */)a4;
- (void)_addItem:(id)a0 addToStringsForUserTypedDomainExpansions:(BOOL)a1;
- (void)_addItemToStringsForUserTypedDomainExpansion:(id)a0;
- (id)_createHistoryStore;
- (void)_createHistoryStoreIfNeeded;
- (void)_dispatchHistoryCleared:(id)a0;
- (void)_dispatchHistoryItemAdded:(id)a0 withVisitOrigin:(long long)a1;
- (void)_dispatchHistoryItemDidChange:(id)a0 byUserInitiatedAction:(BOOL)a1;
- (void)_dispatchHistoryItemsLoaded:(id)a0;
- (void)_dispatchHistoryItemsRemoved:(id)a0;
- (void)_dispatchHistoryLoaded;
- (void)_dispatchHistoryVisitAdded:(id)a0;
- (BOOL)_isStringForUserTypedDomainExpansionInHistory:(id)a0;
- (void)_loadHistory;
- (void)_loadHistoryWithCompletionHandler:(id /* block */)a0;
- (void)_removeHistoryItemsInResponseToUserAction:(id)a0;
- (id)_removeItemForURLString:(id)a0;
- (void)_removeItemFromStringsForUserTypedDomainExpansion:(id)a0;
- (void)_removeItemsInResponseToUserAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendNotification:(id)a0 withItems:(id)a1;
- (void)_setAttributes:(unsigned long long)a0 forVisit:(id)a1;
- (void)_waitUntilHistoryHasLoadedMainThread;
- (void)addAttributes:(unsigned long long)a0 toVisit:(id)a1;
- (void)addAutocompleteTrigger:(id)a0 forURLString:(id)a1;
- (BOOL)canRecordRedirectFromVisit:(id)a0 to:(id)a1;
- (void)enumerateItemsAsynchronouslyUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)fetchHistoricalHighLevelDomainsWithCompletionHandler:(id /* block */)a0;
- (void)getAutocompleteTriggersForURLString:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasItemSince:(id)a0;
- (void)historyLoader:(id)a0 didLoadItems:(id)a1 stringsForUserTypeDomainExpansion:(id)a2;
- (void)historyLoaderDidFinishLoading:(id)a0;
- (void)historyStore:(id)a0 didAddVisits:(id)a1;
- (void)historyStore:(id)a0 didPrepareToDeleteWithDeletionPlan:(id)a1;
- (void)historyStore:(id)a0 didRemoveHighLevelDomains:(id)a1;
- (void)historyStore:(id)a0 didRemoveHostnames:(id)a1;
- (void)historyStore:(id)a0 didRemoveItems:(id)a1;
- (void)historyStore:(id)a0 didRemoveVisits:(id)a1;
- (id)historyStore:(id)a0 itemForURLString:(id)a1 createIfNeeded:(BOOL)a2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)a0;
- (void)historyStoreWasCleared:(id)a0;
- (id)itemForURL:(id)a0;
- (id)itemForURLString:(id)a0;
- (id)itemForURLString:(id)a0 createIfNeeded:(BOOL)a1;
- (id)itemRedirectedFrom:(id)a0 to:(id)a1 origin:(long long)a2 date:(id)a3;
- (id)itemRedirectedFrom:(id)a0 to:(id)a1 origin:(long long)a2 date:(id)a3 statusCode:(long long)a4;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 timeOfVisit:(double)a2 wasHTTPNonGet:(BOOL)a3 wasFailure:(BOOL)a4 increaseVisitCount:(BOOL)a5 origin:(long long)a6;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 timeOfVisit:(double)a2 wasHTTPNonGet:(BOOL)a3 wasFailure:(BOOL)a4 increaseVisitCount:(BOOL)a5 origin:(long long)a6 attributes:(unsigned long long)a7;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 timeOfVisit:(double)a2 wasHTTPNonGet:(BOOL)a3 wasFailure:(BOOL)a4 increaseVisitCount:(BOOL)a5 statusCode:(long long)a6 origin:(long long)a7;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 timeOfVisit:(double)a2 wasHTTPNonGet:(BOOL)a3 wasFailure:(BOOL)a4 increaseVisitCount:(BOOL)a5 statusCode:(long long)a6 origin:(long long)a7 attributes:(unsigned long long)a8;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 wasHTTPNonGet:(BOOL)a2 wasFailure:(BOOL)a3 increaseVisitCount:(BOOL)a4;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 wasHTTPNonGet:(BOOL)a2 wasFailure:(BOOL)a3 increaseVisitCount:(BOOL)a4 statusCode:(long long)a5;
- (id)lastVisitForHighLevelDomain:(id)a0;
- (void)loadHistoryAsynchronouslyIfNeeded;
- (void)removeItemsInResponseToUserAction:(id)a0;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(id /* block */)a0;
- (void)updateTitle:(id)a0 forVisit:(id)a1;
- (void)waitUntilHistoryHasLoaded;

@end
