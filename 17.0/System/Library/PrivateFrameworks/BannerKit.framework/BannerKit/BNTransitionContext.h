@class NSString, _UIViewControllerOneToOneTransitionContext, UIView;
@protocol UIViewControllerTransitionCoordinator;

@interface BNTransitionContext : NSObject <BNViewControllerContextTransitioning> {
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
}

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) NSString *revocationReason;
@property (readonly, weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;
@property (nonatomic, getter=isExplicitCompletionRequired) BOOL explicitCompletionRequired;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fromStartFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fromEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } toEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } toStartFrame;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionContextForTransitionFromViewController:(id)a0 toViewController:(id)a1 inContainerView:(id)a2;
+ (id)transitionContextForTransitionOfViewController:(id)a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inContainerView:(id)a3;

- (void)pauseInteractiveTransition;
- (void)updateInteractiveTransition:(double)a0;
- (id)viewForKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (void)finishInteractiveTransition;
- (id)viewControllerForKey:(id)a0;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)__runAlongsideAnimations;
- (void)explictlyCompleteTransition:(BOOL)a0;
- (void)performTransitionWithAnimator:(id)a0;

@end
