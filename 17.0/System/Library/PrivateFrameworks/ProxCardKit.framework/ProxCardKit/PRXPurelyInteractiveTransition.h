@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface PRXPurelyInteractiveTransition : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning> {
    id<UIViewControllerContextTransitioning> _transitionContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
