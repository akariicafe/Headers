@class PXUIMediaProvider;

@interface PXSimulatedUIMediaProvider : NSObject

@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;

+ (id)defaultMediaProviderWithMediaProvider:(id)a0;

- (id)init;
- (long long)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (long long)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (long long)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (id)_simulatedMediaRequestWithOriginalOptions:(id)a0 simulatedResultHandler:(id /* block */)a1;
- (id)initWithMediaProvider:(id)a0;

@end
