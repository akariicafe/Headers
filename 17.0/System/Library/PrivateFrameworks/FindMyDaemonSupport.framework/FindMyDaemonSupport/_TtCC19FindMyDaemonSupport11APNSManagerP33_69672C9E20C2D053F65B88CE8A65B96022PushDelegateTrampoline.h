@interface _TtCC19FindMyDaemonSupport11APNSManagerP33_69672C9E20C2D053F65B88CE8A65B96022PushDelegateTrampoline : NSObject <APSConnectionDelegate> {
    void /* unknown type, empty encoding */ target;
}

- (void)connectionDidReconnect:(id)a0;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forInfo:(id)a2;
- (void)connection:(id)a0 didReceiveURLToken:(id)a1 forInfo:(id)a2;
- (void)connection:(id)a0 didReceiveURLTokenError:(id)a1 forInfo:(id)a2;

@end
