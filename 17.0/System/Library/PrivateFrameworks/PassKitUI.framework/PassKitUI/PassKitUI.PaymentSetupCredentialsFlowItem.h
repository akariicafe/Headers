@interface PassKitUI.PaymentSetupCredentialsFlowItem : NSObject <PKPaymentSetupCredentialsViewControllerFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ credentials;
    void /* unknown type, empty encoding */ allowManualEntry;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ _privacyDisclosures;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)credentialsViewController:(id)a0 didSelectCredentials:(id)a1;
- (void)credentialsViewControllerDidSelectManualEntry:(id)a0;
- (void)credentialsViewControllerDidSelectSecondaryManualEntry:(id)a0;
- (void)credentialsViewControllerDidTerminate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
