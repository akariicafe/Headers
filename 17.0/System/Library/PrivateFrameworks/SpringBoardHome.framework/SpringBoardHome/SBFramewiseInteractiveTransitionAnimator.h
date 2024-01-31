@class NSString;
@protocol SBFramewiseInteractiveTransitionAnimatorDelegate;

@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning> {
    double _percentComplete;
}

@property (weak, nonatomic) id<SBFramewiseInteractiveTransitionAnimatorDelegate> delegate;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly, nonatomic) double percentVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)percentComplete;
- (double)transitionDuration:(id)a0;
- (void)finishInteractiveTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void)updateTransition:(id)a0 withPercentComplete:(double)a1;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsRestarting;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;

@end
