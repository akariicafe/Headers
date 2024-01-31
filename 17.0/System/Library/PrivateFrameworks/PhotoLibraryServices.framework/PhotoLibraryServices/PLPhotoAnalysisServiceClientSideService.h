@class NSXPCInterface, NSXPCConnection;
@protocol NSXPCProxyCreating;

@interface PLPhotoAnalysisServiceClientSideService : NSObject <NSXPCProxyCreating> {
    NSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    id /* block */ _instantiationBlock;
    id<NSXPCProxyCreating> _service;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteInterface:(id)a1 instantiationBlock:(id /* block */)a2;
- (void)remoteServiceProxyWithErrorHandler:(id /* block */)a0 reply:(id /* block */)a1;
- (id)synchronousRemoteServiceProxyWithErrorHandler:(id /* block */)a0;

@end
