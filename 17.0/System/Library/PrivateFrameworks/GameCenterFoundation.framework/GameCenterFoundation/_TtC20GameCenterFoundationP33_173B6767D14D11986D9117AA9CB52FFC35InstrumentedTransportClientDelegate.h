@interface _TtC20GameCenterFoundationP33_173B6767D14D11986D9117AA9CB52FFC35InstrumentedTransportClientDelegate : _TtCs12_SwiftObject <GKTransportClientDelegate> {
    void /* unknown type, empty encoding */ wrapped;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ transportContext;
}

- (void)connectionDidChangeWithState:(int)a0 playerID:(id)a1;
- (void)connectionDidFailWithError:(id)a0;
- (void)relayDidReceivePushData:(id)a0 completionHandler:(id /* block */)a1;
- (void)transportDidFailWithError:(id)a0;
- (void)transportDidReceivePacket:(id)a0 fromPlayerID:(id)a1 remoteRecipientID:(id)a2;
- (void)transportDidUpdateWithInfo:(id)a0;

@end
