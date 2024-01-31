@class NSXPCInterface, NSXPCConnection;

@interface GDXPCKnosisService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)executeIntent:(id)a0 error:(id *)a1;
- (id)executeKGQ:(id)a0 error:(id *)a1;
- (BOOL)iteratingExecuteKGQ:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)locked_establishConnection;

@end
