@class PUBrowsingViewModel, PUMediaProvider;

@interface PUToggleCTMMediaProvider : PUEditableMediaProvider

@property (readonly, nonatomic) PUBrowsingViewModel *viewModel;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;

- (int)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)cancelImageRequest:(int)a0;
- (void).cxx_destruct;
- (int)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)_requestOptions;
- (int)requestAVAssetForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)_ctmImageResourceForAsset:(id)a0;
- (id)_ctmPairedVideoResourceForAsset:(id)a0;
- (id)_ctmVideoResourceForAsset:(id)a0;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 string:(id)a1;
- (id)_resourceOfType:(long long)a0 forAsset:(id)a1;
- (BOOL)_shouldToggleCTMForAsset:(id)a0;
- (id)initWithViewModel:(id)a0 mediaProvider:(id)a1;
- (int)requestAsynchronousVideoURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;

@end
