@class NSString, NSXPCInterface, NSXPCConnection;

@interface DUXPCClientHelpers : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _connectionLock;
    NSXPCConnection *_connection;
    NSString *_serviceName;
    NSXPCInterface *_allowListedServerInterface;
    id _clientExportedObject;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
}

- (void)_locked_establishConnection;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 whitelistedServerInterface:(id)a1 clientExportedObject:(id)a2 interruptionHandler:(id /* block */)a3 invalidationHandler:(id /* block */)a4;

@end
