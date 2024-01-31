@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

- (id)daemon;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)connection;
- (void).cxx_destruct;

@end
