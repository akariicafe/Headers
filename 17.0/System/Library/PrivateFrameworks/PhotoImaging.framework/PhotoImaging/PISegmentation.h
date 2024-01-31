@interface PISegmentation : NSObject

+ (unsigned long long)currentVersion;
+ (struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; })settlingEffectGatingStatisticsFromScores:(id)a0;
+ (void)ensureResources;
+ (id)segmentationLoaderForAsset:(id)a0;
+ (void)warmUpResources;
+ (void)loadSegmentationItemForAsset:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (BOOL)settlingEffectLayoutContainsHeadroomForSegmentationScores:(id)a0;
+ (void)computeSegmentationScoresForAsset:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)exportWallpaperForAsset:(id)a0 toURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (id)_styleFromOptions:(id)a0 item:(id)a1;
+ (struct CGImage { } *)createFullExtentPreviewImageForWallpaperAtURL:(id)a0 error:(id *)a1;
+ (void)_upgradeFullPosterAtURL:(id)a0 exportToURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (BOOL)curatedSegmentationGatingDecisionForSegmentationScores:(id)a0;
+ (BOOL)settlingEffectStabilizationDecisionForSegmentationScores:(id)a0;
+ (void)upgradeWallpaperAtURL:(id)a0 exportToURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)_layerStackOptionsFromOptions:(id)a0;
+ (void)upgradePosterConfiguration:(id)a0 atURL:(id)a1 exportTo:(id)a2 options:(id)a3 completion:(id /* block */)a4;
+ (BOOL)currentDeviceSupportsSettlingEffect;
+ (void)_upgradeWallpaperAtURL:(id)a0 exportToURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (void)_createReadOnlyCopyOfPosterAtURL:(id)a0 exportToURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (BOOL)layoutGatingDecisionForSegmentationScores:(id)a0;
+ (BOOL)manualSegmentationGatingDecisionForSegmentationScores:(id)a0;
+ (void)cancelSegmentationForAsset:(id)a0;
+ (BOOL)settlingEffectLayoutDecisionForSegmentationScores:(id)a0;
+ (BOOL)tryLoadSegmentationForColdAsset:(id)a0;
+ (void)freeResources;
+ (void)setSegmentationLoader:(id)a0 forAsset:(id)a1;
+ (unsigned long long)settlingEffectGatingFailuresFromScores:(id)a0;
+ (BOOL)settlingEffectVideoDecisionForSegmentationScores:(id)a0;

@end
