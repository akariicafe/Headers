@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (id)init;
- (id)remoteObjectProxy:(id /* block */)a0;
- (id)connection;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;
- (void).cxx_destruct;

@end
