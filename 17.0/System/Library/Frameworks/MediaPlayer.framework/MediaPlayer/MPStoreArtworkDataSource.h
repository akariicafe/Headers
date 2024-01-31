@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource

@property (class, readonly, nonatomic) MPStoreArtworkDataSource *sharedStoreArtworkDataSource;

- (id)existingArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2;
- (id)supportedSizesForCatalog:(id)a0;
- (BOOL)areRepresentationsOfKind:(long long)a0 availableForCatalog:(id)a1;
- (struct CGSize { double x0; double x1; })_clampImageSize:(struct CGSize { double x0; double x1; })a0 toMaxSupportedSize:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })bestAvailableSizeForCatalog:(id)a0;
- (id)_bestURLForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })_bestSizeForImageSizeInfo:(id)a0 catalog:(id)a1;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (void)getExportableArtworkPropertiesForCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)sortedSupportedSizesForCatalog:(id)a0;
- (BOOL)wantsBackgroundImageDecompression;
- (BOOL)hasExportableArtworkPropertiesForCatalog:(id)a0;
- (id)cacheKeyForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;

@end
