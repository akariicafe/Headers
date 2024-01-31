@interface PassKitUI.ProvisioningAppleBalanceCredentialFlowItem : NSObject <PKPaymentProvisioningViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ setupController;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)provisioningViewController:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
