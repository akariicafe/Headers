@class HKGraphSeriesDataSource, HKInteractiveChartOverlayViewController, NSDate;

@interface _HKInteractiveChartOverlayDeliverCachedData : NSObject

@property (weak, nonatomic) HKInteractiveChartOverlayViewController *overlayController;
@property (readonly, nonatomic) HKGraphSeriesDataSource *dataSource;
@property (readonly, nonatomic) id graphSeriesContext;
@property (readonly, nonatomic) long long timeScope;
@property (readonly, nonatomic) long long resolution;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (BOOL)deliverDataToCompletion;
- (id)initWithOverlayController:(id)a0 dataSource:(id)a1 graphSeriesContext:(id)a2 timeScope:(long long)a3 resolution:(long long)a4 startDate:(id)a5 endDate:(id)a6 completion:(id /* block */)a7;

@end
