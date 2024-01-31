@class NSObject;
@protocol MXSourceHandlerDelegate, OS_os_log, MXSourcePathUtilProtocol, MXSourceDataCacherProtocol, MXDeliveryDataCacherProtocol, MXDiagnosticServicesProtocol, MXBundleUtilProtocol;

@interface MXSourceHandler : NSObject

@property (retain) id<MXSourceDataCacherProtocol> sourceDataCacher;
@property (retain) id<MXDeliveryDataCacherProtocol> deliveryDataCacher;
@property (retain) id<MXBundleUtilProtocol> bundleUtil;
@property (retain) id<MXSourcePathUtilProtocol> sourcePathUtil;
@property (readonly, retain) id<MXDiagnosticServicesProtocol> diagnosticServices;
@property (weak) id<MXSourceHandlerDelegate> delegate;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (void)_removeDeliveredPayloadForSourceID:(long long)a0 atDate:(id)a1;
- (void)cleanServiceDiagnosticsDirectoriesForClient:(id)a0;
- (void)handleDiagnosticDataWithPayload:(id)a0;
- (void)handleMetricDataWithPayload:(id)a0;
- (id)initWithSourceDataCacher:(id)a0 andDeliveryDataCacher:(id)a1 andSourcePathUtil:(id)a2 andBundleUtil:(id)a3 andDiagnosticServices:(id)a4 andDelegate:(id)a5;
- (BOOL)writeDiagnosticReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;

@end
