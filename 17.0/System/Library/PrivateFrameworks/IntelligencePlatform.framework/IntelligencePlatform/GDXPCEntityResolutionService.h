@class NSXPCInterface, NSXPCConnection;

@interface GDXPCEntityResolutionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)generateMentionsForQuery:(id)a0 error:(id *)a1;
- (void)locked_establishConnection;
- (id)submitCollectionQuery:(id)a0 withError:(id *)a1;
- (id)submitQuery:(id)a0 withError:(id *)a1;
- (BOOL)warmupForMode:(long long)a0 error:(id *)a1;

@end
