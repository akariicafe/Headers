@class NSXPCInterface, NSXPCConnection;

@interface GDXPCCoordinationService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)graphUpdatedWithSource:(id)a0 error:(id *)a1;
- (void)locked_establishConnection;
- (BOOL)sourceUpdatedWithSourceType:(id)a0 sourceIdentifier:(id)a1 error:(id *)a2;
- (BOOL)streamUpdatedWithStreamName:(id)a0 isDelete:(BOOL)a1 error:(id *)a2;

@end
