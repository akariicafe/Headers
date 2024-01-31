@class AnalyticsStoreMOHandler;

@interface DeploymentMetricHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *storeMOHandler;
@property (nonatomic) BOOL isInternalInstall;

- (id)initWithAnalyticsStore:(id)a0;
- (void)appendJoinsSummaryToMetric:(id)a0 ssid:(id)a1 maxAgeInDays:(unsigned long long)a2;
- (void)networkDeploymentMetricCheckAndSubmit:(id)a0 deploymentUuid:(id)a1 interval:(unsigned long long)a2;
- (id)leavesSummary:(id)a0 bssid:(id)a1 maxAgeInDays:(unsigned long long)a2;
- (id)roamsSummary:(id)a0 bssid:(id)a1 maxAgeInDays:(unsigned long long)a2;
- (BOOL)metricNeedsSubmission:(id)a0 deploymentUuid:(id)a1 interval:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)appendBssAnalyticsToMetric:(id)a0 bssMo:(id)a1 maxAgeInDays:(unsigned long long)a2;
- (BOOL)appendNetworkAnalyticsToMetric:(id)a0 ssid:(id)a1 deploymentUuid:(id)a2 maxAgeInDays:(unsigned long long)a3;
- (void)submitBssAnalyticsMetrics:(id)a0 deploymentUuid:(id)a1 stitchIndex:(long long)a2;

@end
