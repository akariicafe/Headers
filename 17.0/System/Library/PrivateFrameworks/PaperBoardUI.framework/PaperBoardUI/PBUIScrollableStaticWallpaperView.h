@class BSAtomicFlag, NSString, UIImageView, UIScrollView, NSObject, PBUIWallpaperParallaxSettings;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PBUIScrollableStaticWallpaperView : PBUIStaticWallpaperView <UIScrollViewDelegate> {
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    PBUIWallpaperParallaxSettings *_parallaxSettings;
    double _minimumZoomScaleForParallax;
    double _minimumZoomScale;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_throttleTimer;
    BSAtomicFlag *_throttleCanUpdateFlag;
}

@property (nonatomic) BOOL automaticallyEnablesParallax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldScaleForParallax;
+ (BOOL)_canDownscaleSampleImage;
+ (BOOL)_canCacheImages;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)_newImageView;
- (BOOL)supportsCropping;
- (void)dealloc;
- (double)parallaxFactor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (id)_wallpaperImageForAnalysis;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (double)cropZoomScale;
- (id)_scrollView;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)setParallaxEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)_cancelThrottle;
- (double)_throttleDuration;
- (void)_setupScrollView;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRect;
- (void)_updateParallaxForScroll;
- (struct CGPoint { double x0; double x1; })_boundedContentOffsetForOverhang;
- (void).cxx_destruct;
- (void)_updateScrollViewZoomScales;
- (void)setContentView:(id)a0;
- (struct CGPoint { double x0; double x1; })_minimumContentOffsetForOverhang;
- (double)_parallaxFactorWithZoomScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_maximumContentOffsetForOverhang;
- (double)_scrollViewParallaxFactor;
- (void)_resetColorBoxes;
- (void)layoutSubviews;
- (void)_scrollViewDidUpdate;
- (void)didMoveToWindow;

@end
