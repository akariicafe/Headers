@interface HKInsulinDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_chartPointsWithBasalInsulinValues:(id)a0 withTotalInsulinValues:(id)a1 filterInterval:(id)a2 sourceTimeZone:(id)a3;
- (id)_dailyAverageInsulinValuesFromStatistics:(id)a0 queryStartDate:(id)a1 statisticsInterval:(id)a2;
- (id)_insulinDataSourceQueryDataFromBasalStatisticsCollection:(id)a0 totalStatisticsCollection:(id)a1 queryStartDate:(id)a2 statisticsInterval:(id)a3;
- (id)_insulinValuesFromStatistics:(id)a0;

@end
