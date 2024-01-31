@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface NTKSiderealCache : NSObject {
    NSCache *_dataCache;
    NSObject<OS_dispatch_queue> *_readerWriterQueue;
    NSCache *_aplCache;
}

+ (id)sharedCache;

- (id)_init;
- (void).cxx_destruct;
- (void)purgeCachedKey:(id)a0;
- (void)_purgeEverything;
- (float)aplForDate:(id)a0 generationBlock:(id /* block */)a1;
- (id)imageDataForKey:(id)a0 generationBlock:(id /* block */)a1;
- (void)purgeAPLCache;

@end
