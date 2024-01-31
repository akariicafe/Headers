@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_connectionInvalidated;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)connectionEstablished;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_connectionEstablished;
- (id)exportedInterface;
- (void)onqueue_invalidate;
- (id)remoteObjectInterface;
- (void)invalidated;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_interrupted;
- (void)onqueue_activate;
- (void)onqueue_invalidated;
- (id)init;
- (void)_activate;
- (void)dealloc;
- (void)interrupted;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)_invalidate;
- (void)onqueue_ensureConnectionEstablished;
- (void).cxx_destruct;
- (id)machServiceName;

@end
