@class NSSet;

@interface REActivitySummaryPredictor : REPredictor <REActivitySummaryPredictorProperties> {
    NSSet *_queries;
}

@property float activeEnergyPercentComplete;
@property float exerciseTimePercentComplete;
@property float standHourPercentComplete;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)pause;
- (id)_init;
- (void)update;
- (void)resume;
- (void).cxx_destruct;
- (void)_runQuery:(id)a0;
- (void)_startActivitySummaryQueryWithRetries:(long long)a0;
- (void)_stopQueries;
- (void)_stopQuery:(id)a0;
- (void)_updateWithActivitySummary:(id)a0 completion:(id /* block */)a1;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;

@end
