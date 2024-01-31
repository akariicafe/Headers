@class PHCachingImageManager, PHImageManager, NSArray, PHAssetResourceQualityClass, PHPhotoLibrary, NSMutableArray, NSObject, PXPhotoKitThumbnailCache;
@protocol OS_dispatch_queue;

@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider {
    NSArray *_thumbnailQualityClasses;
    NSArray *_thumbnailCaches;
    struct CGSize { double width; double height; } _masterThumbnailSize;
    _Atomic long long _lastActivity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _preheatlock;
    NSMutableArray *_preheatLock_preheatStates;
    NSObject<OS_dispatch_queue> *_preheatQueue;
    unsigned long long _preheatQueue_state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGSize { double width; double height; } _lock_lastTargetSize;
    long long _lock_lastQualityClassIndex;
    PHAssetResourceQualityClass *_lock_lastResourceQualityClass;
    PXPhotoKitThumbnailCache *_lock_lastThumbnailCache;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHImageManager *imageManager;
@property (readonly, nonatomic) PHCachingImageManager *cachingImageManager;

+ (id)_defaultLoadingStatusManager;
+ (id)mediaProviderWithLibrary:(id)a0;
+ (id)_defaultImageManager;

- (void)_noteActivity;
- (id)init;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (long long)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)_schedulePreheat;
- (void)_getQualityClass:(id *)a0 cache:(id *)a1 qualityClassIndex:(long long *)a2 forTargetSize:(struct CGSize { double x0; double x1; })a3;
- (id)_thumbnailDataForAsset:(id)a0 qualityClass:(id)a1 cache:(id)a2 onlyFromCache:(BOOL)a3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a4;
- (long long)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)cancelImageRequest:(long long)a0;
- (void)_preheatQueue_scheduleUpdateAfterDelay;
- (id)initWithImageManager:(id)a0 library:(id)a1;
- (long long)requestURLForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)stopCachingImagesForAllAssets;
- (void)preheatThumbnailDataForAssets:(id)a0 origin:(long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })masterThumbnailSize;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (id)thumbnailDataForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 onlyFromCache:(BOOL)a2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a3;
- (id)_preheatInfoForQualityClassIndex:(long long)a0;
- (void)_preheatQueue_schedulePreheat;
- (void)_setPreheatInfo:(id)a0 forQualityClassIndex:(long long)a1;
- (id)initWithImageManager:(id)a0;
- (long long)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)_preheatQueue_update;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;

@end
