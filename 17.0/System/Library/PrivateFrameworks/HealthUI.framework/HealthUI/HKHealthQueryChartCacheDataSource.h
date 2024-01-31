@class NSString, NSCalendar, HKDisplayType, HKHealthStore;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {
    HKHealthStore *_healthStore;
}

@property (nonatomic) long long queryAlignment;
@property (readonly, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) NSCalendar *calendarOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_calendar;
- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_buildDescriptionFromStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2;
- (id)_shiftedQueryIntervalIfNecessaryForStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2;
- (unsigned long long)calendarUnitForTimeScope:(long long)a0 displayType:(id)a1;
- (id)codableQueryDataWithType:(int)a0 startDate:(id)a1 endDate:(id)a2 statisticsInterval:(id)a3 queryDataObject:(id)a4;
- (id /* block */)mappingFunctionForContext:(id)a0;
- (id)operationForIdentifier:(id)a0 priorityDelegate:(id)a1 completion:(id /* block */)a2;
- (id)statisticsIntervalForTimeScope:(long long)a0 resolution:(long long)a1 displayType:(id)a2;

@end
