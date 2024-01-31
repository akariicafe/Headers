@class NSNumberFormatter;

@interface HKInteractiveChartBloodGlucosePercentInRangeFormatter : HKInteractiveChartDataFormatter

@property (readonly, copy, nonatomic) NSNumberFormatter *percentageFormatter;
@property (nonatomic) long long highlightedClassification;

- (id)init;
- (void).cxx_destruct;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (double)_fractionForHighlightedClassificationFromDataPoint:(id)a0;
- (id)_overallFractionInEuglycemiaForChartData:(id)a0;
- (id)_rangeOfFractionInHighlightedClassificationForChartData:(id)a0;
- (long long)_selectedRangeDataTypeForContext:(long long)a0;
- (id)_stringFromFraction:(id)a0;

@end
