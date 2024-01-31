@class NSString, NSNumber;

@interface HKOverlayRoomSleepDurationStackedContext : HKOverlayRoomStackedContext

@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSNumber *firstWeekdayOverride;

- (void).cxx_destruct;
- (id)_generateNamedDataSourceWithTemplateDisplayType:(id)a0 overlayChartController:(id)a1 applicationItems:(id)a2;
- (id)_generateSleepDurationStackedDisplayTypeWithApplicationItems:(id)a0 overlayChartController:(id)a1 sleepChartFormatter:(id)a2;
- (id)_generateSleepSeriesWithTemplateDisplayType:(id)a0 applicationItems:(id)a1;
- (id)initWithApplicationItems:(id)a0 overlayChartController:(id)a1 sleepChartFormatter:(id)a2 primaryDisplayType:(id)a3 uniqueIdentifier:(id)a4 firstWeekdayOverride:(id)a5 currentCalendarOverride:(id)a6 isInfoButtonHidden:(BOOL)a7;
- (id)initWithApplicationItems:(id)a0 overlayChartController:(id)a1 sleepChartFormatter:(id)a2 primarySampleType:(id)a3 uniqueIdentifier:(id)a4 firstWeekdayOverride:(id)a5 currentCalendarOverride:(id)a6 isInfoButtonHidden:(BOOL)a7;

@end
