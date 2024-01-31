@class NSXPCConnection, NSHashTable, CKCoalescer, NSArray, NSString, NSMutableDictionary, NSOperationQueue, CKDProcessScopedClientProxy, NSPointerArray;

@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKPropertiesDescription, CKDXPCConnectionMuxer>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) unsigned long long keepAlive;
@property (readonly, nonatomic) CKCoalescer *activityCoalescer;
@property (retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy;
@property (retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference;
@property (retain, nonatomic) NSHashTable *sharedContainers;
@property (retain, nonatomic) NSPointerArray *allContainerPointers;
@property (retain, nonatomic) NSOperationQueue *systemAvailableQueue;
@property (readonly, nonatomic) NSArray *allContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)redactedDescription;
- (void)getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)tearDown;
- (void)keepOpen;
- (void)noteClientProcessScopedMetadata:(id)a0;
- (void)allowToClose;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)a0;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getDaemonTestServerManagerProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (id)containerFromSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 outError:(id *)a2;

@end
