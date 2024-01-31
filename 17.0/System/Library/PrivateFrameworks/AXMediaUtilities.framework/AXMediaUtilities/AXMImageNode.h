@interface AXMImageNode : AXMSourceNode

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void)produceImage:(id)a0;
- (void)triggerWithImage:(id)a0 options:(id)a1 cacheKey:(id)a2 resultHandler:(id /* block */)a3;
- (void)triggerWithImageAssetLocalIdentifier:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 cacheKey:(id)a3 resultHandler:(id /* block */)a4;
- (void)triggerWithImageAssetLocalIdentifier:(id)a0 photoLibraryURL:(id)a1 usePHAsset:(BOOL)a2 options:(id)a3 cacheKey:(id)a4 resultHandler:(id /* block */)a5;
- (void)triggerWithImageURL:(id)a0 assetLocalIdentifier:(id)a1 photoLibraryURL:(id)a2 options:(id)a3 cacheKey:(id)a4 resultHandler:(id /* block */)a5;
- (void)triggerWithImageURL:(id)a0 options:(id)a1 cacheKey:(id)a2 resultHandler:(id /* block */)a3;
- (void)triggerWithPixelBuffer:(struct __CVBuffer { } *)a0 exifOrientation:(unsigned int)a1 options:(id)a2 cacheKey:(id)a3 resultHandler:(id /* block */)a4;

@end
