@class _UINavigationParallaxTransition, _UINavigationInteractiveTransition;

@interface _UINavigationControllerVisualStyleIOS : _UINavigationControllerVisualStyle {
    _UINavigationParallaxTransition *_transitionController;
    _UINavigationInteractiveTransition *_interactionController;
}

- (id)interactionController;
- (id)initWithNavigationController:(id)a0;
- (void)updateTransitionControllerWithOperation:(long long)a0;
- (BOOL)isUsingParallaxTransition;
- (id)transitionController;
- (void).cxx_destruct;
- (void)layoutContainerViewSemanticContentAttributeChanged:(id)a0;

@end
