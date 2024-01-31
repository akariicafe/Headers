@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, PUTransientImageManager;

@interface PUCameraTransientAssetsMediaProvider : PUMediaProvider {
    _Atomic int _latestRequestId;
    NSObject<OS_dispatch_queue> *_videoFrameGeneratorQueue;
}

@property (readonly, nonatomic) id<PUTransientImageManager> _transientImageManager;
@property (readonly, nonatomic) NSMutableDictionary *_livePhotoRequestsByRequestID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_livePhotoRequestQueue;
@property (copy, nonatomic) id /* block */ supplementaryLivePhotoImageSource;

- (id)init;
- (int)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)cancelImageRequest:(int)a0;
- (void).cxx_destruct;
- (int)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)requestAVAssetForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)_handleDelegateImageRequestResultWithImage:(id)a0 info:(id)a1 requestID:(int)a2;
- (void)_handleLivePhotoPairedVideoRequestResultURL:(id)a0 filterName:(id)a1 stillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id)a3 requestID:(int)a4;
- (id)_livePhotoRequestWithID:(int)a0;
- (int)_nextRequestId;
- (id)_playerItemForVideoURL:(id)a0;
- (void)_removeLivePhotoRequestWithID:(int)a0;
- (void)_requestAVAssetForVideoURL:(id)a0 resultHandler:(id /* block */)a1;
- (int)_requestLivePhotoForTransientAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (BOOL)_requestLivePhotoWithSupplementaryImageSourceIfPossibleWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)_setLivePhotoRequest:(id)a0 forRequestID:(int)a1;
- (void)_updateResultForLivePhotoRequestID:(int)a0;
- (id)_videoCompositionForAVAsset:(id)a0 filterName:(id)a1;
- (id)initWithTransientImageManager:(id)a0 supplementaryLivePhotoImageSource:(id /* block */)a1;

@end
