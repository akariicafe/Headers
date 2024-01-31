@class PKGroupsController, PKPaymentProvisioningController, NSString;
@protocol PKPaymentSetupDelegate;

@interface PKPaymentSetupNavigationController : PKPaymentSetupDismissibleNavigationController <PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable> {
    BOOL _rootViewControllerNeedsConfiguration;
}

@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) PKGroupsController *groupsController;
@property (weak, nonatomic) id<PKPaymentSetupDelegate> setupDelegate;
@property (nonatomic) BOOL showsWelcomeViewController;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerForPresentingPaymentError:(id)a0;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (long long)_preferredModalPresentationStyle;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)cancelButtonPressed:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_reconfigureRootViewControllerWithCompletion:(id /* block */)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1;
- (void)viewController:(id)a0 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 withShouldContinue:(BOOL)a2 error:(id)a3;
- (void)viewController:(id)a0 didExitPasscodeUpgradeWithShouldContinue:(BOOL)a1 error:(id)a2;
- (void)viewController:(id)a0 didShowProvisioningError:(id)a1;
- (void)viewController:(id)a0 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 completion:(id /* block */)a2;
- (void)viewController:(id)a0 requestPasscodeUpgradeWithCompletion:(id /* block */)a1;
- (void)viewController:(id)a0 requestPresentPassUniqueIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)viewController:(id)a0 requestsReturnToPresentationMarker:(unsigned long long)a1 reset:(BOOL)a2;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)viewControllerDidShowEligibilityIssue:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
