@interface QLSlideTransitionDriver : QLTransitionDriver

- (void)tearDown;
- (void)_animateTransition;
- (void)_animateTransitionUserSlideDismissal;
- (void)animateTransition;

@end
