@class _UIClickPresentation, _UIPortalView, NSString, UIViewPropertyAnimator, UIView, UITargetedPreview, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface _UIClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting> {
    id<UIViewControllerContextTransitioning> _currentContext;
    unsigned long long _currentState;
}

@property (retain, nonatomic) _UIPortalView *presentationSourcePortalView;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) UIViewController *stashedParentViewController;
@property (retain, nonatomic) UIView *stashedSuperView;
@property (copy, nonatomic) id /* block */ transitionCompletion;
@property (readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UIClickPresentation *presentation;
@property (copy, nonatomic) id /* block */ lifecycleCompletion;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)_animateDismissalIsInterruption:(BOOL)a0;
- (void)_animatePresentation;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_createPropertyAnimatorIfNecessaryForTransition:(id)a0 isAppearing:(BOOL)a1;
- (void)_didTransitionToDismissingFromState:(unsigned long long)a0;
- (void)_didTransitionToPossibleEndingTransition:(BOOL)a0;
- (void)_didTransitionToPresented;
- (void)_didTransitionToPresenting;
- (void)_postInteractionCleanup;
- (id)_sourcePreviewPortal;
- (void)_stashParentViewControllerIfNecessary;
- (void)dismissWithReason:(unsigned long long)a0 alongsideActions:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithClickPresentation:(id)a0;
- (void)presentFromSourcePreview:(id)a0 lifecycleCompletion:(id /* block */)a1;

@end
