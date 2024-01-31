@class MXCoreHandler, NSXPCListener, MXCleanUtil, NSString, MXSource, NSObject;
@protocol OS_dispatch_queue, OS_os_log, MXDeliveryPathUtilProtocol, MXDeliveryDataCacherProtocol, MXClientUtilProtocol, MXBundleUtilProtocol;

@interface MXCore : NSObject <MXXPCServer, NSXPCListenerDelegate, MXCoreHandlerDelegate>

@property (retain) NSObject<OS_os_log> *MXCoreLogHandle;
@property (retain) NSObject<OS_os_log> *MXCoreXcodeSupportLogHandle;
@property (retain) id<MXBundleUtilProtocol> bundleUtil;
@property (retain) id<MXDeliveryPathUtilProtocol> deliveryPathUtil;
@property (retain) id<MXDeliveryDataCacherProtocol> deliveryDataCacher;
@property (retain) MXCleanUtil *cleanUtil;
@property (retain, nonatomic) id<MXClientUtilProtocol> clientUtil;
@property (readonly, retain) MXCoreHandler *handler;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain, nonatomic) NSString *currentDataActivityDate;
@property (retain) MXSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCore;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_registerClient;
- (void)retrieveMetrics;
- (void)_initQueue;
- (void)registerClient;
- (void)retrieveDiagnostics;
- (BOOL)isAppExtension:(id)a0;
- (BOOL)_canSetupXpcListenerForSourceData;
- (void)_deliverDummyPayloadForXcodeClient:(id)a0;
- (id)_getDailyActivityCriteria;
- (id)_getDummyDiagnosticPayloadForClient:(id)a0 dateString:(id)a1;
- (id)_getDummyPayloadForClient:(id)a0 dateString:(id)a1;
- (void)_initIvar;
- (void)_initLogHandle;
- (void)_performDataActivity;
- (void)_registerClientAndTeam;
- (void)_registerXpcActivityForCore;
- (void)_scheduleDataActivity;
- (void)_setupDailyActivityCriteriaForDataActivity:(id)a0;
- (void)_setupExportedInterfaceForConnection:(id)a0;
- (void)_setupHandlersForConnection:(id)a0;
- (void)_setupRemoteInterfaceForConnection:(id)a0;
- (BOOL)_shouldDeliverToClientForBundleID:(id)a0;
- (void)_startListenClientXPC;
- (void)_writeDiagnosticReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;
- (void)clientDidRegisterForBundleID:(id)a0;
- (void)clientIsAvailableForPreparingDataActivity;
- (void)clientIsNotAvailable;
- (void)deliverDummyPayloadForXcodeClient:(id)a0;
- (void)metricIsAvailableFromSourceDirectoryForSavingToDeliveryDirectoryWithClientMetrics:(id)a0;
- (void)performDataActivity;

@end
