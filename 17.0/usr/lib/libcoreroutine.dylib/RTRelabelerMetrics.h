@class RTRelabeler, NSString;

@interface RTRelabelerMetrics : RTMetric <RTMetricProtocol>

@property (retain, nonatomic) RTRelabeler *relabeler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)booleanKeys;
+ (id)bucketedKeys;
+ (id)doubleKeys;
+ (id)integerKeys;
+ (id)supportedMetricKeys;
+ (id)unsignedIntegerKeys;

- (void).cxx_destruct;
- (void)setOutputMetricsUsingInputCandidate:(id)a0 priorVector:(id)a1 observationVector:(id)a2 posteriorVector:(id)a3 relabeledProbVector:(id)a4 relabeledInferredMapItem:(id)a5;
- (double)calculateEntropyOfProbVector:(id)a0;
- (id)getUUIDForPotentialRelabelingItemUsingInputCandidate:(id)a0 relabeledProbVector:(id)a1;
- (id)initWithLoggingEnabled:(BOOL)a0;
- (id)initWithRelabeler:(id)a0;
- (double)logMax2ConfidenceRatioOfRelabeledProbVector:(id)a0;
- (id)maxUUIDOfProbVector:(id)a0;
- (void)setDerivedMetrics;
- (void)setErrorMetrics:(id)a0;
- (void)setFilteredInputMetricsUsingContextCandidates:(id)a0;
- (void)setNonRevGeoCandidates:(id)a0 revGeoCandidates:(id)a1;
- (void)setNumberOfUniqueMapItems:(id)a0;
- (void)setPreprocessedMetricsUsingInputCandidate:(id)a0 contextCandidates:(id)a1;
- (BOOL)submitMetricsWithError:(id *)a0;

@end
