@class NSString, NSMutableArray, UIView;

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    BOOL _transitionIsInFlight;
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
}

@property (nonatomic) UIView *containerView;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) BOOL initiallyInteractive;
@property (readonly, nonatomic) BOOL isInterruptible;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) double transitionDuration;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) double completionVelocity;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_runAlongsideAnimations;
- (id)viewForKey:(id)a0;
- (BOOL)animateAlongsideTransitionInView:(id)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (id)_mainContext;
- (id)_alongsideAnimations:(BOOL)a0;
- (id)viewControllerForKey:(id)a0;
- (BOOL)animateAlongsideTransition:(id /* block */)a0 completion:(id /* block */)a1;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)a0;
- (id)_alongsideCompletions:(BOOL)a0;
- (void)notifyWhenInteractionChangesUsingBlock:(id /* block */)a0;
- (BOOL)isRotating;
- (void)_applyBlocks:(id)a0 releaseBlocks:(id /* block */)a1;
- (void)_runAlongsideCompletions;
- (void).cxx_destruct;
- (void)_runAlongsideCompletionsAfterCommit;
- (BOOL)_animateAlongsideTransitionInView:(id)a0 systemAnimation:(BOOL)a1 systemCompletion:(BOOL)a2 animation:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_runAlongsideCompletionsAndClearAlongsideAnimations;

@end
