@class SBRemoteTransientOverlaySessionManager, NSString, SBSpuriousScreenUndimmingAssertion, SBPasscodeEntryTransientOverlayViewController, BSServiceConnectionListener, SBLockScreenManager, SBFAuthenticationAssertion, NSMutableSet, SBFUserAuthenticationController, FBServiceClientAuthenticator, BLSAssertion, SBMainWorkspace;
@protocol SBFLockOutStatusProvider, SBAlwaysOnPolicy, SBFAuthenticationAssertionProviding;

@interface SBLockScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSLockScreenServiceServerInterface, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBAlwaysOnPolicy> {
    SBLockScreenManager *_lockScreenManager;
    SBMainWorkspace *_mainWorkspace;
    id<SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
    SBRemoteTransientOverlaySessionManager *_remoteTransientOverlaySessionManager;
    FBServiceClientAuthenticator *_requestDeviceUnlockAuthenticator;
    BSServiceConnectionListener *_listener;
    NSMutableSet *_connections;
    NSMutableSet *_connectionsPreventingPasscodeLock;
    SBFAuthenticationAssertion *_preventPasscodeLockAssertion;
    NSMutableSet *_connectionsPreventingSpuriousScreenUndim;
    SBSpuriousScreenUndimmingAssertion *_preventSpuriousScreenUndimAssertion;
    BLSAssertion *_preventSpuriousScreenUndimDisableAlwaysOnAssertion;
    NSString *_passcodeTitle;
    NSString *_passcodeSubtitle;
    id /* block */ _passcodeCheckCompletion;
}

@property (retain, nonatomic) SBPasscodeEntryTransientOverlayViewController *passcodeEntryTransientOverlayViewController;
@property (retain, nonatomic) SBFUserAuthenticationController *userAuthController;
@property (retain, nonatomic) id<SBFLockOutStatusProvider> lockOutController;
@property (readonly, nonatomic) id<SBAlwaysOnPolicy> alwaysOnPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive;
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id analyticsPolicyValue;

- (void)_setPasscodeVisible:(BOOL)a0 animated:(BOOL)a1;
- (id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;
- (BOOL)passcodeEntryTransientOverlayViewController:(id)a0 authenticatePasscode:(id)a1;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)passcodeEntryTransientOverlayViewControllerStatusText;
- (void)activateAlwaysOnPolicy;
- (void).cxx_destruct;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (oneway void)launchEmergencyDialerWithCompletion:(id /* block */)a0;
- (oneway void)lockDeviceAnimated:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)requestPasscodeCheckUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)requestPasscodeUnlockUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)setPreventPasscodeLock:(id)a0;
- (oneway void)setPreventSpuriousScreenUndim:(id)a0;
- (id)initWithLockScreenManager:(id)a0 workspace:(id)a1 authenticationAssertionProvider:(id)a2 remoteTransientOverlaySessionManager:(id)a3;
- (void)requestPasscodeCheckUIForClient:(id)a0 options:(id)a1 description:(id)a2 withCompletion:(id /* block */)a3;
- (void)requestPasscodeUnlockUIForClient:(id)a0 options:(id)a1 description:(id)a2 withCompletion:(id /* block */)a3;

@end
