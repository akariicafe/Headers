@class PBUIWallpaperEffectViewBase;
@protocol PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding, BSInvalidatable;

@interface PBUIWallpaperStaticBackgroundView : UIView {
    id<PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding> _wallpaperPresenter;
    PBUIWallpaperEffectViewBase *_lockscreenWallpaperEffectView;
    PBUIWallpaperEffectViewBase *_homescreenWallpaperEffectView;
}

@property (retain, nonatomic) id<BSInvalidatable> wallpaperStyleAnimationAssertion;
@property (nonatomic) long long variant;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_beginSuspendingMotionEffectsForStyleIfNeeded;
- (id)_effectViewForVariant:(long long)a0;
- (void)_endSuspendingMotionEffectsForStyleIfNeeded;
- (id)_newEffectViewForVariant:(long long)a0 transitionState:(struct { long long x0; long long x1; double x2; })a1;
- (void)_setEffectView:(id)a0 forVariant:(long long)a1;
- (BOOL)_shouldSuspendMotionEffectsForState:(struct { long long x0; long long x1; double x2; })a0;
- (BOOL)_shouldSuspendMotionEffectsForStyle:(long long)a0;
- (void)_updateMotionEffectsForState:(struct { long long x0; long long x1; double x2; })a0;
- (id)initWithWallpaperPresenter:(id)a0;
- (void)setVariant:(long long)a0 withOutAnimationFactory:(id)a1 inAnimationFactory:(id)a2 completion:(id /* block */)a3;
- (BOOL)setWallpaperStyleTransitionState:(struct { long long x0; long long x1; double x2; })a0 forVariant:(long long)a1 withAnimationFactory:(id)a2;

@end
