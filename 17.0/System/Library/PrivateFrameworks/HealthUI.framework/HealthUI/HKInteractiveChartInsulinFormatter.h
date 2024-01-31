@interface HKInteractiveChartInsulinFormatter : HKInteractiveChartGenericStatFormatter

- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)a0 items:(id)a1;
- (id)_formattedStringWithBasalValue:(double)a0 bolusValue:(double)a1;
- (id)_formattedStringWithValue:(double)a0 unit:(id)a1 deliveryReason:(long long)a2;

@end
