@class NSXPCInterface, NSXPCConnection;

@interface GDXPCLighthouseService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)collectDBStats:(id *)a0;
- (id)collectDBStatus:(id *)a0;
- (void)locked_establishConnection;

@end
