@class NSString, NSXPCConnection, NSXPCInterface, HMFProcessInfo;

@interface MTSXPCConnection : HMFObject <MTSXPCConnection>

@property (readonly) NSXPCConnection *xpcConnection;
@property (readonly) HMFProcessInfo *processInfo;
@property (readonly) int processIdentifier;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (readonly) id remoteObjectProxy;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (void)activate;
- (id)valueForEntitlement:(id)a0;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;

@end
