@class AKAppleIDAuthenticationInAppContext, UINavigationController, NSDictionary, ASWebAuthenticationSession, AKBasicLoginAlertController, AKInAppAuthenticationRemoteUIDelegate, RemoteUIController, NSString, AKProximityAuthViewController, RemoteUIControllerPreferences, AKBasicLoginViewController, PASUIDependentViewPresenter, NSError;

@interface AKInAppAuthenticationRemoteUIProvider : NSObject <PASUIDependentViewPresenterDelegate, AKBasicLoginControllerDelegate, ASWebAuthenticationPresentationContextProviding, AKInAppAuthenticationUIProvider> {
    AKBasicLoginAlertController *_basicLoginAlertController;
    AKBasicLoginViewController *_basicLoginViewController;
    UINavigationController *_navController;
    ASWebAuthenticationSession *_webAuthenticationSession;
    PASUIDependentViewPresenter *_pasViewPresenter;
    id /* block */ _proxAuthCompletion;
    NSDictionary *_proxAuthResults;
    NSError *_proxSetupError;
    BOOL _didDisableIdleTimer;
}

@property (weak, nonatomic) AKProximityAuthViewController *proximityAuthViewController;
@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) RemoteUIController *remoteUIController;
@property (retain, nonatomic) RemoteUIControllerPreferences *ruiPreferences;
@property (readonly, nonatomic) AKInAppAuthenticationRemoteUIDelegate *remoteUIControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void)_updateReason;
- (void)presentFidoAuthForContext:(id)a0 fidoContext:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_startAnimating;
- (id)_navController;
- (void)activateProximitySession:(id)a0 completion:(id /* block */)a1;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)a0;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)a0;
- (void)dismissProximityPairingUIWithCompletion:(id /* block */)a0;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentKeepUsingUIForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentNativeRecoveryUIWithContext:(id)a0 completion:(id /* block */)a1;
- (void)presentProximityBroadcastUIWithCompletion:(id /* block */)a0;
- (void)presentProximityPairingUIWithVerificationCode:(id)a0 completion:(id /* block */)a1;
- (void)presentProximityPinCodeUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)showProximityErrorWithCompletion:(id /* block */)a0;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (void)proximitySetupCompletedWithResult:(id)a0;
- (void)basicLoginControllerDidDismiss:(id)a0;
- (id)_actionsForLoginWithCompletion:(id /* block */)a0;
- (void)basicLoginControllerDidPresent:(id)a0;
- (void)_clearRemoteUIController;
- (void)_configureProximityAuthLoginOptionsWithCompletion:(id /* block */)a0;
- (void)_contextDidDismissLoginAlertController;
- (void)_contextDidPresentLoginController;
- (void)_contextWillDismissLoginAlertController;
- (void)_disableIdleTimerIfNeeded;
- (void)_enableIdleTimerIfNeeded;
- (id)_secondFactorActionsForAlert:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldShowAsView;
- (BOOL)_shouldUsePasswordDelegate;
- (void)_showMaxAttemptAlertWithCompletion:(id /* block */)a0;
- (void)_showPasswordFieldWithCompletion:(id /* block */)a0;
- (void)basicLoginControllerWillDismiss:(id)a0;
- (void)cleanUpBasicLoginWithCompletion:(id /* block */)a0;
- (void)completeProximityAuth;
- (void)presentBasicLoginUIAsAlertWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIAsViewWithCompletion:(id /* block */)a0;
- (void)presentIDPProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)presentLoginAlertUIAsViewWithError:(id)a0 title:(id)a1 message:(id)a2 waitForInteraction:(BOOL)a3 completion:(id /* block */)a4;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 waitForInteraction:(BOOL)a3 completion:(id /* block */)a4;
- (void)proximitySetupSelectedAccountType:(long long)a0;
- (void)setupPasscodeAndBiometricWithCompletion:(id /* block */)a0;
- (void)setupPerformAIDASignInWith:(id)a0 completion:(id /* block */)a1;

@end
