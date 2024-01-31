@interface ContactlessReaderUI.WeakTapUI : _TtCs12_SwiftObject <ProximityReader.TransactionUI> {
    void /* unknown type, empty encoding */ ui;
}

- (void)closeUI;
- (void)closePINUI;
- (void)closePINUIImmediate;
- (void)closeUIImmediate;
- (void)errorInDaemonWithError:(long long)a0;
- (void)notifyIncomingCall;
- (void)requiresCardPIN:(id)a0;
- (void)updateSessionEventWithSessionEvent:(long long)a0;
- (void)updateWithTransactionEvent:(long long)a0;
- (void)vasReadSuccessWithMerchantNames:(id)a0;

@end
