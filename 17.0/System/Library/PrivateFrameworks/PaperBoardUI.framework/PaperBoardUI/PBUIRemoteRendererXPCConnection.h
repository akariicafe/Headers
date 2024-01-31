@class NSXPCListenerEndpoint, NSString, NSXPCConnection;

@interface PBUIRemoteRendererXPCConnection : NSObject <PBUIRemoteRendererConnection> {
    NSString *_serviceName;
    NSXPCListenerEndpoint *_endpoint;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _connectionLock;
    NSXPCConnection *_lock_connection;
}

@property (class, readonly, nonatomic) PBUIRemoteRendererXPCConnection *defaultConnection;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initToEndpoint:(id)a0;
- (id)connectionActivateIfNeededWithError:(out id *)a0;
- (id)initToServiceName:(id)a0;

@end
