@class HKSampleType;

@interface HKHorizontalSingleLineDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_chartPointsWithSamples:(id)a0 blockStart:(id)a1 blockEnd:(id)a2 sourceTimeZone:(id)a3;
- (void)applyMarkStyleToPoint:(id)a0 sample:(id)a1;

@end
