@class NSArray, HKSampleType;

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;
@property (retain, nonatomic) NSArray *valueOrder;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_chartPointsWithDateIntervalsByValue:(id)a0 sourceTimeZone:(id)a1;
- (id)_codableQueryDataWithSamples:(id)a0;
- (id)_dateIntervalsByValueWithCodableQueryData:(id)a0;
- (id)_organizeSamplesByValueAndDateInterval:(id)a0;

@end
