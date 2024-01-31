@class NSMetadataQuery, NSString, NSData, NSPredicate, NSMutableDictionary, NSMutableSet, NSObject, BRWatchingConfiguration;
@protocol OS_dispatch_queue, BRItemCollectionGathererDelegate, NSObject;

@interface BRItemCollectionGatherer : NSObject <FPItemCollectionItemIDBasedDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemIDToItemCollectionMap;
    id<BRItemCollectionGathererDelegate> _delegate;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    BRWatchingConfiguration *_config;
    NSMutableSet *_watchedAppLibraryFPItemIDs;
    NSMutableSet *_waitingToBeGatheredCollections;
    NSMutableSet *_collectionsSet;
    NSMutableDictionary *_itemOwnersMap;
    BOOL _finishedInitialGathering;
    NSMutableSet *_boostedAppLibraries;
    NSMutableDictionary *_failureCountByItemID;
    NSData *_perAppAccountIdentifier;
    id<NSObject> _accountTokenDidChangeNotificationObserver;
    unsigned long long _appLibrariesLookupAttempts;
    BOOL _finishedLookingUpAppLibraries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)_boostAppLibraryOfItemIfNeeded:(id)a0;
- (unsigned long long)_itemID:(id)a0 wasDeletedByCollection:(id)a1;
- (void)_removeCollectionFromGatherSet:(id)a0;
- (void)_addItemCollectionOnItem:(id)a0;
- (BOOL)_buildCollectionOnItemIfPossible:(id)a0;
- (BOOL)_canWatchItem:(id)a0;
- (id)_getAppLibraryURLFromConfig:(id)a0;
- (void)_invalidateAndNotifyDelegate:(BOOL)a0;
- (BOOL)_isItemOwnedByAnyCollection:(id)a0;
- (unsigned long long)_itemID:(id)a0 becameOwnedByCollection:(id)a1;
- (void)_queueSignalDelegateIfNeededOnFinishGathering;
- (BOOL)_signalDelegateIfNeededOnFinishGathering;
- (void)_startObservingAccountTokenDidChangeNotification;
- (void)_startWatchingAppLibraries:(id)a0;
- (void)_startWatchingNewSubItem:(id)a0;
- (void)_startWatchingRootItemWithConfig:(id)a0;
- (void)_startWatchingURLs:(id)a0;
- (void)_stopObservingAccountTokenDidChangeNotification;
- (void)_stopWatchingItemIDRecusively:(id)a0 itemIDsInItem:(id)a1;
- (void)_unboostApplibrariesIfNeeded;
- (void)collection:(id)a0 didEncounterError:(id)a1;
- (void)collection:(id)a0 didUpdateItems:(id)a1 replaceItemsByFormerID:(id)a2 deleteItemsWithIDs:(id)a3;
- (void)collectionDidFinishGathering:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0 deleteItemsWithIDs:(id)a1;
- (id)initWithDelegate:(id)a0 query:(id)a1;
- (void)pauseWatchingWithCompletionBlock:(id /* block */)a0;
- (void)resumeWatching;
- (void)startWatchingRootItemWithScopes:(id)a0;
- (id)test_getQueue;

@end
