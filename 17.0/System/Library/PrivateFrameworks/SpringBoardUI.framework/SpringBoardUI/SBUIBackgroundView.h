@class UIColor, NSString, UIView, BSUIBackdropView, MTMaterialView;

@interface SBUIBackgroundView : UIView <SBUIBackgroundStyleTransitioning, SBUIWallpaperOverlay> {
    long long _transitionStyle;
    double _progress;
    BSUIBackdropView *_backdropView;
    BOOL _isReducedTransparencyEnabled;
    UIView *_reduceTransparencyView;
    UIView *_reduceTransparencyTintingView;
    UIView *_sourceOverView;
    UIView *_darkenSourceOverView;
    UIView *_tintView;
    UIView *_lightenSourceOverView;
    UIColor *_reduceTransparencyBackingColor;
    MTMaterialView *_luminanceView;
}

@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) long long backgroundStyle;
@property (readonly, nonatomic, getter=isTransitioningBackgroundStyle) BOOL transitioningBackgroundStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backdropView;
- (double)_reducedTransparencyValueForBackgroundStyle:(long long)a0;
- (void)beginTransitionToBackgroundStyle:(long long)a0;
- (double)_tintValueForBackgroundStyle:(long long)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_reduceTransparencyEnabledStateDidChange:(id)a0;
- (void)setReduceTransparencyBackingColor:(id)a0;
- (void)completeTransitionToBackgroundStyle:(long long)a0;
- (void)_luminanceWithProgress:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reduceTransparencyWithProgress:(double)a0;
- (void)_updateAppearanceForTransitionFromStyle:(long long)a0 toStyle:(long long)a1 withProgress:(double)a2;
- (void)updateBackgroundStyleTransitionProgress:(double)a0;
- (double)_luminanceValueForBackgroundStyle:(long long)a0;
- (BOOL)_shouldApplyReducedTransparencyTintForBackgroundStyle:(long long)a0;
- (void)_updateReduceTransparencyTinting;
- (void)modifyAllViewsWithChanges:(id /* block */)a0;
- (double)_darkenValueForBackgroundStyle:(long long)a0;
- (void)_lightenSourceOverWithProgress:(double)a0;
- (double)_lightenSourceOverValueForBackgroundStyle:(long long)a0;
- (id)_backgroundColorForDarkenAlpha:(double)a0 andProgress:(double)a1;
- (void).cxx_destruct;
- (void)_tintWithProgress:(double)a0 backgroundColorAlpha:(double)a1;
- (void)layoutSubviews;
- (void)_darkenWithProgress:(double)a0;
- (void)_updateAppearanceForBackgroundStyle:(long long)a0 transitionToSettings:(BOOL)a1;
- (void)_updateReduceTransparencyTintingWithProgressWeighting:(double)a0;
- (double)_tintColorAlphaForBackgroundStyle:(long long)a0;
- (double)_valueFromStart:(double)a0 toEnd:(double)a1 withFraction:(double)a2;

@end
