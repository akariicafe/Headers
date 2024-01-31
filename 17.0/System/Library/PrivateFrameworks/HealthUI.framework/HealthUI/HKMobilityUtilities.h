@interface HKMobilityUtilities : NSObject

+ (id)localizedTitleForWalkingSteadinessEventCategoryValue:(long long)a0;
+ (id)localizedDescriptionForClassification:(long long)a0;
+ (id)localizedTitleForClassification:(long long)a0;
+ (id)_localizedStringForClassification:(long long)a0 narrow:(BOOL)a1;
+ (BOOL)_valueRangeMin:(double *)a0 max:(double *)a1 forChartData:(id)a2;
+ (BOOL)chartDataSpansMultipleClassifications:(id)a0;
+ (long long)classificationForAppleWalkingSteadinessQuantity:(id)a0;
+ (long long)classificationForAppleWalkingSteadinessValue:(double)a0;
+ (id)generateAppleWalkingSteadinessDataSourceForTimeScope:(long long)a0 displayType:(id)a1 healthStore:(id)a2 quantityType:(id)a3 unitController:(id)a4;
+ (id)generateAppleWalkingSteadinessSeriesForTimeScope:(long long)a0 displayType:(id)a1 color:(id)a2;
+ (id)localizedAxisLabelStringForClassification:(long long)a0;

@end
