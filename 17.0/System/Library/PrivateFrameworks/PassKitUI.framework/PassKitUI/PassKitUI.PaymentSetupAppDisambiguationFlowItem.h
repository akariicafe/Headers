@interface PassKitUI.PaymentSetupAppDisambiguationFlowItem : NSObject <PKPaymentSetupBankAppDisambiguationViewControllerFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ linkedApplication;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)bankAppDisambiguationViewControllerDidManualEntry:(id)a0;
- (void)bankAppDisambiguationViewControllerDidSelectApp:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
