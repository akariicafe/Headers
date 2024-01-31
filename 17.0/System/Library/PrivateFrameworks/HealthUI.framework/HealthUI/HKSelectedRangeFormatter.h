@class HKUnitPreferenceController, UIFont;
@protocol HKInteractiveChartRangeProvider;

@interface HKSelectedRangeFormatter : NSObject

@property (retain, nonatomic) id<HKInteractiveChartRangeProvider> chartRangeProvider;
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (retain, nonatomic) UIFont *majorFont;
@property (retain, nonatomic) UIFont *minorFont;

- (void).cxx_destruct;
- (id)_formatterForDisplayType:(id)a0 timeScope:(long long)a1 majorFont:(id)a2 minorFont:(id)a3;
- (id)_handwashingStatFormatterItemOptionsForTimePeriodTimeScope:(long long)a0;
- (id)_statFormatterItemOptionsForTimePeriodDisplayType:(id)a0 timeScope:(long long)a1 context:(long long)a2;
- (void)configureWithChartRangeProvider:(id)a0;
- (id)initWithUnitPreferenceController:(id)a0;
- (id)selectedRangeDataWithCoordinateInfo:(id)a0 majorFont:(id)a1 minorFont:(id)a2 displayType:(id)a3 timeScope:(long long)a4 context:(long long)a5;
- (id)selectedRangeDataWithCoordinates:(id)a0 majorFont:(id)a1 minorFont:(id)a2 displayType:(id)a3 timeScope:(long long)a4 context:(long long)a5;
- (id)selectedRangeDataWithGraphView:(id)a0 majorFont:(id)a1 minorFont:(id)a2 displayType:(id)a3 timeScope:(long long)a4 context:(long long)a5;

@end
