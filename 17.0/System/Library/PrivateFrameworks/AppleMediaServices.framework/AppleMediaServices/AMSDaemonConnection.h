@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>

@property (retain, nonatomic) NSXPCConnection *sharedConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (readonly, nonatomic) NSMutableArray *interruptionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dismissQRDialogServiceProxy;
- (id)init;
- (void)dealloc;
- (id)pushNotificationService;
- (id)fraudReportServiceProxy;
- (void)_handleInterruption;
- (id)accountCachedServerDataService;
- (id)keychainServiceProxy;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (id)cookieServiceProxy;
- (void).cxx_destruct;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (void)_handleInvalidation;
- (void)_initializeConnection;
- (id)purchaseServiceProxy;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (id)accountSignOutServiceProxy;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (void)attemptResumeIfRequired;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (void)addInterruptionHandler:(id /* block */)a0;

@end
