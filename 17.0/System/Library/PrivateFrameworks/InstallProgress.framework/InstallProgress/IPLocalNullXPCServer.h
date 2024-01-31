@class NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface IPLocalNullXPCServer : NSObject <NSXPCListenerDelegate, IPXPCServerInterface> {
    NSXPCListener *_listener;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)actionBarrier:(id /* block */)a0;
- (void)getActiveInstallations:(id /* block */)a0;
- (void)getAllInstallableStates:(id /* block */)a0;
- (void)getProgressForIdentity:(id)a0 completion:(id /* block */)a1;
- (id)newClientConnection;
- (void)registerAsProgressObserver:(id /* block */)a0;

@end
