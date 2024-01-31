@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator

- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_locationTitleUsingKeyAssetAddressNode:(id)a0 curationAddressNodes:(id)a1;
- (BOOL)_useSplitTimeTitlesIfNeeded;
- (id)initWithCollection:(id)a0 keyAsset:(id)a1 curatedAssetCollection:(id)a2 titleGenerationContext:(id)a3;
- (id)initWithMomentNodes:(id)a0 keyAsset:(id)a1 curatedAssetCollection:(id)a2 titleGenerationContext:(id)a3;

@end
