@class GCDeviceBattery, NSString;
@protocol GCBatteryXPCProxyRemoteClientEndpointInterface, GCBatteryXPCProxyServerEndpointDelegate, NSSecureCoding, _GCIPCEndpointConnection, _GCControllerComponentDescription, NSCopying, NSObject;

@interface GCBatteryXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCBatteryXPCProxyRemoteServerEndpointInterface> {
    id<GCBatteryXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id<_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    unsigned long long _pendingUpdates;
}

@property (readonly, nonatomic) id<_GCControllerComponentDescription> receiverDescription;
@property (weak, nonatomic) id<GCBatteryXPCProxyServerEndpointDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) GCDeviceBattery *battery;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInitialValue:(id)a0;
- (void).cxx_destruct;
- (void)invalidateConnection;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (BOOL)acceptClient:(id)a0 onConnection:(id)a1 error:(id *)a2;
- (void)fetchBatteryWithReply:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 initialValue:(id)a1;
- (void)invalidateClient;

@end
