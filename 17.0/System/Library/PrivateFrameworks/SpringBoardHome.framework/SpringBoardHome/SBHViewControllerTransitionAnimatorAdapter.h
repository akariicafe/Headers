@class NSString;
@protocol SBHViewControllerTransitionAnimating;

@interface SBHViewControllerTransitionAnimatorAdapter : NSObject <SBViewControllerReversibleAnimatedTransitioning>

@property (nonatomic) unsigned long long transitionToken;
@property (readonly, nonatomic) id<SBHViewControllerTransitionAnimating> animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnimator:(id)a0;
- (BOOL)supportsRestarting;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;

@end
