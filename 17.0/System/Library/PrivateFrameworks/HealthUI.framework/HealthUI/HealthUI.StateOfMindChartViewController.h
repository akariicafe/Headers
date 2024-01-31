@interface HealthUI.StateOfMindChartViewController : HKInteractiveChartOverlayViewController

- (id)initWithStackedDisplayTypes:(id)a0 healthStore:(id)a1 unitPreferenceController:(id)a2 dateCache:(id)a3 chartDataCacheController:(id)a4 selectedTimeScopeController:(id)a5 sampleTypeDateRangeController:(id)a6 initialXValue:(id)a7 currentCalendarOverride:(id)a8 options:(unsigned long long)a9 timeScopeRanges:(id)a10;
- (id)initWithDisplayTypes:(id)a0 healthStore:(id)a1 unitPreferenceController:(id)a2 dateCache:(id)a3 chartDataCacheController:(id)a4 selectedTimeScopeController:(id)a5 sampleTypeDateRangeController:(id)a6 initialXValue:(id)a7 currentCalendarOverride:(id)a8 options:(unsigned long long)a9;
- (void)didTapOnDateFromCurrentValueView:(id)a0;
- (id)initWithHealthStore:(id)a0 primaryDisplayType:(id)a1 unitPreferenceController:(id)a2 dateCache:(id)a3 chartDataCacheController:(id)a4 selectedTimeScopeController:(id)a5 sampleTypeDateRangeController:(id)a6 initialXValue:(id)a7 currentCalendarOverride:(id)a8 options:(unsigned long long)a9;
- (id)initWithStackedDisplayTypes:(id)a0 primaryDisplayTypeStackIndex:(id)a1 stackedDisplayTypeProportions:(id)a2 healthStore:(id)a3 unitPreferenceController:(id)a4 dateCache:(id)a5 chartDataCacheController:(id)a6 selectedTimeScopeController:(id)a7 sampleTypeDateRangeController:(id)a8 initialXValue:(id)a9 currentCalendarOverride:(id)a10 options:(unsigned long long)a11 timeScopeRanges:(id)a12;
- (id)initWithTimeScopeRanges:(id)a0 healthStore:(id)a1 primaryDisplayType:(id)a2 unitPreferenceController:(id)a3 dateCache:(id)a4 chartDataCacheController:(id)a5 selectedTimeScopeController:(id)a6 sampleTypeDateRangeController:(id)a7 initialXValue:(id)a8 currentCalendarOverride:(id)a9 options:(unsigned long long)a10;

@end
