@class UIColor, NSString, UIImageView, UIImage, UIView;
@protocol PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding, PBUIFakeBluring;

@interface PBUIWallpaperEffectViewBase : UIView <PBUIFakeBlurObserver, PBUIWallpaperObserver, PBUIWallpaperPositioning> {
    long long _variant;
    UIColor *_wallpaperAverageColor;
    long long _startStyle;
    long long _endStyle;
    double _transitionFraction;
    UIImage *_maskImage;
    BOOL _shouldMaskBlur;
    BOOL _shouldMaskTint;
    BOOL _accessibilityReduceTransparencyEnabled;
}

@property (retain, nonatomic) UIView<PBUIFakeBluring> *blurView;
@property (retain, nonatomic) UIView *grayscaleTintView;
@property (retain, nonatomic) UIView *colorTintView;
@property (retain, nonatomic) UIView<PBUIFakeBluring> *transitionBlurView;
@property (retain, nonatomic) UIView *transitionGrayscaleTintView;
@property (retain, nonatomic) UIView *transitionColorTintView;
@property (retain, nonatomic) UIImageView *maskImageView;
@property (retain, nonatomic) UIView *blurMaskingContainer;
@property (retain, nonatomic) UIView *tintMaskingContainer;
@property (readonly, nonatomic) id<PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding> wallpaperPresenter;
@property (nonatomic) double zoomScale;
@property (nonatomic) BOOL forcesOpaque;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;

- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void)setTransitionState:(struct { long long x0; long long x1; double x2; })a0;
- (id)appearanceStorage;
- (void)setBarStyle:(long long)a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (long long)wallpaperStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (void)setBarTintColor:(id)a0;
- (void)setWallpaperStyle:(long long)a0;
- (void)setHidden:(BOOL)a0;
- (void)setTranslucent:(BOOL)a0;
- (void)setStyle:(long long)a0;
- (void).cxx_destruct;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_configureViews;
- (void)_accessibilityReduceTransparencyChanged:(id)a0;
- (void)_configureForCurrentBlurStyle;
- (void)_configureFromScratch;
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(BOOL)a0;
- (void)_configureViewsPositioning;
- (BOOL)_needsBlurViewForStyle:(long long)a0;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceUpdateBackgroundImage:(BOOL)a1;
- (void)_setIsContainedInPopover:(BOOL)a0;
- (void)_setTransitionFraction:(double)a0;
- (BOOL)_shouldEffectivelyMatchWallpaperPosition;
- (void)_updateWallpaperAverageColor:(id)a0;
- (BOOL)currentTransitionStateIsOpaque;
- (void)fakeBlurView:(id)a0 didChangeStyle:(long long)a1;
- (id)initWithWallpaperPresenter:(id)a0 variant:(long long)a1 transformOptions:(unsigned long long)a2;
- (BOOL)prepareToAnimateToTransitionState:(inout struct { long long x0; long long x1; double x2; } *)a0;
- (void)setAppearanceStorage:(id)a0;
- (void)setBarWantsAdaptiveBackdrop:(BOOL)a0;
- (void)setMaskImage:(id)a0 masksBlur:(BOOL)a1 masksTint:(BOOL)a2;
- (void)updateBackgroundImage;

@end
