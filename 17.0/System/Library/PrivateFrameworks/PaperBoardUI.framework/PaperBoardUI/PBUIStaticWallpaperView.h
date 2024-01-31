@class NSString, UIImage, NSURL, NSData, PBUIColorBoxes;

@interface PBUIStaticWallpaperView : PBUIWallpaperView {
    double _overallContrast;
    PBUIColorBoxes *_colorBoxes;
}

@property (retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage;
@property (retain, nonatomic, getter=_displayedImageURL, setter=_setDisplayedImageURL:) NSURL *displayedImageURL;
@property (retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage;
@property (copy, nonatomic) NSData *displayedImageHashData;
@property (copy, nonatomic) NSString *displayedImageHashString;
@property (nonatomic) BOOL needsInactiveAppearanceTreatment;
@property (retain, nonatomic) PBUIColorBoxes *colorBoxes;

+ (BOOL)isRunningInPreferencesApp;
+ (BOOL)_allowsRasterization;
+ (BOOL)allowsParallax;
+ (BOOL)_canDownscaleSampleImage;
+ (BOOL)_canCacheImages;

- (double)contrast;
- (void)_updateColorBoxesWithKey:(id)a0 image:(id)a1;
- (void)preheatImageData;
- (id)_computeAverageColor;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)wallpaperImage;
- (BOOL)hasContentOutsideVisibleBounds;
- (void)_setUpStaticImageContentView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (id)_wallpaperImageForAnalysis;
- (BOOL)handlesInactiveAppearanceTreatment;
- (double)_contrastInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (double)cropZoomScale;
- (id)cacheUniqueIdentifier;
- (BOOL)imageRequiresLuminanceTreatment;
- (id)snapshotImage;
- (id)_createColorBoxes;
- (void)_setupWallpaperImageFromConfiguration:(id)a0 options:(unsigned long long)a1;
- (BOOL)workaround_alwaysForceNoTreatment;
- (float)_zoomScale;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (long long)wallpaperType;
- (id)snapshotImageURL;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)_generateImageForImage:(id)a0 cacheKey:(id)a1 options:(unsigned long long)a2 downsampleFactor:(double)a3 needsDimmingTreatment:(BOOL)a4 needsInactiveAppearanceTreatment:(BOOL)a5 averageColorProvider:(id /* block */)a6 generationHandler:(id /* block */)a7;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 smudgeRadius:(double)a1;
- (void)_displayImage:(id)a0;
- (void).cxx_destruct;

@end
