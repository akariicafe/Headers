@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MPMediaLibraryDataProvider;

@interface MPConcreteMediaEntityPropertiesCache : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_valuePersistenceBlocks;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<MPMediaLibraryDataProvider> dataProvider;
@property (readonly, nonatomic) Class dataProviderEntityClass;
@property (readonly, nonatomic) long long identifier;

- (void)delete;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithLibraryDataProvider:(id)a0 dataProviderEntityClass:(Class)a1 identifier:(long long)a2;
- (void)_cacheValues:(id)a0 persistValueInBackgroundBlock:(id /* block */)a1;
- (void)cachePropertyValues:(id)a0 forProperties:(id)a1 persistValueInBackgroundBlock:(id /* block */)a2;
- (void)cacheValue:(id)a0 forProperty:(id)a1 persistValueInBackgroundBlock:(id /* block */)a2;
- (id)valueForProperty:(id)a0 isCached:(BOOL *)a1;

@end
