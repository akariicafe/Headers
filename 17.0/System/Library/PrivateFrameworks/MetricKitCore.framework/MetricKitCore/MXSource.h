@class NSXPCListener, MXPayloadValidator, NSString, NSObject, MXSourceHandler;
@protocol OS_os_log, OS_dispatch_queue, MXBundleUtilProtocol;

@interface MXSource : NSObject <MXSourceXPCServer, NSXPCListenerDelegate, MXSourceHandlerDelegate>

@property (retain) NSObject<OS_os_log> *MXSourceLogHandle;
@property (retain) id<MXBundleUtilProtocol> bundleUtil;
@property (retain) MXPayloadValidator *payloadValidator;
@property (readonly, retain) MXSourceHandler *handler;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSource;

- (void)_invalidateConnection;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_initQueue;
- (void)writeDiagnosticDataWithPayload:(id)a0;
- (void)deliverDummyPayloadForClient:(id)a0;
- (void)writeMetricDataWithPayload:(id)a0;
- (void)_initIvar;
- (void)_initLogHandle;
- (void)_setupExportedInterfaceForConnection:(id)a0;
- (void)_setupHandlersForConnection:(id)a0;
- (void)_setupRemoteInterfaceForConnection:(id)a0;
- (void)_startListenClientXPC;
- (void)cleanServiceDiagnosticsDirectoriesForClient:(id)a0;
- (void)diagnosticPayloadDidCacheToSourceDirectory;
- (void)metricPayloadDidCacheToSourceDirectory;
- (BOOL)writeDiagnosticReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;

@end
