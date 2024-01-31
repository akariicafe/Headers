@class NSString, NSXPCConnection;

@interface RPCompanionLinkClientDaemonConnection_XPC : NSObject <RPDaemonConnection>

@property (retain, nonatomic) NSXPCConnection *cnx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
