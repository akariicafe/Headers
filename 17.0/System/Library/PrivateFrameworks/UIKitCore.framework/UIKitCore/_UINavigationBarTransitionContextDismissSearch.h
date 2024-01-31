@class UISearchBar, UIView;

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {
    UISearchBar *_transitioningSearchBar;
    UIView *_transitioningScopeBarContainer;
}

- (void)complete;
- (void)animate;
- (int)transition;
- (void).cxx_destruct;
- (void)cancel;
- (void)prepare;
- (BOOL)_shouldCrossfadeDismissal;

@end
