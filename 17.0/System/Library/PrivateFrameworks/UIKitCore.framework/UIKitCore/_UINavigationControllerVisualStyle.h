@class UINavigationController;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface _UINavigationControllerVisualStyle : NSObject

@property (nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) id<UIViewControllerAnimatedTransitioning> transitionController;
@property (readonly, nonatomic) id<UIViewControllerInteractiveTransitioning> interactionController;
@property (readonly, nonatomic) BOOL isUsingParallaxTransition;

- (id)initWithNavigationController:(id)a0;
- (void)containerViewWillLayoutSubviews:(id)a0;
- (void)updateTransitionControllerWithOperation:(long long)a0;
- (void)navigationBarFrameChanged;
- (BOOL)shouldUseInteractionControllerForInteractiveTransition;
- (void)toolbarVisibilityChanged;
- (void)toolbarFrameChanged;
- (void)layoutContainerViewSemanticContentAttributeChanged:(id)a0;
- (void)navigationBarVisibilityChanged;

@end
