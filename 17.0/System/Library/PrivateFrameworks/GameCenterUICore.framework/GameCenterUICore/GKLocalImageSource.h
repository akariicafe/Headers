@class NSMapTable;

@interface GKLocalImageSource : GKImageSource

@property (retain, nonatomic) NSMapTable *keysForSizes;

- (void).cxx_destruct;
- (void)cacheImageUsingGamed:(id)a0 cacheSubdirectory:(id)a1 withHandler:(id /* block */)a2;
- (void)cachedImageFromGamedWithSubdirectory:(id)a0 handler:(id /* block */)a1;
- (void)deleteImageUsingGamedWithSubdirectory:(id)a0 withHandler:(id /* block */)a1;
- (id)imageForImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)keyForImageSize:(struct CGSize { double x0; double x1; })a0;

@end
