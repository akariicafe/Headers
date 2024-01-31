@class CWFXPCProxy;

@interface CWFXPCProxyConnection : NSObject <NSXPCProxyCreating> {
    CWFXPCProxy *_XPCProxy;
    CWFXPCProxy *_synchronousXPCProxy;
}

@property (copy) id /* block */ invalidationHandler;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithForwardingTarget:(id)a0;

@end
