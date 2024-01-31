@interface StoreKit.TransactionReceiver : SwiftNativeNSObject <SKTransactionReceiverProtocol> {
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ logKey;
}

- (id)init;
- (void)receivedTransactions:(id)a0;

@end
