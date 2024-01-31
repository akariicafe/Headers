@class NSMapTable, NSMutableIndexSet, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface PXStoryColorNormalizationCubeLibrary : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableIndexSet *_lock_activeRequests;
    NSCache *_lock_cubeByAssetNormalization;
    NSMapTable *_lock_aliveCubesByAssetNormalization;
    long long _cubeEdgeSize;
    struct CGColorSpace { } *_colorspace;
}

@property (class, readonly, nonatomic) PXStoryColorNormalizationCubeLibrary *sharedInstance;

- (id)init;
- (void)dealloc;
- (void)cancelRequest:(long long)a0;
- (void).cxx_destruct;
- (id)initWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)_cacheColorCube:(id)a0 forAssetNormalization:(id)a1;
- (BOOL)_isRequestActive:(long long)a0;
- (void)_queue_performRequestWithID:(long long)a0 forAssetNormalization:(id)a1 completionHandler:(id /* block */)a2;
- (long long)requestColorCubeForAssetNormalization:(id)a0 completionHandler:(id /* block */)a1;

@end
