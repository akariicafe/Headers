@class NSArray, SBAutoPIPWorkspaceTransaction;
@protocol BSInvalidatable;

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    NSArray *_switcherTransitioningTransientOverlayViewControllers;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    id<BSInvalidatable> _pipWindowLevelOverrideAssertionInvalidatable;
    BOOL _isUsingSwitcherAnimation;
    BOOL _beganDismissingTransientOverlays;
}

- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)_setupAnimation;
- (void)dealloc;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (BOOL)_shouldResignActiveForAnimation;
- (id)initWithTransitionRequest:(id)a0;
- (void)_handleDismissOverlaysCompletion;
- (BOOL)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)a0;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void).cxx_destruct;
- (void)_logForInterruptAttemptReason:(id)a0;
- (void)_performDismissal;
- (BOOL)_shouldAnimateTransition;

@end
