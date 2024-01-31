@interface PassKitUI.PaymentSetupProductTypeFlowItem : NSObject <PKPaymentSetupChooseProductTypeViewControllerFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)chooseProductTypeViewController:(id)a0 didPerformPurchaseWithCredential:(id)a1;
- (void)chooseProductTypeViewController:(id)a0 didSelectServiceProducts:(id)a1;
- (void)chooseProductTypeViewControllerDidSelectManualEntry:(id)a0;
- (void)chooseProductTypeViewControllerDidTerminate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
