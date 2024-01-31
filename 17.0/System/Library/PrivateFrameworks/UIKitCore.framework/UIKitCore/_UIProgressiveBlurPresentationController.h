@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) long long blurStyle;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dismissalTransitionWillBegin;
- (id)_preferredAnimationControllerForPresentation;
- (BOOL)_forcesPreferredAnimationControllers;
- (id)_preferredAnimationControllerForDismissal;
- (long long)presentationStyle;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (BOOL)_mayChildGrabPresentedViewControllerView;
- (void)_animateWithCoordinator:(id)a0 isPresenting:(BOOL)a1;
- (void)_configureSubviews;

@end
