@class NSCountedSet, NSArray, NSDictionary, NSMutableDictionary;

@interface PXJoiningMediaProvider : PXMediaProvider

@property (readonly, nonatomic) NSDictionary *mediaProvidersByAssetClassName;
@property (readonly, nonatomic) NSArray *allMediaProviders;
@property (readonly, nonatomic) NSMutableDictionary *requestIDByCacheSpec;
@property (readonly, nonatomic) NSCountedSet *requestCountByCacheSpec;

- (id)init;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)cancelImageRequest:(long long)a0;
- (void).cxx_destruct;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (id)thumbnailDataForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 onlyFromCache:(BOOL)a2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; } *)a3;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (long long)_externalRequestIDForMediaProvider:(id)a0 mediaProviderRequestID:(long long)a1;
- (id)_mediaProviderForAsset:(id)a0;
- (id)initWithMediaProvidersByAssetClassName:(id)a0;
- (long long)requestCGImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;

@end
