@class NSString, HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;
@protocol HKOverlaySleepRoomContextChangeDelegate;

@interface _HKSleepDurationAmountContext : NSObject <HKOverlayContext>

@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly, weak, nonatomic) id<HKOverlaySleepRoomContextChangeDelegate> contextChangeDelegate;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (id)contextItemForLastUpdate;
- (long long)resolutionForTimeScope:(long long)a0 traitResolution:(long long)a1;
- (id)sampleTypeForDateRangeUpdates;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 resolution:(long long)a3 completion:(id /* block */)a4;
- (id)_amountStringFromCounts:(id)a0 timeScope:(long long)a1;
- (id)_contextItemWithAmountString:(id)a0;
- (id)_daysWithSleepDataFromChartPoints:(id)a0;
- (id)initWithBaseDisplayType:(id)a0 overlayChartController:(id)a1 contextChangeDelegate:(id)a2;

@end
