@interface HKRelativeQuantityDisplayTypeValueFormatter : HKQuantityDisplayTypeValueFormatter

- (id)stringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5 unitFormatString:(id)a6 formatString:(id)a7;
- (id)stringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 formatString:(id)a3;

@end
