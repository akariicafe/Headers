@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_removeAllEntries;
- (void)tearDown;
- (double)nextRefreshTimeStamp;
- (long long)numberOfEntriesOnDisk;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (void).cxx_destruct;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (id)loadValueForKey:(id)a0;
- (id)loadEntryForRowId:(long long)a0;
- (id)descriptionOfAllEntries;
- (void)removeKey:(id)a0 value:(id)a1;

@end
