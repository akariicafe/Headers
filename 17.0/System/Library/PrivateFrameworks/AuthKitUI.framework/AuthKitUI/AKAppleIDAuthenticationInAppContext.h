@class NSString, UIViewController, AKNativeAccountRecoveryController;
@protocol AKAppleIDAuthenticationInAppContextAlertDelegate, CDPStateUIProvider, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKAppleIDAuthenticationInAppContextDelegate, AKInAppAuthenticationUIProvider;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <RemoteUIControllerDelegate, AKAppleIDAuthenticationUIProvider> {
    AKNativeAccountRecoveryController *_nativeRecoveryController;
}

@property (nonatomic, getter=isPresentingServerUI) BOOL presentingServerUI;
@property (weak, nonatomic) id<AKAppleIDAuthenticationInAppContextAlertDelegate> alertDelegate;
@property (retain, nonatomic) id<AKInAppAuthenticationUIProvider> inAppAuthUIProvider;
@property (retain, nonatomic, setter=_setCdpUiProvider:) id<CDPStateUIProvider> cdpUiProvider;
@property (weak, nonatomic, setter=_setPasswordDelegate:) id<AKAppleIDAuthenticationInAppContextPasswordDelegate> _passwordDelegate;
@property (nonatomic) BOOL forceInlinePresentation;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id<AKAppleIDAuthenticationInAppContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void)presentFidoAuthForContext:(id)a0 fidoContext:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)completeWithError:(id)a0;
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
- (void)remoteUIController:(id)a0 didDismissModalNavigationWithObjectModels:(id)a1;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (id)remoteUIStyle;
- (void)willPresentModalNavigationController:(id)a0;
- (void)_assertValidPresentingViewController;
- (void)_cleanUpBasicLoginWithCompletion:(id /* block */)a0;
- (void)_contextDidEndPresentingSecondaryUI;
- (void)_contextWillBeginPresentingSecondaryUIWithCompletion:(id /* block */)a0;
- (void)_dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)_handleBackButtonTap:(id)a0;
- (void)_presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 waitForInteraction:(BOOL)a3 completion:(id /* block */)a4;
- (void)_presentTooManyLoginAttemptsViewWithCompletion:(id /* block */)a0;
- (id)_remoteUIControllerDelegate;
- (id)serverDataHarvester;

@end
