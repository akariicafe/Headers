@class HKTimePeriodDisplayTypeValueFormatter;

@interface HKInteractiveChartTimePeriodFormatter : HKInteractiveChartDataFormatter {
    HKTimePeriodDisplayTypeValueFormatter *_timePeriodFormatter;
}

- (void).cxx_destruct;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (double)_boundedTimePeriodFromDataPoint:(id)a0 boundedValueRange:(id)a1;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)a0 items:(id)a1 customDataType:(long long)a2 boundedValueRange:(id)a3;
- (id)_formattedStringWithData:(id)a0 roundToHours:(BOOL)a1 displayUnit:(BOOL)a2;
- (id)formattedBoundedSelectedRangeLabelDataWithChartData:(id)a0 items:(id)a1 customDataType:(long long)a2 chartRangeProvider:(id)a3;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 items:(id)a1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 items:(id)a1 customDataType:(long long)a2;

@end
