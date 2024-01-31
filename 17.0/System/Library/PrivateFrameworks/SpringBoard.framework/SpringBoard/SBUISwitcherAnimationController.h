@class NSString;
@protocol SBSwitcherContentViewControlling, NSObject;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>

@property (weak, nonatomic) id<SBSwitcherContentViewControlling> contentViewController;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (retain, nonatomic) id<NSObject> activityToken;
@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) BOOL _interruptible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didComplete;
- (void)_startAnimation;
- (id)animationSettings;
- (BOOL)isInterruptible;
- (id)_layoutState;
- (void)_addSignpostsAndEndAnimationTrackingForAnimationEnd;
- (BOOL)shouldResignActiveForAnimation;
- (void)_addSignpostsAndBeginAnimationTrackingForAnimationStart;
- (id)initWithWorkspaceTransitionRequest:(id)a0 contentViewController:(id)a1 childAnimationControllers:(id)a2 animationBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_updatePPTsForAnimationEnd;
- (void)_updatePPTsForAnimationStart;
- (BOOL)isReasonableMomentToInterrupt;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (id)_previousLayoutState;

@end
