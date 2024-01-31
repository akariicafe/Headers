@class NSString;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface _UIPresentedViewControllerInteractivePopTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) id<UIViewControllerAnimatedTransitioning> animator;
@property (retain, nonatomic) id<UIViewControllerInteractiveTransitioning> interactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactionControllerForDismissal:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;

@end
