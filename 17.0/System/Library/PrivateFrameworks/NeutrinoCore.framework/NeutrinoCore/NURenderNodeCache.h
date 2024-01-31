@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (unsigned long long)unhitCacheEntriesCount;
- (void)_mediaServicesWereReset:(id)a0;
- (id)retrieveAndCacheNode:(id)a0;
- (void)addNode:(id)a0;
- (id)description;
- (id)cachedNodeForNode:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_addNode:(id)a0;

@end
