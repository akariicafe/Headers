@class NSXPCInterface, NSXPCConnection;

@interface GDXPCViewService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)accessTokenForFeaturesWithIsSandboxed:(BOOL)a0 error:(id *)a1;
- (id)accessTokenForViewName:(id)a0 isSandboxed:(BOOL)a1 error:(id *)a2;
- (void)locked_establishConnection;
- (BOOL)performUpdateForViewNames:(id)a0 includeDependencies:(BOOL)a1 error:(id *)a2;
- (BOOL)reportSQLiteErrorForViewName:(id)a0 sqliteErrorCode:(long long)a1 error:(id *)a2;
- (BOOL)reportUnknownErrorForViewName:(id)a0 error:(id *)a1;

@end
