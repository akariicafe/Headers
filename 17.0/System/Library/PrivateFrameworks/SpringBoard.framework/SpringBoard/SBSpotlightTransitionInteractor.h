@class NSString;
@protocol UIViewControllerAnimatedTransitioning, SBViewControllerContextTransitioning;

@interface SBSpotlightTransitionInteractor : NSObject <SBViewControllerInteractiveTransitioning> {
    id<SBViewControllerContextTransitioning> _transitionContext;
    id<UIViewControllerAnimatedTransitioning> _animator;
}

@property (nonatomic) double completionSpeed;
@property (nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInteractiveTransition:(id)a0;
- (void)finishInteractiveTransition;
- (void)cancelTransition;
- (id)init;
- (void).cxx_destruct;
- (void)updateTransition:(double)a0;
- (id)initWithAnimator:(id)a0;

@end
