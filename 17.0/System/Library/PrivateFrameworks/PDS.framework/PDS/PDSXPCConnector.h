@class NSString, NSError;
@protocol PDSRemoteInternal, PDSXPCInterfaceVendor, PDSXPCConnectionVendor, PDSXPCHandshake, PDSXPCConnection, PDSRemote, NSXPCProxyCreating;

@interface PDSXPCConnector : NSObject <PDSRemoteVendor>

@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) id<PDSXPCConnection> XPCConnection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) id<PDSXPCHandshake, NSXPCProxyCreating> handshakeProxy;
@property (retain, nonatomic) id<PDSRemote, NSXPCProxyCreating> remoteObject;
@property (retain, nonatomic) id<PDSRemote> syncRemoteObject;
@property (retain, nonatomic) id<PDSRemoteInternal, NSXPCProxyCreating> internalRemoteObject;
@property (retain, nonatomic) id<PDSRemoteInternal> syncInternalRemoteObject;
@property (retain, nonatomic) NSError *connectionError;
@property (retain, nonatomic) id<PDSXPCInterfaceVendor> interfaceVendor;
@property (retain, nonatomic) id<PDSXPCConnectionVendor> connectionVendor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClientID:(id)a0;
- (id)synchronousInternalRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)validateConnectionWithError:(id *)a0;
- (id)remoteObjectProxyWithError:(id *)a0;
- (id)initWithClientID:(id)a0 interfaceVendor:(id)a1 connectionVendor:(id)a2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_lockedRemoteObject;
- (id)internalRemoteObjectProxyWithError:(id *)a0;
- (id)_lockedXPCConnection;
- (void).cxx_destruct;
- (id)_lockedPerformConnectWithBlock:(id /* block */)a0;
- (id)_genericProxyWithError:(id *)a0 remoteBlock:(id /* block */)a1;
- (id)_lockedRemoteInternalObject;
- (id)_genericSyncProxyWithErrorHandler:(id /* block */)a0 localStorage:(id *)a1 remoteBlock:(id /* block */)a2;

@end
