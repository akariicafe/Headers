@class NSObject, NSString, NSMapTable, NSHashTable, NSMutableDictionary, NSURL, NSMutableSet;
@protocol TabSnapshotCacheDelegate, OS_dispatch_queue;

@interface TabSnapshotCache : NSObject <TabSnapshotCacheEntryStateObserving> {
    NSMapTable *_delegateToContextMap;
    NSHashTable *_snapshotCacheObservers;
    unsigned long long _currentlyRequestedSnapshotCount;
    NSMutableDictionary *_snapshots;
    BOOL _updating;
    NSURL *_thumbnailCacheDirectoryURL;
    NSMutableDictionary *_groupIdentifiers;
    NSMutableSet *_identifiersPendingUpdate;
    NSObject<OS_dispatch_queue> *_fileSystemAccessQueue;
    BOOL _needsRequestNextSnapshot;
}

@property (readonly, nonatomic, getter=isFinishedUpdating) BOOL finishedUpdating;
@property (weak, nonatomic) id<TabSnapshotCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)supportsASTC;
+ (id)defaultSnapshotCache;
+ (void)removeSavedSnapshotsKeepingSnapshotsWithIdentifiers:(id)a0;

- (id)init;
- (id)initWithThumbnailCacheDirectoryURL:(id)a0;
- (void)_calculateFitsInCache;
- (void)removeIdentifier:(id)a0 fromGroupWithIdentifier:(id)a1;
- (void)_saveSnapshotForIdentifier:(id)a0;
- (void)requestNextSnapshotIfNecessary;
- (void)setCapacity:(unsigned long long)a0 forDelegate:(id)a1;
- (void)setIdentifiersToCache:(id)a0 forDelegate:(id)a1;
- (id)_readSnapshotImageForIdentifier:(id)a0;
- (id)_preferredURLForSnapshotWithIdentifier:(id)a0;
- (void)invalidateSnapshotWithIdentifier:(id)a0;
- (void)_enumerateDelegatesAndIdentifiersForEntry:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)isIdentifier:(id)a0 memberOfSameGroupAsIdentifier:(id)a1;
- (void)_enumeratePossibleURLsForSnapshotWithIdentifier:(id)a0 withBlock:(id /* block */)a1;
- (void)_determineInitialStateForIdentifier:(id)a0;
- (id)identifiersToCacheForDelegate:(id)a0;
- (id)_writeSnapshotImage:(struct CGImage { } *)a0 withIdentifier:(id)a1;
- (void)addIdentifier:(id)a0 toGroupWithIdentifier:(id)a1;
- (void)_beginUpdatingStateForIdentifier:(id)a0;
- (id)_existingURLForSnapshotWithIdentifier:(id)a0 effectsVersion:(long long *)a1;
- (void)performBatchUpdatesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_requestSavedSnapshotForIdentifier:(id)a0;
- (id)_URLForSnapshotWithIdentifier:(id)a0 isKTX:(BOOL)a1 effectsVersion:(long long)a2;
- (void)setUpdating:(BOOL)a0 forDelegate:(id)a1;
- (void)_requestNextSnapshotIfNecessaryForDelegate:(id)a0;
- (void)_finishUpdatingToState:(long long)a0 forEntry:(id)a1;
- (id)_entryForIdentifier:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_finishUpdatingToState:(long long)a0 cachedSnapshot:(id)a1 forEntry:(id)a2;
- (void)addSnapshotCacheObserver:(id)a0;
- (id)snapshotWithIdentifier:(id)a0;
- (void)removeSnapshotCacheObserver:(id)a0;
- (void)_sendDidFinishUpdatingToDelegateIfNeeded;
- (BOOL)hasValidSnapshotWithIdentifier:(id)a0;
- (id)_entryForIdentifier:(id)a0;
- (void)tabSnapshotCacheEntryDidUpdateState:(id)a0;
- (id)_allIdentifiersToCache;
- (void)removeSnapshotWithIdentifier:(id)a0;
- (id)_contextForDelegate:(id)a0;

@end
