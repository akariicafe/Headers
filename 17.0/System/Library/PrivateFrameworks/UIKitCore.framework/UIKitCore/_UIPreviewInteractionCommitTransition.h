@class UIViewController, UIWindow;

@interface _UIPreviewInteractionCommitTransition : NSObject

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIWindow *currentCommitEffectWindow;

- (void).cxx_destruct;
- (void)_applyCommitEffectTransformToView:(id)a0;
- (id)_preferredTransitionAnimator;
- (id)_preferredTransitionAnimatorForReducedMotion;
- (BOOL)_shouldReduceMotion;
- (id)initWithPresentedViewController:(id)a0;
- (void)performTransitionWithPresentationBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
