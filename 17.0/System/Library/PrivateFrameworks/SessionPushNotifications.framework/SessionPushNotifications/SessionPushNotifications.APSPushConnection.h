@interface SessionPushNotifications.APSPushConnection : NSObject <APSConnectionDelegate> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ delegate;
}

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forInfo:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
