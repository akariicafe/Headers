@interface HKInteractiveChartHearingSensitivityFormatter : HKInteractiveChartDataFormatter

- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)unitStringFromUnit:(id)a0 number:(id)a1;
- (id)_formattedFrequencyValue:(double)a0;
- (id)_selectedRangeDataForSensitivityData:(id)a0 isLeftEar:(BOOL)a1;
- (id)initWithUnitController:(id)a0;
- (id)valueStringFromNumber:(id)a0;

@end
