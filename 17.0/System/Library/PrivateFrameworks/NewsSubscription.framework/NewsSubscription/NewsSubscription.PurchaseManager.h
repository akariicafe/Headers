@interface NewsSubscription.PurchaseManager : NSObject <AMSPurchaseResponseProtocol, FCPurchaseManagerDelegate> {
    void /* unknown type, empty encoding */ purchaseObservers;
    void /* unknown type, empty encoding */ transactionObservers;
    void /* unknown type, empty encoding */ internalPurchaseManager;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ purchaseContextEntriesManager;
    void /* unknown type, empty encoding */ metricsBuilder;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ sceneProvider;
}

- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)a0 ongoingPurchaseEntry:(id)a1;
- (void)purchaseFailedWithProductID:(id)a0 transactionState:(long long)a1 transactionError:(id)a2 ongoingPurchaseEntry:(id)a3;
- (void)purchaseSuccessWithProductID:(id)a0 transaction:(id)a1 chargeCurrencyCode:(id)a2 ongoingPurchaseEntry:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
