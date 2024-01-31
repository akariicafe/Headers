@class SBAnimationStepper, NSString;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning>

@property (readonly, nonatomic) SBAnimationStepper *stepper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)percentComplete;
- (void)finishInteractiveTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void)updateTransition:(id)a0 withPercentComplete:(double)a1;
- (void).cxx_destruct;
- (id)initWithAnimationController:(id)a0;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (id)initWithAnimationController:(id)a0 stepper:(id)a1;

@end
