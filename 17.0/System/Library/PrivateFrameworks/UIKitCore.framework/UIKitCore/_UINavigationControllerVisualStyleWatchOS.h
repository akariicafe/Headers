@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface _UINavigationControllerVisualStyleWatchOS : _UINavigationControllerVisualStyle {
    id<UIViewControllerAnimatedTransitioning> _transitionController;
    id<UIViewControllerInteractiveTransitioning> _interactionController;
}

- (id)interactionController;
- (BOOL)isUsingParallaxTransition;
- (void)setTransitionController:(id)a0;
- (id)transitionController;
- (void)setInteractionController:(id)a0;
- (void).cxx_destruct;

@end
