@class NSPredicate, HKSampleType;

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (retain, nonatomic) NSPredicate *queryPredicate;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_codableDataWithSamples:(id)a0 blockStart:(id)a1 blockEnd:(id)a2 intervalComponents:(id)a3;
- (id)_calculateTotalDurationFromSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 interval:(id)a3 intervalOut:(id *)a4 intervalCountsOut:(id *)a5;
- (id)_chartPointsWithStatisticsInterval:(id)a0 dateIntervalsToTotals:(id)a1 intervalCounts:(id)a2 sourceTimeZone:(id)a3;
- (id)_codableTimePeriodDataWithDictionary:(id)a0;
- (id /* block */)_startOfDayTransform;

@end
