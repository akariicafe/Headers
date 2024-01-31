@class UIView, NSString, _UIPreviewInteractionViewControllerPresentation, _UIPreviewInteractionHighlighter, UIViewPropertyAnimator, UITargetedPreview, _UIPortalView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface _UIPreviewInteractionPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
    id<UIViewControllerContextTransitioning> _currentContext;
}

@property (retain, nonatomic) _UIPreviewInteractionViewControllerPresentation *presentation;
@property (retain, nonatomic) _UIPortalView *presentationSourcePortalView;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) UIViewController *stashedParentViewController;
@property (retain, nonatomic) UIView *stashedSuperView;
@property (copy, nonatomic) id /* block */ dismissalCompletion;
@property (nonatomic) BOOL isAppearing;
@property (readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator;
@property (retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_createpresentationAnimatorIfNecessary:(id)a0;
- (void)_postInteractionCleanup;
- (id)_sourcePreviewPortal;
- (void)_stashParentViewControllerIfNecessary;
- (void)dismissViewController;
- (id)initWithViewControllerPresentation:(id)a0;
- (void)presentFromViewController:(id)a0 sourcePreview:(id)a1 dismissalCompletion:(id /* block */)a2;

@end
