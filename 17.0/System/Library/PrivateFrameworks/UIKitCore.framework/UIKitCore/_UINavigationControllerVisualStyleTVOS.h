@class _UINavigationCrossfadeAnimator;

@interface _UINavigationControllerVisualStyleTVOS : _UINavigationControllerVisualStyle {
    _UINavigationCrossfadeAnimator *_transitionController;
}

- (id)initWithNavigationController:(id)a0;
- (BOOL)isUsingParallaxTransition;
- (id)transitionController;
- (void).cxx_destruct;

@end
