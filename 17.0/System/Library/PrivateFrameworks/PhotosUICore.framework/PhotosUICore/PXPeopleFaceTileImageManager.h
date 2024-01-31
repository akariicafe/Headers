@class NSString, NSMapTable, PXLRUMemoryCache, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_queue> *_requestLookupIsolationQueue;
    NSObject<OS_dispatch_queue> *_cropCacheQueue;
    NSMapTable *_faceTileRequestByRequestID;
    NSMapTable *_highPriorityCachedIdentifiers;
    NSObject<OS_dispatch_queue> *_highPriorityCachedIdentifiersQueue;
}

@property (class, readonly) PXPeopleFaceTileImageManager *sharedManager;

@property (readonly, nonatomic) PXLRUMemoryCache *memoryCache;
@property (retain, nonatomic) id<NSObject> memoryWarningObserver;
@property (retain, nonatomic) id<NSObject> backgroundEntraceObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageTransformQueue;

- (id)init;
- (void)dealloc;
- (void)_stopListeningForChanges;
- (void)cancelRequest:(int)a0;
- (void).cxx_destruct;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)_addRequestResult:(id)a0 forIdentifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundedCropRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withTargetAspectRatio:(double)a2;
- (id)_cachedResultForIdentifier:(id)a0 params:(struct PXFaceTileImageParams { struct CGSize { double x0; double x1; } x0; unsigned long long x1; unsigned long long x2; BOOL x3; })a1 isLowResResult:(BOOL *)a2;
- (void)_cropImage:(id)a0 synchronous:(BOOL)a1 cacheResult:(BOOL)a2 isDegraded:(BOOL)a3 forRequest:(id)a4 cropInfo:(struct { BOOL x0; struct CGPoint { double x0; double x1; } x1; })a5 didCallFastBlock:(BOOL)a6 completionBlock:(id /* block */)a7;
- (BOOL)_deliverCachedResultIfPossibleForRequest:(id)a0 allowDegradedDelivery:(BOOL)a1 completionBlock:(id /* block */)a2;
- (BOOL)_doesChange:(id)a0 containVisibleChangesToPHAssetWithOID:(id)a1;
- (id)_fetchAssetFromFace:(id)a0;
- (id)_fetchKeyFaceFromPerson:(id)a0 error:(id *)a1;
- (void)_handleMemoryClearRequest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedAspectCropRectForFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aspectRatio:(double)a1 inImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (int)_requestFaceTileImageFromRequest:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 cacheResult:(BOOL)a4 boundFaceRect:(BOOL)a5 completionBlock:(id /* block */)a6 fastDisplayBlock:(id /* block */)a7;
- (void)_requestFaceTileImageRequest:(id)a0 faceImageRequest:(id)a1 cacheResult:(BOOL)a2 completionBlock:(id /* block */)a3 fastDisplayBlock:(id /* block */)a4;
- (void)_startListeningForChanges;
- (void)addHighPriorityCachedItemIdentifier:(id)a0 forOwner:(id)a1;
- (void)clearMemoryCache;
- (void)invalidateCacheForPerson:(id)a0;
- (BOOL)isActiveRequestWithRequestID:(int)a0;
- (void)removeHighPriorityCachedItemIdentifier:(id)a0 forOwner:(id)a1;
- (int)requestFaceTileImageFromFace:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 cacheResult:(BOOL)a4 boundFaceRect:(BOOL)a5 completionBlock:(id /* block */)a6 fastDisplayBlock:(id /* block */)a7;
- (int)requestFaceTileImageFromFace:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 cacheResult:(BOOL)a4 completionBlock:(id /* block */)a5;
- (int)requestFaceTileImageFromFace:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 cacheResult:(BOOL)a4 completionBlock:(id /* block */)a5 fastDisplayBlock:(id /* block */)a6;
- (int)requestFaceTileImageFromFace:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (int)requestFaceTileImageFromPerson:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 cacheResult:(BOOL)a4 boundFaceRect:(BOOL)a5 completionBlock:(id /* block */)a6;
- (int)requestFaceTileImageFromPerson:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 cacheResult:(BOOL)a4 completionBlock:(id /* block */)a5;
- (int)requestFaceTileImageFromPerson:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (int)requestFaceTileImageFromRequest:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1 cropFactor:(unsigned long long)a2 style:(unsigned long long)a3 completionBlock:(id /* block */)a4 fastDisplayBlock:(id /* block */)a5;

@end
