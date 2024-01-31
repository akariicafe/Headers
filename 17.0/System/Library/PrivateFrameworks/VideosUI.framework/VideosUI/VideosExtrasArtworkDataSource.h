@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (id)init;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)supportedSizesForCatalog:(id)a0;
- (BOOL)wantsBackgroundImageDecompression;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
