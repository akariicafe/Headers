@class SBDisableActiveInterfaceOrientationChangeAssertion;
@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    id<SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (void)_setupAndActivate;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (void)_activateLockScreen;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (void)_lockScreenDidActivate;
- (void).cxx_destruct;
- (id)initWithTransitionRequest:(id)a0 lockScreenEnvironment:(id)a1;

@end
