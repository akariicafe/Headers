@class NSXPCConnection, NSXPCInterface;
@protocol SKStatusPublishingDaemonDelegateProtocol, SKStatusPublishingConnectionDelegateProtocol;

@interface SKStatusPublishingDaemonConnection : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *daemonXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonDelegateXPCInterface;

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKStatusPublishingDaemonDelegateProtocol> publishingDaemonDelegate;
@property (weak, nonatomic) id<SKStatusPublishingConnectionDelegateProtocol> connectionDelegate;

+ (id)logger;

- (void)setXPCConnection:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_xpcConnectionOptions;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;
- (id)initWithPublishingDaemonDelegate:(id)a0 connectionDelegate:(id)a1;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;

@end
