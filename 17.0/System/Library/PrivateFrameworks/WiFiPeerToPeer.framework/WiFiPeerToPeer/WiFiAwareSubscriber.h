@class WiFiAwareSubscribeConfiguration, NSString, WiFiP2PXPCConnection, NSNumber;
@protocol WiFiAwareSubscriberDelegate;

@interface WiFiAwareSubscriber : NSObject <WiFiAwareSubscriberXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    NSNumber *_subscribeID;
}

@property (weak, nonatomic) id<WiFiAwareSubscriberDelegate> delegate;
@property (readonly, nonatomic) WiFiAwareSubscribeConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)start;
- (id)exportedObject;
- (void)stop;
- (void)handleError:(long long)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 toPeerAddress:(id)a1 withInstanceID:(unsigned char)a2 completionHandler:(id /* block */)a3;
- (void)subscribeStartedWithInstanceID:(unsigned char)a0;
- (void)subscribeFailedToStartWithError:(long long)a0;
- (void)subscribeLostDiscoveryResultForPublishID:(unsigned char)a0 address:(id)a1;
- (void)subscribeReceivedDiscoveryResult:(id)a0;
- (void)subscribeReceivedMessage:(id)a0 fromPublishID:(unsigned char)a1 address:(id)a2;
- (void)subscribeTerminatedWithReason:(long long)a0;

@end
