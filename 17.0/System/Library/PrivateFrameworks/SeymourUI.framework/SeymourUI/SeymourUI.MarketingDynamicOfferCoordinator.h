@interface SeymourUI.MarketingDynamicOfferCoordinator : NSObject <AMSUIDynamicViewControllerDelegate> {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ purchaseHandler;
}

- (id)init;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;

@end
