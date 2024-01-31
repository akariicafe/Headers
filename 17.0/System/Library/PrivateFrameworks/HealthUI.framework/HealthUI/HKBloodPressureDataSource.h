@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_chartPointsWithSystolicResults:(id)a0 diastolicResults:(id)a1 blockStart:(id)a2 blockEnd:(id)a3 sourceTimeZone:(id)a4;
- (id)_earliestDateForSystolicResults:(id)a0 diastolicResults:(id)a1;
- (id)_latestDateForSystolicResults:(id)a0 diastolicResults:(id)a1;
- (unsigned long long)queryStatisticsOption;

@end
