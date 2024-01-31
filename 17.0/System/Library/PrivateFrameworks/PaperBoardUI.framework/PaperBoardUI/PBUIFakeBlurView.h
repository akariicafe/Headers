@class NSString, PBUIWallpaperViewController, PBUIWallpaperView, UIView;
@protocol PBUIFakeBlurObserver, PBUIFakeBlurViewRegistering, PBUIWallpaperReachabilityCoordinating, PBUIFakeBlurImageProviding;

@interface PBUIFakeBlurView : UIView <PBUIFakeBlurImageProviding, PBUIFakeBluring, PBUIWallpaperReachabilityObserving> {
    long long _requestedStyle;
    long long _effectiveStyle;
    PBUIWallpaperView *_wallpaperView;
    struct CGPoint { double x; double y; } _wallpaperOffset;
}

@property (readonly, nonatomic) long long variant;
@property (readonly, weak, nonatomic) id<PBUIFakeBlurImageProviding> imageProvider;
@property (readonly, nonatomic) UIView *providedImageView;
@property (readonly, weak, nonatomic) id<PBUIFakeBlurViewRegistering> fakeBlurRegistry;
@property (readonly, weak, nonatomic) PBUIWallpaperViewController *wallpaperViewController;
@property (readonly, nonatomic) id<PBUIWallpaperReachabilityCoordinating> reachabilityCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBUIFakeBlurObserver> observer;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;

+ (id)_imageForStyle:(inout long long *)a0 withSource:(id)a1 overrideTraitCollection:(id)a2;
+ (void)_imageForStyle:(long long)a0 withSource:(id)a1 overrideTraitCollection:(id)a2 result:(id /* block */)a3;
+ (id)_imageForStyle:(inout long long *)a0 withSource:(id)a1;

- (long long)effectiveStyle;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)reconfigureFromProvider;
- (void)traitCollectionDidChange:(id)a0;
- (void)handleReachabilityYOffsetDidChange;
- (id)initWithVariant:(long long)a0 imageProvider:(id)a1 fakeBlurRegistry:(id)a2 wallpaperViewDelegate:(id)a3 transformOptions:(unsigned long long)a4 reachabilityCoordinator:(id)a5;
- (void)rotateToInterfaceOrientation:(long long)a0;
- (void)reconfigureWithSource:(id)a0;
- (id)initWithVariant:(long long)a0 wallpaperViewController:(id)a1 transformOptions:(unsigned long long)a2 reachabilityCoordinator:(id)a3;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (id)imageForWallpaperStyle:(inout long long *)a0 variant:(long long)a1 traitCollection:(id)a2;
- (BOOL)updateImageProviderView:(id)a0 withImage:(id)a1;
- (double)zoomFactorForVariant:(long long)a0;
- (void).cxx_destruct;
- (void)requestStyle:(long long)a0;
- (BOOL)parallaxEnabledForVariant:(long long)a0;
- (double)parallaxFactorForVariant:(long long)a0;
- (id)newImageProviderView;
- (void)layoutSubviews;
- (void)updateImageWithSource:(id)a0;
- (void)updateImageFromProviderForWallpaperMode:(long long)a0;
- (void)didMoveToWindow;

@end
