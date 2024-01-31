@class NSXPCListener, NSMutableDictionary, NSXPCConnection, NSArray, NSString, NSObject;
@protocol OS_os_log, DEDXPCConnectorDelegate, DEDXPCProtocol;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate>

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSXPCConnection *diagnosticextensionsdConnection;
@property (retain) NSMutableDictionary *appConnections;
@property (retain) NSXPCListener *listener;
@property unsigned long long connType;
@property BOOL isDaemon;
@property BOOL started;
@property (weak) id<DEDXPCConnectorDelegate> xpcConnectorDelegate;
@property unsigned long long connectionRestartCount;
@property (readonly) id<DEDXPCProtocol> diagnosticextensionsdXPCInterface;
@property (readonly) NSArray *clientConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteXPCObjectForApplicationPid:(id)a0;
- (id)_whitelistedXPCInterface;
- (void)_initializeDiagnosticextensionsdConnection;
- (BOOL)validateConnection:(id)a0;
- (void)start;
- (void)_releaseAppConnectionWithPid:(int)a0;
- (id)connectionWithEndpoint:(id)a0 forMachService:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startForDaemon;
- (void)configureConnectionType:(unsigned long long)a0;
- (void)configureDaemonMode;
- (void).cxx_destruct;
- (void)startForApp;
- (void)_storeAppConnection:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)_connectionForPid:(id)a0;
- (id)clientXPCInterfaceFromInbound:(id)a0;

@end
