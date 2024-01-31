@class PHAsset;

@interface PXMediaAnalysisVideoStabilizationRecipeSource : PXVideoStabilizationRecipeSource {
    PHAsset *_asset;
    struct CGSize { double width; double height; } _videoDimensions;
}

+ (void)cacheRecipe:(id)a0 forAsset:(id)a1;
+ (id)cachedRecipeForAsset:(id)a0;

- (id)analyticsPayload;
- (void).cxx_destruct;
- (id)_loadStabilizationRecipe:(id *)a0 analysisType:(out unsigned long long *)a1;
- (id)initWithAsset:(id)a0 videoDimensions:(struct CGSize { double x0; double x1; })a1;

@end
