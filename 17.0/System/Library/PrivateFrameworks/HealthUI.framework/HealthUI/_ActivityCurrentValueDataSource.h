@class UIView;
@protocol HKInteractiveChartCurrentValueViewCallbacks;

@interface _ActivityCurrentValueDataSource : HKActivitySummaryAnnotationViewDataSource

@property (weak, nonatomic) id<HKInteractiveChartCurrentValueViewCallbacks> currentValueViewCallbacks;
@property (nonatomic) BOOL currentValueViewHasNoData;
@property (readonly, nonatomic) UIView *noDataView;

- (void).cxx_destruct;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (id)_buildNoDataView;
- (id)_dateRangeFromComponents;
- (id)_dateRangeFromStartDate:(id)a0 endDate:(id)a1;
- (id)_localizedCurrentValueViewDateRange;
- (id)initWithDisplayTypeController:(id)a0 unitController:(id)a1 wheelchairUseCharacteristicCache:(id)a2 currentValueViewContext:(BOOL)a3 firstWeekday:(long long)a4 activityOptions:(unsigned long long)a5 currentValueViewCallbacks:(id)a6;

@end
