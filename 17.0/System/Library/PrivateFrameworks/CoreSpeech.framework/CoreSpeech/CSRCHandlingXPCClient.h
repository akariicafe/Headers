@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CSRCHandlingXPCClient : NSObject

@property (retain, nonatomic) NSXPCConnection *rcXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) id remoteObjectProxy;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_getRemoteServiceProxyObject;
- (void)processRCWithId:(unsigned long long)a0 requestId:(id)a1 speechPackage:(id)a2 taskId:(id)a3 forceAccept:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void).cxx_destruct;
- (void)_createClientConnection;
- (void)getMitigationDecisionForRCIdWithCompletion:(unsigned long long)a0 requestId:(id)a1 completion:(id /* block */)a2;

@end
