@class NSString, REConcurrentDictionary;
@protocol RERelevanceEngineMetricsRecorder;

@interface REMLModel : NSObject <REMLModelProperties> {
    REConcurrentDictionary *_predictionCache;
    BOOL _wantsPredictionCache;
    BOOL _implementsDebugSaving;
}

@property (class, readonly, nonatomic) unsigned long long featureBitWidth;
@property (class, readonly, nonatomic) unsigned long long maxFeatureCount;

@property (nonatomic) BOOL allowsExploreExploit;
@property (nonatomic) float exploreExploitModulator;
@property (nonatomic) float priorMean;
@property (nonatomic) float varianceEpsilon;
@property (nonatomic) float simulationExploreExploitModulator;
@property (retain, nonatomic) id<RERelevanceEngineMetricsRecorder> metricsRecorder;
@property (retain, nonatomic) NSString *metricsInteraction;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long featureBitWidth;
@property (readonly, nonatomic) unsigned long long maxFeatureCount;
@property (readonly, nonatomic) long long getNumberOfCoordinates;
@property (readonly, nonatomic) float averagePrediction;
@property (readonly, nonatomic) float normalizedEntropy;
@property (readonly, nonatomic) unsigned long long totalExampleCount;
@property (readonly, nonatomic) unsigned long long totalPositiveCount;

+ (id)modelWithFeatureSet:(id)a0 priorMean:(float)a1 modelVarianceEpsilon:(float)a2;

- (id)init;
- (void).cxx_destruct;
- (void)_clearCache;
- (void)_clearModel;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (BOOL)_loadModelFromURL:(id)a0 error:(id *)a1;
- (id)_predictWithFeatures:(id)a0;
- (BOOL)_saveDebugModelToURL:(id)a0 error:(id *)a1;
- (BOOL)_saveModelToURL:(id)a0 error:(id *)a1;
- (void)_trainWithFeatures:(id)a0 positiveEvent:(id)a1;
- (void)clearModel;
- (id)initWithFeatureSet:(id)a0 priorMean:(float)a1 modelVarianceEpsilon:(float)a2;
- (BOOL)loadModelFromURL:(id)a0 error:(id *)a1;
- (void)logCoreAnalyticsMetrics;
- (id)predictWithFeatures:(id)a0;
- (id)predictionSetWithFeatures:(id)a0;
- (BOOL)requiresDirectory;
- (BOOL)saveModelToURL:(id)a0 error:(id *)a1;
- (void)setWantsPredictionCache:(BOOL)a0;
- (void)trainWithFeatures:(id)a0 positiveEvent:(id)a1;
- (BOOL)wantsPredictionCache;

@end
