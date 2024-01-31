@class AXAccessQueue, NSString, BSProcessDeathWatcher, BSServiceConnectionListener, AXUIMessageSender, NSMutableDictionary, AXUIDisplayManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AXUIServiceManagerDelegate;

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate, BSServiceConnectionListenerDelegate, AccessibilityBoardServices_ServerProtocol> {
    BSProcessDeathWatcher *_springBoardReaper;
    BSServiceConnectionListener *_connectionListener;
}

@property (retain, nonatomic) NSMutableArray *pausedConnections;
@property (retain, nonatomic) AXAccessQueue *resumingConnectionsQueue;
@property (retain, nonatomic) NSMutableDictionary *entitlementsCheckers;
@property (retain, nonatomic) AXAccessQueue *entitlementsCheckersAccessQueue;
@property (retain, nonatomic) AXUIMessageSender *messageSender;
@property (retain, nonatomic) NSMutableArray *serviceContexts;
@property (retain, nonatomic) AXAccessQueue *servicesAccessQueue;
@property (nonatomic) unsigned long long lastUsedServiceIdentifier;
@property (nonatomic) BOOL shouldAllowServicesToProcessMessages;
@property (retain, nonatomic) AXUIDisplayManager *displayManager;
@property (retain, nonatomic) NSMutableDictionary *transactions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionsQueue;
@property (weak, nonatomic) id<AXUIServiceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_releaseSharedServiceManager;
+ (id)sharedServiceManager;

- (void)_processXPCObject:(id)a0 context:(id)a1;
- (id)_sendSynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 toClientWithMessenger:(id)a2 error:(id *)a3;
- (BOOL)_start;
- (id)init;
- (void)dealloc;
- (id)_serviceContextForClientWithIdentifier:(id)a0;
- (id)_extractClientIdentifier:(id)a0;
- (void)_applicationDidFinishLaunching;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (unsigned long long)_servicesCount;
- (id)_serviceContextForService:(id)a0;
- (void)_registerForSystemAppDeath;
- (void)messageSender:(id)a0 accessXPCConnectionForMessageWithContext:(void *)a1 usingBlock:(id /* block */)a2;
- (void)_unregisterClientsIdentifiersLists:(id)a0 serviceContexts:(id)a1;
- (void)_sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 toClientWithMessenger:(id)a2 targetAccessQueue:(id)a3 completionRequiresWritingBlock:(BOOL)a4 completion:(id /* block */)a5;
- (id)_uniqueIdentifierForService:(id)a0;
- (BOOL)_serviceWithClass:(Class)a0 canProcessMessageWithIdentifier:(unsigned long long)a1 fromClientWithConnection:(id)a2 possibleRequiredEntitlements:(id *)a3;
- (oneway void)sendBoardServiceMessage:(id)a0 callback:(id /* block */)a1;
- (BOOL)_extractAndHandleRegistration:(id)a0 clientIdentifier:(id)a1 messageIdentifier:(unsigned long long)a2 context:(id)a3 error:(id *)a4;
- (void)endTransactionWithIdentifier:(id)a0 forService:(id)a1;
- (void)_handleConnection:(id)a0;
- (void).cxx_destruct;
- (id)_clientMessengerWithIdentifier:(id)a0;
- (id)_servicesForUniqueIdentifiers:(id)a0;
- (BOOL)_registerClientWithIdentifier:(id)a0 connection:(id)a1 serviceBundleName:(id)a2 initiatingMessageIdentifier:(unsigned long long)a3 error:(id *)a4;
- (id)_serviceFromBundlePath:(id)a0 clientIdentifier:(id)a1 connection:(id)a2 initiatingMessageIdentifier:(unsigned long long)a3 stopSearching:(BOOL *)a4 error:(id *)a5;
- (void)_unregisterAllClientsWithConnection:(id)a0;
- (void)messageSender:(id)a0 accessLaunchAngelConnectionForMessageWithContext:(void *)a1 usingBlock:(id /* block */)a2;
- (id)_services;
- (void)beginTransactionWithIdentifier:(id)a0 forService:(id)a1;
- (void)_startLaunchAngel;
- (void)messageSender:(id)a0 willSendXPCMessage:(id)a1 context:(void *)a2;
- (void)_applicationDidReceiveMemoryWarning:(id)a0;

@end
