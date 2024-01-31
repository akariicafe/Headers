@class NSCache, NSMutableDictionary, NSOperationQueue, PXMediaProviderImageCacher, PUWallpaperShuffleResourceManager;

@interface PUWallpaperShuffleMediaProvider : PXMediaProvider {
    _Atomic int _requestIDCounter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _operationsByIDLock;
}

@property (readonly, nonatomic) PUWallpaperShuffleResourceManager *resourceManager;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSMutableDictionary *operationsByRequestID;
@property (readonly, nonatomic) PXMediaProviderImageCacher *imageCacher;
@property (readonly, nonatomic) NSCache *memoryCache;

- (void)cancelImageRequest:(long long)a0;
- (void).cxx_destruct;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (id)thumbnailDataForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 onlyFromCache:(BOOL)a2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a3;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (long long)_nextRequestID;
- (long long)requestCGImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)_handleOperationCompletedWithID:(long long)a0;
- (id)initWithResourceManager:(id)a0;

@end
