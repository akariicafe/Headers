@interface PassKitUI.PaymentSetupPurchaseServiceProductFlowItem : NSObject <PKPaymentSetupPurchaseServiceProviderProductItemsViewControllerFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ serviceProviderProduct;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
}

- (void)purchaseServiceProviderProductItemsViewController:(id)a0 didPerformPurchaseWithCredential:(id)a1;
- (void)purchaseServiceProviderProductItemsViewControllerDidTerminate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
