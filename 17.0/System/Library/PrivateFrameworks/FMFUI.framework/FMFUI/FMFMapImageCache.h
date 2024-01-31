@class NSCache;

@interface FMFMapImageCache : NSObject

@property (retain, nonatomic) NSCache *_cache;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_keyForHandles:(id)a0;
- (id)_orientationKey;
- (id)_imageForMap:(id)a0;
- (void)cacheMap:(id)a0 forHandles:(id)a1;
- (id)cachedMapForHandles:(id)a0;

@end
