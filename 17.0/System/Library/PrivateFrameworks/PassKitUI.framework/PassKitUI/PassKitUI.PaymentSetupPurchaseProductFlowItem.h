@interface PassKitUI.PaymentSetupPurchaseProductFlowItem : NSObject <PKPaymentSetupPurchaseViewControllerFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ _isManualProvisioning;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)purchaseViewController:(id)a0 didPerformPurchaseWithCredential:(id)a1;
- (void)purchaseViewControllerDidRequestTransferBalance:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
