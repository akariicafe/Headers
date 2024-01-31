@class UINavigationController, NSString, NSDictionary, UIViewController;

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext {
    NSDictionary *_overrideFirstActionSignal;
    UIViewController *_topViewControllerOnLoadStart;
}

@property (weak, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) NSString *usernameForCreating;
@property (readonly, nonatomic) NSString *passwordForCreating;

- (id)init;
- (void).cxx_destruct;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;

@end
