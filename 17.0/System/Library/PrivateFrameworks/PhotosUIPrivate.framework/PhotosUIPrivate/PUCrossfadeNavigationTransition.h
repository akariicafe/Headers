@interface PUCrossfadeNavigationTransition : PUNavigationTransition

- (id)init;
- (void)animatePushTransition;
- (void)animatePopTransition;
- (void)_animateTransition;

@end
