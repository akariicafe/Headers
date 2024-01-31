@class NSString, UIViewController, UIView;
@protocol UIViewControllerContextTransitioning;

@interface PKCancelingAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    UIViewController *_presentingVC;
    UIView *_presentingView;
    UIViewController *_presentedVC;
    UIView *_presentedView;
    id<UIViewControllerContextTransitioning> _transitionContext;
    BOOL _completed;
}

@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (copy, nonatomic) id /* block */ cancelationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;

@end
