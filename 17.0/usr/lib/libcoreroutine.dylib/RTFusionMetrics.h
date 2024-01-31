@class NSArray, NSString;

@interface RTFusionMetrics : RTMetric <RTMetricProtocol>

@property (retain, nonatomic) NSArray *bluePOICandidates;
@property (retain, nonatomic) NSArray *localHintCandidates;
@property (retain, nonatomic) NSArray *learnedPlaceCandidatesExcludingHomeWork;
@property (retain, nonatomic) NSArray *learnedPlaceHomeWorkCandidates;
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
- (id)initWithLoggingEnabled:(BOOL)a0;
- (void)setDerivedMetrics;
- (void)setInputMetrics:(id)a0;
- (void)setMetricsUsingInputCandidates:(id)a0 outputFusedInferredMapItems:(id)a1 bestFusedInferredMapItem:(id)a2 outputError:(id)a3;
- (void)setOutputMetrics:(id)a0 bestFusedInferredMapItem:(id)a1 outputError:(id)a2;
- (BOOL)submitMetricsWithError:(id *)a0;

@end
