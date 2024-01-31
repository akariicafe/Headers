@class NSObject;
@protocol MXDeliveryPathUtilProtocol, MXMetricServicesProtocol, MXCoreHandlerDelegate, MXDeliveryDataCacherProtocol, MXClientUtilProtocol, OS_os_log;

@interface MXCoreHandler : NSObject

@property (retain) id<MXClientUtilProtocol> clientUtil;
@property (retain) id<MXDeliveryDataCacherProtocol> deliveryDataCacher;
@property (retain) id<MXDeliveryPathUtilProtocol> deliveryPathUtil;
@property (readonly, retain) id<MXMetricServicesProtocol> metricServices;
@property (weak) id<MXCoreHandlerDelegate> delegate;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (void)_handleClientAvailability;
- (void)_processDataActivity;
- (void)_reportMetricKitUsage;
- (unsigned long long)_successCountFromSavingMetricPayloadsToDeliveryDirectoryForClientMetrics:(id)a0;
- (void)_updateClientAvailabilityAndPrepareDataActivityForBundleID:(id)a0;
- (id)diagnosticsForBundleID:(id)a0;
- (id)initWithClientUtil:(id)a0 andDeliveryDataCacher:(id)a1 andDeliveryPathUtil:(id)a2 andMetricServices:(id)a3 andDelegate:(id)a4;
- (id)metricsForBundleID:(id)a0;
- (void)performDataActivity;
- (void)registerClientAndTeamForBundleID:(id)a0 andTeamID:(id)a1;
- (void)registerClientForBundleID:(id)a0;
- (void)saveMetricPayloadsToDeliveryDirectoryAndReportSuccessForClientMetrics:(id)a0;
- (BOOL)shouldDeliverDataForBundleID:(id)a0;
- (BOOL)shouldDeliverDataForBundleID:(id)a0 andTeamID:(id)a1;

@end
