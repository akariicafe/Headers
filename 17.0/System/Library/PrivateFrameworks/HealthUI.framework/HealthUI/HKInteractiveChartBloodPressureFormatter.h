@interface HKInteractiveChartBloodPressureFormatter : HKInteractiveChartDataFormatter

- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_formattedStringWithRange:(id)a0 displayUnit:(BOOL)a1;
- (BOOL)_higherMaximum:(id)a0 currentMaximum:(id)a1;
- (BOOL)_lowerMinimum:(id)a0 currentMinimum:(id)a1;
- (id)_stringFromRange:(id)a0 numberFormatter:(id)a1 displayType:(id)a2 unitController:(id)a3;

@end
