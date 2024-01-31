@class NSString, NSMutableSet;
@protocol MTSXPCDeviceSetupClientProxyDelegate, MTSDevicePairingServerInterface, MTSSystemCommissionerPairingServerInterface, MTSXPCListener, MTSAuthorizationServerInterface;

@interface MTSXPCServer : NSObject <MTSXPCListenerDelegate, MTSXPCClientProxyDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<MTSXPCListener> listener;
@property (readonly) id /* block */ clientProxyFactory;
@property (readonly) NSMutableSet *clientProxies;
@property (weak) id<MTSDevicePairingServerInterface> devicePairingServer;
@property (weak) id<MTSXPCDeviceSetupClientProxyDelegate> deviceSetupServer;
@property (weak) id<MTSSystemCommissionerPairingServerInterface> systemCommissionerPairingServer;
@property (weak) id<MTSAuthorizationServerInterface> authorizationServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)clientProxy:(id)a0 performDeviceSetupUsingRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)showRestrictedCharacteristicsAccessWarningAlertWithClientProxy:(id)a0;
- (void)clientProxy:(id)a0 checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(id /* block */)a1;
- (void)clientProxy:(id)a0 fetchDevicePairingsForSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)clientProxy:(id)a0 fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a1;
- (void)clientProxy:(id)a0 openCommissioningWindowForSystemCommissionerPairingUUID:(id)a1 duration:(double)a2 completionHandler:(id /* block */)a3;
- (void)clientProxy:(id)a0 readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)clientProxy:(id)a0 removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)clientProxy:(id)a0 removeDevicePairingWithUUID:(id)a1 forSystemCommissionerPairingUUID:(id)a2 completionHandler:(id /* block */)a3;
- (void)clientProxy:(id)a0 removeSystemCommissionerPairingWithUUID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithListener:(id)a0 clientProxyFactory:(id /* block */)a1;

@end
