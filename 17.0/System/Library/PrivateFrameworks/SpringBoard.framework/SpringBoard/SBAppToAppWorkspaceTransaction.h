@class NSObject, SBUIAnimationController, SBAutoPIPWorkspaceTransaction;
@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
}

@property (nonatomic) BOOL preventWhitePointAdaptationStrengthUpdateOnComplete;

- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)_setupAnimation;
- (void)dealloc;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)_handleApplicationDidNotChange:(id)a0;
- (void)_cleanUpAfterAnimation;
- (BOOL)_shouldResignActiveForAnimation;
- (id)initWithTransitionRequest:(id)a0;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (void).cxx_destruct;
- (void)_performPreAnimationTasksWithCompletion:(id /* block */)a0;
- (id)debugDescription;
- (BOOL)_hasPreAnimationTasks;
- (BOOL)_transitionWasCancelled;
- (void)_clearAnimation;
- (void)_beginTransition;
- (void)_animationWillBegin:(BOOL)a0;
- (id)_setupAnimationFrom:(id)a0 to:(id)a1;
- (void)_animationDidRevealApplication;
- (BOOL)_hasPostAnimationTasks;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)a0;
- (void)_performPostAnimationTasksWithCompletion:(id /* block */)a0;

@end
