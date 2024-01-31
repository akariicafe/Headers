@class NSString;

@interface RTRelabelerPersisterMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)booleanKeys;
+ (id)bucketedKeys;
+ (id)doubleKeys;
+ (id)supportedMetricKeys;
+ (id)unsignedIntegerKeys;

- (void)setErrorKey:(id)a0;
- (id)initWithLoggingEnabled:(BOOL)a0;
- (double)safeFraction:(double)a0 denominator:(double)a1;
- (void)setBucketedPercentageMetricsWithMappings:(id)a0 sharedDenominator:(double)a1 sharedBins:(id)a2;
- (void)setDerivedMetrics;
- (BOOL)submitMetricsWithError:(id *)a0;
- (void)tallyError:(id)a0;
- (void)tallyKey:(id)a0;

@end
