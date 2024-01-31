@interface PassKitUI.ProvisioningAppleCardFlowItem : NSObject <PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ credential;
    void /* unknown type, empty encoding */ accountFlowController;
    void /* unknown type, empty encoding */ _hasRemainingCredentialsToProvision;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
