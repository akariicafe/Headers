@class HKSampleType, NSString, HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;
@protocol HKOverlaySleepRoomContextChangeDelegate;

@interface _HKSleepDurationGoalContext : NSObject <HKOverlayContext>

@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType;
@property (readonly, nonatomic) long long overlayMode;
@property (readonly, nonatomic) BOOL isPrimaryContext;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (retain, nonatomic) HKSampleType *monitoringSampleType;
@property (readonly, weak, nonatomic) id<HKOverlaySleepRoomContextChangeDelegate> contextChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (id)contextItemForLastUpdate;
- (void)overlayStateWillChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (long long)resolutionForTimeScope:(long long)a0 traitResolution:(long long)a1;
- (id)sampleTypeForDateRangeUpdates;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 resolution:(long long)a3 completion:(id /* block */)a4;
- (id)_durationContextItemWithGoal:(id)a0;
- (id)_goalGivenChartPoints:(id)a0;
- (id)initWithBaseDisplayType:(id)a0 overlayDisplayType:(id)a1 overlayChartController:(id)a2 overlayMode:(long long)a3 isPrimaryContext:(BOOL)a4 contextChangeDelegate:(id)a5;

@end
