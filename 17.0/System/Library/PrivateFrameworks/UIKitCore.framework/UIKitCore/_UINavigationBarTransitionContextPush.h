@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingBackIndicatorViewFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
}

- (void)complete;
- (void)_animateBackgroundView;
- (void)animate;
- (id)viewUsingEaseOutCurve;
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
