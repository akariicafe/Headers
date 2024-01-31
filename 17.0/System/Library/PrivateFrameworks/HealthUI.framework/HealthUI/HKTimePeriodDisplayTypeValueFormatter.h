@interface HKTimePeriodDisplayTypeValueFormatter : HKDisplayTypeValueFormatter

- (id)stringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5;
- (id)attributedStringFromValue:(id)a0 roundToHours:(BOOL)a1 displayType:(id)a2 unitController:(id)a3 valueFont:(id)a4 unitFont:(id)a5 formatForChart:(BOOL)a6;
- (id)attributedStringFromValue:(id)a0 roundToHours:(BOOL)a1 displayType:(id)a2 unitController:(id)a3 valueFont:(id)a4 unitFont:(id)a5 formatForChart:(BOOL)a6 usePerDayFormatting:(BOOL)a7;

@end
