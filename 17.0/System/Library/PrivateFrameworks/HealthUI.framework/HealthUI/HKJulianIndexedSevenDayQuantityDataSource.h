@class HKQuantityType, HKCalendarCache, HKUnitPreferenceController;

@interface HKJulianIndexedSevenDayQuantityDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKCalendarCache *calendarCache;
@property (nonatomic) long long dataSourceType;
@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly, nonatomic) id /* block */ intervalUserInfoCreationBlock;
@property (readonly, nonatomic) id /* block */ singlePointUserInfoCreationBlock;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_createIntervalChartPointFromDateInterval:(id)a0 timeZoneName:(id)a1 yValue:(id)a2 metadata:(id)a3;
- (id)_createSinglePointChartPointFromDateInterval:(id)a0 statisticsInterval:(id)a1 timeZoneName:(id)a2 yValue:(id)a3 metadata:(id)a4;
- (id)_intervalChartPointsWithSamples:(id)a0;
- (id)_singlePointChartPointsWithSamples:(id)a0 statisticsInterval:(id)a1;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 quantityType:(id)a2 unitController:(id)a3 intervalUserInfoCreationBlock:(id /* block */)a4;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 quantityType:(id)a2 unitController:(id)a3 singlePointUserInfoCreationBlock:(id /* block */)a4;

@end
