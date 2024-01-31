@class NSString, RUIStyle;

@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext <RemoteUIControllerDelegate>

@property (retain, nonatomic) RUIStyle *remoteUIStyle;
@property (retain, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)willPresentModalNavigationController:(id)a0;

@end
