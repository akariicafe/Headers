@class NSString;

@interface ATXClientModelShadowMetricsAppIntentDataSource : _ATXClientModelShadowMetricsDataSourceBase <ATXShadowMetricsDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPrediction:(id)a0 equalToPrediction:(id)a1;
- (unsigned long long)cacheHitIndexForShadowEvent:(id)a0 predictionCache:(id)a1;
- (void)enumeratePredictionsInCache:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)numberOfPredictionsInCache:(id)a0;
- (void)replayHistoryBetweenStartDate:(id)a0 endDate:(id)a1 shadowEventHandler:(id /* block */)a2 predictionCacheHandler:(id /* block */)a3;

@end
