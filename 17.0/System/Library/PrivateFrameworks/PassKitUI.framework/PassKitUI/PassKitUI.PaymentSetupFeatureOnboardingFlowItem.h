@interface PassKitUI.PaymentSetupFeatureOnboardingFlowItem : NSObject <PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ payLaterSetupFlowController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ viewController;
}

- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
