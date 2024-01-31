@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MPMediaLibraryDataProviderPrivate;

@interface MPMediaEntityCache : NSObject {
    id<MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
    BOOL _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _rwlock;
    NSObject<OS_dispatch_queue> *_deallocLaterQueue;
    struct __CFDictionary { } *_concreteEntitiesByDataProviderEntityClass;
    NSMutableArray *_entityTemporaryReferences;
}

- (id)itemWithIdentifier:(long long)a0;
- (id)_entityWithIdentifier:(long long)a0 mediaEntityType:(long long)a1 collectionGroupingType:(long long)a2 loadEntityBlock:(id /* block */)a3;
- (void)removeEntityWithIdentifier:(long long)a0 dataProviderEntityClass:(Class)a1;
- (id)initWithMediaLibraryDataProvider:(id)a0;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (void)_performWithSharedAccessForDataProviderEntityClass:(Class)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)collectionWithIdentifier:(long long)a0 grouping:(long long)a1 loadEntityBlock:(id /* block */)a2;
- (void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)a0 block:(id /* block */)a1;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)a0 dataProviderEntityClass:(Class)a1 deleted:(BOOL)a2;
- (void *)_entityMapForDataProviderEntityClass:(Class)a0;
- (id)itemWithIdentifier:(long long)a0 loadEntityBlock:(id /* block */)a1;

@end
