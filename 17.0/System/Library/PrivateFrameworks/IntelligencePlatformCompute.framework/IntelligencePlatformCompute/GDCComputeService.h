@class NSXPCInterface, NSXPCConnection;

@interface GDCComputeService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)stopWithError:(id *)a0;
- (void)locked_establishConnection;
- (id)updateGroupWithName:(id)a0 namesAndRequests:(id)a1 error:(id *)a2;
- (id)updateViewWithName:(id)a0 viewUpdateSourceRequests:(id)a1 error:(id *)a2;

@end
