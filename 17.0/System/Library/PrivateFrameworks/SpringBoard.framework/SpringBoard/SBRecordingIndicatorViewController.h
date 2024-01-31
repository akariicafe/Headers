@class UIColor, CALayer, SBRecordingIndicatorView, UIView, UIViewPropertyAnimator, CAContext;
@protocol SBRecordingIndicatorViewControllerDelegate;

@interface SBRecordingIndicatorViewController : UIViewController {
    UIViewPropertyAnimator *_animatorScaleToOverscale;
    UIViewPropertyAnimator *_animatorScaleToNormal;
    UIViewPropertyAnimator *_animatorScaleToRest;
    UIViewPropertyAnimator *_animatorScaleToZero;
    UIViewPropertyAnimator *_animatorFastFade;
    UIViewPropertyAnimator *_animatorSpringToOn;
    UIViewPropertyAnimator *_animatorSpringToOff;
    double _size;
    double _sideOffset;
    double _topOffset;
    struct CGPoint { double x; double y; } _center;
    CAContext *_context;
    CALayer *_rootLayer;
    CALayer *_contentLayer;
}

@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) UIView *indicatorContainerView;
@property (readonly, nonatomic) SBRecordingIndicatorView *indicatorView;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (readonly, nonatomic) unsigned long long indicatorState;
@property (nonatomic) long long activeInterfaceOrientation;
@property (weak, nonatomic) id<SBRecordingIndicatorViewControllerDelegate> delegate;

- (double)_sizeForStateIdleOn;
- (BOOL)_shouldForceViewToShowForBacklightLuminance:(long long)a0;
- (void)_updateIndicatorViewSize:(double)a0 alpha:(double)a1;
- (void)_stopAllAnimations;
- (id)_springAnimationForKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2 duration:(double)a3;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_usesSpringAnimations;
- (void)_configureRootLayer;
- (void)calculateInitialIndicatorPositionAndSize;
- (void)_updateIndicatorLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andCenter:(struct CGPoint { double x0; double x1; })a1;
- (double)_alphaForStateIdleOn;
- (void)updateIndicatorVisibility:(BOOL)a0;
- (void)_animateLayer:(id)a0 forKeyPath:(id)a1 fromValue:(id)a2 toValue:(id)a3 persistingToValue:(BOOL)a4 duration:(double)a5;
- (BOOL)_screenTypeForcesFastFadeAnimations;
- (BOOL)_shouldForceViewToShowForCurrentBacklightLuminance;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_interchangesViewAndLayer;
- (id)initForLocation:(unsigned long long)a0;
- (void)setIndicatorState:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)updateIndicatorShape:(unsigned long long)a0;
- (void)_updateIndicatorVisibilityWithSpringAnimation:(BOOL)a0;
- (void)_updateToOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)updateIndicatorVisibilityWithFastFadeAnimation:(BOOL)a0;
- (void)_updateIndicatorForBacklightLuminance:(long long)a0 previousBacklightLuminance:(long long)a1;
- (void)_updateIndicatorLayerSize:(double)a0 opacity:(double)a1;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (void)_addBlurFilterToLayer:(id)a0 withBlurRadius:(double)a1;

@end
