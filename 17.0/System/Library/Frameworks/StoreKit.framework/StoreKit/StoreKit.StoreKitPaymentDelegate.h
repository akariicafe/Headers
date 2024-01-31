@interface StoreKit.StoreKitPaymentDelegate : SwiftNativeNSObject <SKPaymentDelegateProtocol> {
    void /* unknown type, empty encoding */ handler;
}

- (id)init;
- (void)handleEngagementRequest:(id)a0 replyBlock:(id /* block */)a1;
- (void)shouldContinueTransactionWithNewStorefront:(id)a0 replyBlock:(id /* block */)a1;

@end
