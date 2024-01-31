@class NSXPCInterface, NSXPCConnection;

@interface GDXPCKnowledgeConstructionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)checkInWithError:(id *)a0;
- (void)locked_establishConnection;
- (BOOL)runFullPipelineWithReason:(unsigned long long)a0 error:(id *)a1;
- (BOOL)stopPipelineWithError:(id *)a0;

@end
