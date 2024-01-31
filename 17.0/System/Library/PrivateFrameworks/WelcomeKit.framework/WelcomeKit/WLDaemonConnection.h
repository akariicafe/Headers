@class NSLock, NSXPCConnection;

@interface WLDaemonConnection : NSObject {
    NSLock *_daemonLock;
    NSXPCConnection *_daemonConn;
}

@property (copy, nonatomic) id /* block */ interruptionHandler;

- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (id)daemonConnection;
- (void).cxx_destruct;
- (void)invalidateDaemonConnection;

@end
