@interface HKInteractiveChartOxygenSaturationFormatter : HKInteractiveChartGenericStatFormatter

@property (nonatomic) long long airPressureStatisticsType;

- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)initWithStatisticsType:(long long)a0;

@end
