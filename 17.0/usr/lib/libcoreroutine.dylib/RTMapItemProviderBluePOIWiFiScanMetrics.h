@class NSString;

@interface RTMapItemProviderBluePOIWiFiScanMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)binsForFingerprintsCount;
+ (id)binsForVisitDuration;
+ (id)binsForWiFiAPsCount;
+ (id)binsForWiFiInterval;
+ (unsigned long long)bucketForFingerprintsCount:(unsigned long long)a0;
+ (unsigned long long)bucketForVisitInterval:(double)a0;
+ (unsigned long long)bucketForWiFiAPsCount:(unsigned long long)a0;
+ (unsigned long long)bucketForWiFiInterval:(double)a0;
+ (void)submitBluePOIWiFiScanMetricsWithFingerprintsCount:(unsigned long long)a0 fingerprintsZeroAccessPointsCount:(unsigned long long)a1 fingerprintsNonZeroAccessPointsCount:(unsigned long long)a2 isFingerprintWindowFallback:(BOOL)a3 timeIntervalSinceEarliestFingerprint:(double)a4 timeIntervalSinceLatestFingerprint:(double)a5 totalAccessPointsCount:(unsigned long long)a6 visitInterval:(double)a7 visitSource:(long long)a8;
+ (id)supportedMetricKeys;

- (id)init;
- (id)initWithFingerprintsCount:(unsigned long long)a0 fingerprintsZeroAccessPointsCount:(unsigned long long)a1 fingerprintsNonZeroAccessPointsCount:(unsigned long long)a2 isFingerprintWindowFallback:(BOOL)a3 timeIntervalSinceEarliestFingerprint:(double)a4 timeIntervalSinceLatestFingerprint:(double)a5 totalAccessPointsCount:(unsigned long long)a6 visitInterval:(double)a7 visitSource:(long long)a8;

@end
