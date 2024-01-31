@interface HKInteractiveChartNumberRangeFormatter : NSObject

- (id)_attributedStringFromValue:(id)a0 withValueFormatter:(id)a1 displayType:(id)a2 unitController:(id)a3 valueFont:(id)a4 unitFont:(id)a5 formatForChart:(BOOL)a6;
- (BOOL)_shouldRemoveUnit:(id)a0 fromMaximumFormattedValue:(id)a1;
- (BOOL)_shouldRemoveUnit:(id)a0 fromMinimumFormattedValue:(id)a1;
- (id)attributedStringForMinimumString:(id)a0 maximumString:(id)a1 minimumUnitString:(id)a2 maximumUnitString:(id)a3 valueFont:(id)a4 formatForChart:(BOOL)a5 resultIsASingleValue:(BOOL *)a6;
- (id)attributedStringForMinimumValue:(id)a0 maximumValue:(id)a1 displayType:(id)a2 unitController:(id)a3 valueFont:(id)a4 unitFont:(id)a5 formatForChart:(BOOL)a6;
- (id)attributedStringForMinimumValue:(id)a0 maximumValue:(id)a1 displayType:(id)a2 unitController:(id)a3 valueFont:(id)a4 unitFont:(id)a5 formatForChart:(BOOL)a6 resultIsSingleValue:(BOOL *)a7;
- (id)stringForMinimumValue:(id)a0 maximumValue:(id)a1 displayType:(id)a2 unitPreferenceController:(id)a3;

@end
