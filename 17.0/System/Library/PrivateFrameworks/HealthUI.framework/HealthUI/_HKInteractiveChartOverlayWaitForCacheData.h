@class HKInteractiveChartOverlayViewController, NSMutableArray;

@interface _HKInteractiveChartOverlayWaitForCacheData : NSObject

@property (weak, nonatomic) HKInteractiveChartOverlayViewController *overlayController;
@property (retain, nonatomic) NSMutableArray *waitForDataSources;

- (void).cxx_destruct;
- (id)_findDataSource:(id)a0;
- (void)addWaitForDataSource:(id)a0 graphSeriesContext:(id)a1 timeScope:(long long)a2 resolution:(long long)a3 startDate:(id)a4 endDate:(id)a5 priorityDelegate:(id)a6 completion:(id /* block */)a7;
- (id)initWithOverlayController:(id)a0;
- (void)removeWaitForDataSource:(id)a0;

@end
