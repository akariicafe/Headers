@class NSXPCConnection, NSObject;
@protocol SLDActiveCallService, SLDCollaborationAttributionViewService, SLDServiceProxyDelegate, OS_dispatch_queue;

@interface SLDServiceProxy : NSObject

@property (readonly, nonatomic) id<SLDActiveCallService> activeCallService;
@property (readonly, nonatomic) id<SLDCollaborationAttributionViewService> collaborationAttributionViewService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyConcurrentQueue;
@property (retain, nonatomic) NSXPCConnection *conn;
@property (nonatomic) BOOL waitingForConnection;
@property (nonatomic) BOOL shouldAutoReconnect;
@property (nonatomic) BOOL connectionActive;
@property (nonatomic) Class serviceClass;
@property (weak, nonatomic) id<SLDServiceProxyDelegate> delegate;
@property (nonatomic) unsigned long long connectionRetryCount;

+ (id)proxyForServiceClass:(Class)a0 targetSerialQueue:(id)a1 delegate:(id)a2;

- (void)disconnect;
- (void)dealloc;
- (void)connect;
- (void)_connectionInvalidated;
- (id)description;
- (void).cxx_destruct;
- (id)remoteService;
- (id)synchronousRemoteService;
- (int)remoteProcessID;
- (void)_invalidateAndDestroyConnection;
- (void)_atomicConfigureWithNewConnection:(id)a0;
- (void)_establishNewConnection;
- (void)_notifyDelegateProxyDidConnect;
- (void)_notifyDelegateProxyDidDisconnect;
- (void)_receivedServiceConnection:(id)a0;
- (id)initWithServiceClass:(Class)a0 targetSerialQueue:(id)a1 delegate:(id)a2;
- (id)synchronousRemoteServiceWithErrorHandler:(id /* block */)a0;

@end
