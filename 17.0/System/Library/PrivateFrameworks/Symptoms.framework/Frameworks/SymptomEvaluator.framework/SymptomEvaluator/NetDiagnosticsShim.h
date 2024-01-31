@class NSString, NSObject;
@protocol NetDiagnosticsShimDelegate, OS_xpc_object, OS_dispatch_queue;

@interface NetDiagnosticsShim : NSObject {
    NSObject<OS_xpc_object> *_netDiagServiceConnection;
    NSObject<OS_xpc_object> *_netDiagNotificationListener;
    NSObject<OS_xpc_object> *_netDiagNotificationConnection;
    NSObject<OS_dispatch_queue> *_netDiagConnQueue;
    NSObject<OS_dispatch_queue> *_netDiagMsgQueue;
}

@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) id<NetDiagnosticsShimDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidateConnections;
- (BOOL)stopNetDiagnosticTaskWithReply:(id /* block */)a0;
- (id)_connectionForServiceNamed:(const char *)a0 queue:(id)a1 connectionInvalidHandler:(id /* block */)a2;
- (void)connectToNetDiagnosticsd;
- (id)createNotificationListener;
- (id)initWithTaskName:(id)a0 queue:(id)a1;
- (BOOL)netDiagnosticTaskStatusWithReply:(id /* block */)a0;
- (void)sendNotificationListener;
- (BOOL)startNetDiagnosticTaskWithOptions:(id)a0 reply:(id /* block */)a1;

@end
