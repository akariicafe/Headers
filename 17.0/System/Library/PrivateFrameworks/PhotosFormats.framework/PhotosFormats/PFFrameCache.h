@class NSMutableIndexSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PFFrameCache : NSObject {
    struct CGImageSource { } *_gifSource;
    unsigned long long _frameCount;
    unsigned long long _fullCachingCost;
    NSObject<OS_dispatch_queue> *_frameGenerationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    unsigned long long _frameCacheSize;
    NSMutableDictionary *_frameCache;
    unsigned long long _lastRequestedIdx;
    NSMutableIndexSet *_cachedIndexes;
    struct { BOOL cacheSize; BOOL frameCache; } _isValid;
}

@property (nonatomic) long long cacheStrategy;

+ (id)sharedFrameGenerationQueue;

- (void)dealloc;
- (void)_invalidateCache;
- (void)_updateIfNeeded;
- (void).cxx_destruct;
- (struct CGImage { } *)_createPredrawnImage:(struct CGImage { } *)a0;
- (struct CGImage { } *)_frameAtIndex:(unsigned long long)a0 allowLazy:(BOOL)a1;
- (void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned long long)a0;
- (void)_frameGenerationQueue_updateFrameCache;
- (void)_invalidateCacheSize;
- (void)_updateDesiredCacheSize;
- (void)_updateFrameCache;
- (struct CGImage { } *)frameAtIndex:(unsigned long long)a0;
- (struct CGImage { } *)frameAtIndexIfReady:(unsigned long long)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 cachingStrategy:(long long)a1;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 cachingStrategy:(long long)a1 useGlobalDecodeQueue:(BOOL)a2;

@end
