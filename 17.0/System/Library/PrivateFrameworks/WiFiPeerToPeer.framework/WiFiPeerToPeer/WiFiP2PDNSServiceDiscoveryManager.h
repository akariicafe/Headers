@class NSString, NSMutableArray, WiFiP2PXPCConnection;

@interface WiFiP2PDNSServiceDiscoveryManager : NSObject <WiFiP2PDNSServiceDiscoveryXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    BOOL _useWiFiAware;
    id /* block */ _serviceCallback;
    NSMutableArray *_registeredServices;
    WiFiP2PXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (id)exportedObject;
- (void)handleEventType:(unsigned long long)a0 keyData:(id)a1 valueData:(id)a2;
- (id)initUsingWiFiAware:(BOOL)a0 serviceCallback:(id /* block */)a1;
- (void)startServiceDiscoveryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopServiceDiscoveryWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)handleConnectionEstablishedWithProxy:(id)a0;
- (void)startServiceDiscoveryWithConfiguration:(id)a0;

@end
