@class NSXPCListener, NSString, NSArray, SVXQueuePerformer, AFSiriActivationListener, SVXVirtualDevice;

@interface SVXDaemon : NSObject <NSXPCListenerDelegate, AFSiriActivationListenerDelegate, SVXClientServiceServerConnectionDelegate> {
    BOOL _isRunning;
    SVXQueuePerformer *_clientServiceQueuePerformer;
    NSXPCListener *_clientServiceListener;
    AFSiriActivationListener *_siriActivationListener;
    NSArray *_platformDependencies;
    SVXVirtualDevice *_hostVirtualDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stop;
- (void).cxx_destruct;
- (void)siriActivationListener:(id)a0 activateWithRequestInfo:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)siriActivationListener:(id)a0 deactivateForReason:(long long)a1 options:(unsigned long long)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)siriActivationListener:(id)a0 myriadEventWithRequestInfo:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)siriActivationListener:(id)a0 prewarmWithRequestInfo:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)_enumerateVirtualDevicesUsingBlock:(id /* block */)a0;
- (void)_getVirtualDeviceForActivationContext:(id)a0 completion:(id /* block */)a1;
- (void)_getVirtualDeviceForInstanceInfo:(id)a0 completion:(id /* block */)a1;
- (void)clientServiceServerConnectionDidInvalidate:(id)a0;
- (BOOL)handleClientServiceXPCConnection:(id)a0;
- (void)startWithPlatformDependencies:(id)a0;

@end
