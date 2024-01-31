@interface CDPUIDeviceToDeviceEncryptionUIProviderImp : NSObject <CDPUIDeviceToDeviceEncryptionUIProvider>

@property (copy, nonatomic) id /* block */ cancelActionHandler;
@property (copy, nonatomic) id /* block */ continueActionHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelTapped:(id)a0;
- (void)continueTapped:(id)a0;
- (id)_upgradeAlertControllerWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (id)_upgradeCardUINavigationControllerWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (id)_upgradeCardUIViewControllerWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (id)_upgradeViewControllerWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)promptForCancelWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)promptForUpgradeWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)promptIneligibilityWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;

@end
