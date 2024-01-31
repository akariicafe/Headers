@class SBBannerManager, SBFUserAuthenticationController, SBApplicationController, SBSetupManager, SBInitialRestartState, SBLockScreenManager;

@interface SBStartupTransitionToSetup : SBBaseStartupTransition {
    SBBannerManager *_bannerManager;
    SBFUserAuthenticationController *_authController;
    SBApplicationController *_appController;
    SBSetupManager *_setupManager;
    SBLockScreenManager *_lockScreenManager;
    SBInitialRestartState *_initialRestartState;
}

- (void).cxx_destruct;
- (void)_activateSetupWithCompletion:(id /* block */)a0 underLock:(BOOL)a1 fromSnapshot:(BOOL)a2;
- (id)initWithDestination:(unsigned long long)a0 context:(id)a1;
- (id)initWithDestination:(unsigned long long)a0 context:(id)a1 initialRestartState:(id)a2;
- (void)performTransitionWithCompletionBlock:(id /* block */)a0;

@end
