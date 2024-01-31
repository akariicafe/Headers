@class SBFUserAuthenticationController, SBBacklightController, SOSManager, NSString, SBLockScreenManager;
@protocol BSInvalidatable;

@interface SBSOSEventHandler : NSObject <SOSManagerClientObserver> {
    id _coversheetObserverToken;
    id<BSInvalidatable> _disableSTARAssertion;
}

@property (nonatomic, getter=_isRunning, setter=_setRunning:) BOOL running;
@property (readonly, nonatomic, getter=_authenticationController) SBFUserAuthenticationController *authenticationController;
@property (readonly, nonatomic, getter=_backlightController) SBBacklightController *backlightController;
@property (readonly, nonatomic, getter=_sosManager) SOSManager *sosManager;
@property (readonly, nonatomic, getter=_lockScreenManager) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic, getter=isSOSActive) BOOL SOSActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didDismissSOSBeforeSOSCall:(long long)a0;
- (id)init;
- (void)run;
- (void)dealloc;
- (void)didUpdateCurrentSOSInitiationState:(long long)a0;
- (void).cxx_destruct;
- (void)_forceBioAuthenticationLockoutIfAvailableWithSource:(int)a0 showingPasscode:(BOOL)a1;

@end
