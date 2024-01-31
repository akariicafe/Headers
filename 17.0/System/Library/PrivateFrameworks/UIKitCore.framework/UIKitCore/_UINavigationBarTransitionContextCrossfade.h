@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext

- (void)complete;
- (double)contentViewMaxY;
- (void)animate;
- (BOOL)shouldPerformTwoPartCrossfadeTransition;
- (void)_prepareSearchBar;
- (void)_animateSearchBar;
- (int)transition;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)_animateContentView;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)_animateLargeTitleView;
- (void)cancel;
- (void)prepare;

@end
