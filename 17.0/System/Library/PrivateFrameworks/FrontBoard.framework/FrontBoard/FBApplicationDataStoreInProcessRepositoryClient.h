@class NSCountedSet, NSString, NSMutableDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue, FBApplicationDataStoreRepository;

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject <FBSApplicationDataStoreRepositoryClient> {
    id<FBApplicationDataStoreRepository> _dataStore;
    NSCountedSet *_prefetchedKeys;
    NSMutableDictionary *_prefetchedKeyValues;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observersLock_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_prefetchQueue_updateNotificationListeners;
- (void)synchronizeWithCompletion:(id /* block */)a0;
- (id)availableDataStores;
- (id)_observers;
- (id)init;
- (void)removeAllObjectsForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)prefetchedObjectIfAvailableForKey:(id)a0 application:(id)a1 outObject:(id *)a2;
- (void)setObject:(id)a0 forKey:(id)a1 forApplication:(id)a2 withCompletion:(id /* block */)a3;
- (void)_updateCacheIfNecessaryWithObject:(id)a0 forKey:(id)a1 forApplication:(id)a2;
- (void)removeObserver:(id)a0;
- (id)migrateIdentifier:(id)a0 toIdentifier:(id)a1;
- (void)removePrefetchedKeys:(id)a0 withCompletion:(id /* block */)a1;
- (id)objectForKey:(id)a0 forApplication:(id)a1;
- (void)removeObjectForKey:(id)a0 forApplication:(id)a1 withCompletion:(id /* block */)a2;
- (void)objectForKey:(id)a0 forApplication:(id)a1 withResult:(id /* block */)a2;
- (void)invalidate;
- (void)_repositoryInvalidated:(id)a0;
- (id)_prefetchQueue_prefetchedKeysForApplication:(id)a0;
- (id)initWithDataStore:(id)a0;
- (void)_valueChanged:(id)a0;
- (void).cxx_destruct;
- (void)_updateNotificationListeners;
- (void)addPrefetchedKeys:(id)a0;
- (void)addObserver:(id)a0;
- (void)_invalidateCacheIfObjectIsNotEqual:(id)a0 forKey:(id)a1 forApplication:(id)a2;

@end
