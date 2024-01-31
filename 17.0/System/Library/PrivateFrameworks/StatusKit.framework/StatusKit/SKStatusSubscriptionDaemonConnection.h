@class NSXPCConnection, NSXPCInterface;
@protocol SKStatusSubscriptionDaemonDelegateProtocol, SKStatusSubscriptionConnectionDelegateProtocol;

@interface SKStatusSubscriptionDaemonConnection : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *daemonXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonDelegateXPCInterface;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKStatusSubscriptionDaemonDelegateProtocol> subscriptionDaemonDelegate;
@property (weak, nonatomic) id<SKStatusSubscriptionConnectionDelegateProtocol> connectionDelegate;

+ (id)logger;

- (void)setXPCConnection:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_xpcConnectionOptions;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;
- (id)initWithSubscriptionDaemonDelegate:(id)a0 connectionDelegate:(id)a1;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;

@end
