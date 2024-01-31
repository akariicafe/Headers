@interface PLMetricsFormatterMetricKit : NSObject

@property BOOL processHangs;

+ (id)categorizeAppExits:(id)a0;
+ (id)decodeExitWithDomain:(unsigned int)a0 withCode:(unsigned long long)a1;

- (id)init;
- (void)addBucketWithDuration:(int)a0 WithEnd:(int)a1 andCount:(unsigned long long)a2 toList:(id)a3;
- (void)addBucketWithSignalBar:(short)a0 withTime:(id)a1 toList:(id)a2;
- (void)addPerfMetrics:(id)a0 toAppData:(id)a1;
- (void)addPowerMetrics:(id)a0 toAppData:(id)a1;
- (void)addSignpostData:(id)a0 forApp:(id)a1 toAppData:(id)a2;
- (void)addTelemetryForMetricInconsistencies:(id)a0;
- (void)analyticsLogSignpostsWithBundleId:(id)a0 withName:(id)a1 withCategory:(id)a2 withMetrics:(id)a3;
- (int)computeBucketEndWithDuration:(int)a0 andValue:(int)a1;
- (id)constructCellularData:(id)a0;
- (id)constructCellularHistogram:(id)a0;
- (id)constructHistogramBucketsWithDuration:(int)a0 andData:(id)a1;
- (id)constructPayloadWithMetrics:(id)a0 andSignpostData:(id)a1 forDate:(id)a2;
- (id)constructSignpostIntervalDataWithDurations:(id)a0 withMetrics:(id)a1;
- (BOOL)hangtracerEnabled:(id)a0;
- (void)normalizeCellularData:(id)a0;
- (void)publishMetrics:(id)a0 andSignpostData:(id)a1 forDate:(id)a2;

@end
