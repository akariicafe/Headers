@class NSString;

@interface RTWiFiScanMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)binsForWiFiAPsCount;
+ (unsigned long long)bucketForWiFiAPsCount:(unsigned long long)a0;
+ (void)submitWiFiScanMetricsWithErrorCode:(unsigned long long)a0 accessPointsscanResultsCount:(unsigned long long)a1 isScanIssuedByOtherClient:(BOOL)a2 isCacheQuery:(BOOL)a3;
+ (id)supportedMetricKeys;

- (id)init;
- (id)initWithAccessPointsscanResultsCount:(unsigned long long)a0 errorCode:(unsigned long long)a1 isCacheQuery:(BOOL)a2 isScanIssuedByOtherClient:(BOOL)a3;

@end
