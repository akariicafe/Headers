@class SBSecureAppManager, NSString, CSCoverSheetViewController, SBInProcessSecureAppAction;

@interface SBDashBoardApplicationLauncher : NSObject <CSExternalEventHandling, SBLockScreenApplicationLaunching, CSApplicationLaunching, CSCameraPrewarming> {
    SBInProcessSecureAppAction *_secureAppAction;
    BOOL _cameraIsPrewarming;
    BOOL _cameraPrewarmSucceeded;
}

@property (retain, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (weak, nonatomic) SBSecureAppManager *secureAppManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)dealloc;
- (void)_activateAppSceneBelowDashBoard:(id)a0 secureAppType:(unsigned long long)a1 withActions:(id)a2 interactive:(BOOL)a3 completion:(id /* block */)a4;
- (void)_attemptToUnlockToCameraCompletion:(id /* block */)a0;
- (void)_prewarmCamera;
- (void)_presentApplicationSceneEntity:(id)a0 withResult:(id /* block */)a1;
- (BOOL)_backgroundLaunchCamera;
- (void)_coolCameraIfNecessary;
- (BOOL)handleTransitionRequest:(id)a0;
- (void)_reallyActivateAppSceneWithEntity:(id)a0 interactive:(BOOL)a1 withCompletion:(id /* block */)a2;
- (BOOL)_canHandleTransitionRequest:(id)a0 outActivatingSceneEntity:(id *)a1;
- (void)conformsToCSEventHandling;
- (void)_activateAppWithURL:(id)a0;
- (void).cxx_destruct;
- (void)launchQuickNote;
- (void)notePrewarmRequestEnded;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)prewarmCameraHardware:(BOOL)a0 andApplication:(BOOL)a1;
- (void)_activateCameraAnimated:(BOOL)a0 actions:(id)a1 completion:(id /* block */)a2;
- (BOOL)handleEvent:(id)a0;
- (void)notePrewarmRequestWasUseful;

@end
