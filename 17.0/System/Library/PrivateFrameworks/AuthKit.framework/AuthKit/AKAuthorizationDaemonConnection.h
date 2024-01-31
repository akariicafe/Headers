@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAuthorizationClientProtocol;

@interface AKAuthorizationDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
    id<AKAuthorizationClientProtocol> _contextManager;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)_connection;
- (id)init;
- (void)dealloc;
- (void)_connectionInvalidationHandler;
- (id)initWithListenerEndpoint:(id)a0 exportedInterface:(id)a1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_connectionInterruptionHandler;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
