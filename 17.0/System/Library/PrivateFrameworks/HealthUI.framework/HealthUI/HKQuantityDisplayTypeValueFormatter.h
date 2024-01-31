@interface HKQuantityDisplayTypeValueFormatter : HKDisplayTypeValueFormatter

- (id)stringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5 unitFormatString:(id)a6;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5 unitFormatString:(id)a6 formatString:(id)a7;
- (id)attributedStringFromValue:(id)a0 unit:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5 unitFormatString:(id)a6 formatString:(id)a7;
- (id)attributedStringFromValueString:(id)a0 valueFont:(id)a1 unitString:(id)a2 unitFont:(id)a3 unitIcon:(id)a4 formatForChart:(BOOL)a5 formatString:(id)a6;
- (id)stringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 formatString:(id)a3;

@end
