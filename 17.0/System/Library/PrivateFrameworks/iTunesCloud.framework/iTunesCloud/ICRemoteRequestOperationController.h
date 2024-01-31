@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICRemoteRequestOperationController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _numberOfActiveRequests;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_source> *_clientConnectionInvalidationTimer;
}

@property (class, readonly, nonatomic) ICRemoteRequestOperationController *sharedRemoteRequestOperationController;

- (id)_clientConnection;
- (void)performRemoteRequestOperationWithExecutionContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)_init;
- (void)_clientConnectionInvalidationTimerDidExpire;
- (void)_cancelClientConnectionInvalidationTimer;
- (void)_didEndExecutingRemoteRequestOperation;
- (void).cxx_destruct;
- (void)_invalidateClientConnection;
- (void)_scheduleInvalidationOfClientConnection;
- (void)_willBeginExecutingRemoteRequestOperation;

@end
