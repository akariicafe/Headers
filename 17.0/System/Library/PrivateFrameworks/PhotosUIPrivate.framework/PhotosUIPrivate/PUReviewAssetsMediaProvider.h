@class PHConcurrentMapTable;

@interface PUReviewAssetsMediaProvider : PUEditableMediaProvider {
    _Atomic int _nextRequestIdentifier;
}

@property (readonly, nonatomic) double _screenScale;
@property (readonly, nonatomic) PHConcurrentMapTable *_mediaRequests;

- (id)init;
- (int)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)cancelImageRequest:(int)a0;
- (void).cxx_destruct;
- (int)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestAVAssetForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)_resizeImageAtURL:(id)a0 imageUTI:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 bakeInOrientation:(BOOL)a3 error:(id *)a4;
- (int)_incrementRequestIdentifier;
- (int)_requestAdjustmentDataForAsset:(id)a0 resultHandler:(id /* block */)a1;
- (int)requestAsynchronousVideoURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;

@end
