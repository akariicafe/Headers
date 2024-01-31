@interface HKInteractiveChartAFibBurdenFormatter : HKInteractiveChartGenericStatFormatter

@property (nonatomic) long long statisticsType;

- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)initWithStatisticsType:(long long)a0;
- (id)_formattedDataWithLessThan:(double)a0;

@end
