@interface HKHeightDisplayTypeValueFormatter : HKQuantityDisplayTypeValueFormatter

- (id)stringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5;
- (BOOL)_unitsAreFeetWithDisplayType:(id)a0 unitController:(id)a1;

@end
