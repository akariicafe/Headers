@class _UIEditMenuPresentationAnimator, UIView, UIEditMenuConfiguration, UIMenu;
@protocol _UIEditMenuPresentationDelegate;

@interface _UIEditMenuPresentation : NSObject

@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) _UIEditMenuPresentationAnimator *presentAnimator;
@property (retain, nonatomic) _UIEditMenuPresentationAnimator *dismissAnimator;
@property (retain, nonatomic) UIMenu *displayedMenu;
@property (retain, nonatomic) UIEditMenuConfiguration *activeConfiguration;
@property (readonly, weak, nonatomic) UIView *sourceView;
@property (readonly, weak, nonatomic) id<_UIEditMenuPresentationDelegate> delegate;
@property (nonatomic) BOOL enforcesMenuControllerLifecycle;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrameInCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (void)animateFadeWithDelay:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)animateReducedMotionTransitionWithDelay:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)animateScaleDismissalWithAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)animateScalePresentWithDelay:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)didTransitionFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)displayMenu:(id)a0 configuration:(id)a1;
- (void)forceEndDismissalIfNeeded;
- (void)forceEndPresentIfNeeded;
- (void)hideMenuWithReason:(long long)a0;
- (id)initWithDelegate:(id)a0 sourceView:(id)a1;
- (void)replaceVisibleMenuWithMenu:(id)a0 reason:(long long)a1;
- (long long)resolvedUserInterfaceStyle;
- (void)sourceViewDidUpdateFromTraitCollection:(id)a0;
- (void)transitionWithEvent:(unsigned long long)a0;
- (void)updateMenuPositionAnimated:(BOOL)a0;

@end
