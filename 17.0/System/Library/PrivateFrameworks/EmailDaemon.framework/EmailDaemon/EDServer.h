@class NSXPCListener, NSXPCListenerEndpoint, NSString, NSArray, EDDaemonInterfaceFactory, NSObject, EFLocked;
@protocol OS_os_log;

@interface EDServer : NSObject <NSXPCListenerDelegate, EDServerRemoteClientsProvider, EFLoggable, EDReconciliationQueryProvider>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) EFLocked *connectedClients;
@property (retain, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverXPCEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *remoteClients;

- (id)messageReconciliationQueries;
- (void)start;
- (id)initWithDaemonInterfaceFactory:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)addRemoteClient:(id)a0;
- (id)threadReconciliationQueries;
- (void).cxx_destruct;
- (void)removeRemoteClient:(id)a0;
- (id)initWithDaemonInterfaceFactory:(id)a0 listener:(id)a1;
- (void)test_tearDown;

@end
