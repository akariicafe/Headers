@interface PassKitUI.ProvisioningAppleBalanceHeroFlowItem : NSObject <PKPaymentSetupViewControllerDelegate, PKAppleBalanceExplanationViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ setupController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)appleBalanceExplanationViewControllerDidSelectContinue:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
