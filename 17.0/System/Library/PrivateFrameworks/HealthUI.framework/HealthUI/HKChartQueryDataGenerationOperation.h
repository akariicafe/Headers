@class HKHealthStore, HKHealthQueryChartCacheDataSource, NSDate, NSDateComponents;

@interface HKChartQueryDataGenerationOperation : HKChartCacheFetchOperation {
    HKHealthStore *_healthStore;
    HKHealthQueryChartCacheDataSource *_dataSource;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_statisticsInterval;
    id /* block */ _clientCompletion;
    id /* block */ _fetchOperationManager;
    id /* block */ _cancelHandler;
}

- (void).cxx_destruct;
- (void)completedWithResults:(id)a0 error:(id)a1;
- (id)initWithHealthStore:(id)a0 dataSource:(id)a1 startDate:(id)a2 endDate:(id)a3 statisticsInterval:(id)a4 operationDescription:(id)a5 completion:(id /* block */)a6;
- (void)startOperationWithCompletion:(id /* block */)a0;
- (void)stopOperation;

@end
