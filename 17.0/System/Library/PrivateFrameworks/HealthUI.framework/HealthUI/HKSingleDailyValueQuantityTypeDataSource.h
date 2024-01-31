@interface HKSingleDailyValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)queryDescription;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_componentsForDailyValues;
- (BOOL)_matchesDailyValues:(id)a0;
- (id)_quantityValueFromStatistics:(id)a0 statisticsInterval:(id)a1 date:(id)a2;
- (BOOL)_shouldEmitOnlySinglePointForStatistics:(id)a0;
- (unsigned long long)calendarUnitForTimeScope:(long long)a0 displayType:(id)a1;
- (BOOL)requiresPointRealignmentToMidnightForStatisticsInterval:(id)a0;
- (id)statisticsIntervalForTimeScope:(long long)a0 resolution:(long long)a1 displayType:(id)a2;

@end
