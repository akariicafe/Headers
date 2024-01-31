@class NSCountedSet, NSMutableDictionary, PXMediaProvider;

@interface PXMediaProviderImageCacher : NSObject

@property (readonly, nonatomic) NSMutableDictionary *requestIDByCacheSpec;
@property (readonly, nonatomic) NSCountedSet *requestCountByCacheSpec;
@property (weak, nonatomic) PXMediaProvider *mediaProvider;

- (void).cxx_destruct;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (id)initWithMediaProvider:(id)a0;

@end
