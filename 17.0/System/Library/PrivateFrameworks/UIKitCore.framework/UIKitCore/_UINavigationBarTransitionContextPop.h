@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
    double _titleTransitionAdjustment;
}

- (void)complete;
- (id)viewUsingEaseInCurve;
- (void)_animateBackgroundView;
- (void)animate;
- (void)_prepareScaleTransition;
- (void)_prepareSearchBar;
- (void)_animateSearchBar;
- (void)_prepareBackgroundView;
- (int)transition;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)_animateContentView;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)_animateLargeTitleView;
- (void)cancel;
- (void)prepare;
- (void)_animateScaleTransition;

@end
