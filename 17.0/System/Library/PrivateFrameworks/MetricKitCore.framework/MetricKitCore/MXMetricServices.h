@class NSString, NSMutableSet, NSObject;
@protocol OS_os_log, MXSourcePathUtilProtocol, MXClientUtilProtocol;

@interface MXMetricServices : NSObject <MXMetricServicesProtocol>

@property (readonly, retain) NSMutableSet *services;
@property (retain) id<MXClientUtilProtocol> clientUtil;
@property (retain) id<MXSourcePathUtilProtocol> sourcePathUtil;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_createServices;
- (void)_cleanServiceMetricsDirectories;
- (id)_clientMetricsFromServices;
- (BOOL)_isMetricSourceDataAvailable;
- (id)_metricPayloadsForClient:(id)a0;
- (id)_metricsFromServicesForClient:(id)a0;
- (void)_startServices;
- (void)_stopServices;
- (id)clientMetricPayloadsForAllClients;
- (id)initWithClientUtil:(id)a0 andSourcePathUtil:(id)a1;

@end
