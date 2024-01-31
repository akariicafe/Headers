@class _UIForcedOrientationTransactionToken, UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {
    UIView *_counterRotatedView;
    double _counterRotatedAngle;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _counterRotatedOriginalBounds;
    long long _originalOrientation;
    BOOL _presentingViewControllerHandledCounterRotation;
    id /* block */ _finalRotationBlock;
    _UIForcedOrientationTransactionToken *_forcedOrientationToken;
    BOOL _disableAnimatedReenablingOfAutorotation;
}

- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)shouldPresentInFullscreen;
- (void)dealloc;
- (long long)presentationStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void).cxx_destruct;
- (void)_setPresentedViewController:(id)a0;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)_removeCounterRotationIfApplied;
- (void)_adjustOrientationIfNecessaryInWindow:(id)a0 forViewController:(id)a1 preservingViewController:(id)a2;
- (void)_applyCounterRotationToView:(id)a0 fromOrientation:(long long)a1 toOrientation:(long long)a2 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)_invokesDelegatesOnOrientationChange;
- (void)_placeCounterRotationViewWithView:(id)a0 inWindow:(id)a1 fromOrientation:(long long)a2 toOrientation:(long long)a3 force:(BOOL)a4;
- (void)_prepareForMixedOrientationTransitionIfNecessaryInWindow:(id)a0 fromViewController:(id)a1 toViewController:(id)a2;
- (BOOL)_shouldAnimateReenablingOfAutorotation;
- (void)_transitionDidEnd:(BOOL)a0 isDismissal:(BOOL)a1;

@end
