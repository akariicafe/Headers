@class UIView;

@interface _UINavigationBarTransitionContextPresentSearch : _UINavigationBarTransitionContext {
    UIView *_transitioningScopeBarContainer;
}

- (void)complete;
- (void)_animateBackgroundView;
- (void)animate;
- (void)_prepareBackgroundView;
- (int)transition;
- (void)_resetContentAndLargeTitleViewCompleted:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)prepare;

@end
