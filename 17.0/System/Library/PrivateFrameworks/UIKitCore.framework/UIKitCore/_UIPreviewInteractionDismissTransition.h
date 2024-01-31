@class NSString, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

@interface _UIPreviewInteractionDismissTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIViewPropertyAnimator *_dismissAnimator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (id)_preparedDismissAnimator;

@end
