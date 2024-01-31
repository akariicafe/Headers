@class NSXPCInterface, NSXPCConnection;

@interface GDXPCSysdiagnoseService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)diagnosticsWithError:(id *)a0;
- (id)entityRelevanceRankingSupplementalDiagnosticsWithError:(id *)a0;
- (id)entityResolutionSupplementalDiagnosticsWithError:(id *)a0;
- (id)entityTaggingSupplementalDiagnosticsWithError:(id *)a0;
- (void)locked_establishConnection;
- (id)viewsSupplementalDiagnosticsWithError:(id *)a0;

@end
