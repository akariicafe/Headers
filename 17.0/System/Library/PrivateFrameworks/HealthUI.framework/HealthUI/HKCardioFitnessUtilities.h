@interface HKCardioFitnessUtilities : NSObject <HKHealthChartFactoryViewControllerProviderClass>

+ (id)cardioFitnessDataForBiologicalSex:(long long)a0;
+ (id)cardioFitnessDataForBiologicalSex:(long long)a0 age:(long long)a1;
+ (id)cardioFitnessDataForLevel:(long long)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (id)cardioFitnessDataForLevel:(long long)a0 date:(id)a1 healthStore:(id)a2;
+ (id)cardioFitnessDataForVO2Max:(double)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)a0 healthStore:(id)a1;
+ (long long)cardioFitnessLevelForVO2Max:(double)a0 biologicalSex:(long long)a1 age:(long long)a2;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)a0 inHealthStore:(id)a1;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)a0;
+ (id)vo2MaxInteractiveChartViewControllerWithDisplayDate:(id)a0 applicationItems:(id)a1 restorationUserActivity:(id)a2 trendModel:(id)a3 additionalChartOptions:(unsigned long long)a4;
+ (id)_localizationKeyForCardioFitnessLevel:(long long)a0 keyVariant:(id)a1;
+ (id)cardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)a0 applicationItems:(id)a1 preferredOverlay:(long long)a2 analyticsDelegate:(id)a3 restorationUserActivity:(id)a4 trendModel:(id)a5 additionalChartOptions:(unsigned long long)a6;
+ (BOOL)cardioFitnessLevelChartShouldDisplayLowerBound:(long long)a0;
+ (BOOL)cardioFitnessLevelChartShouldDisplayUpperBound:(long long)a0;
+ (id)cardioFitnessLevelDataForChartData:(id)a0;
+ (id)cardioFitnessLookupPropertiesForChartData:(id)a0;
+ (id)classificationIdentifierForIndex:(long long)a0;
+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)a0 chartFactory:(id)a1 applicationItems:(id)a2 displayDate:(id)a3 preferredOverlay:(long long)a4 restorationUserActivity:(id)a5 trendModel:(id)a6 additionalChartOptions:(unsigned long long)a7;
+ (id)effectiveChartPointDateWithStatisticsInterval:(id)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)localizationKeyForCardioFitnessLevel:(long long)a0;
+ (id)localizedStringForCardioFitnessDescription:(long long)a0 age:(long long)a1;
+ (id)localizedStringForCardioFitnessLevel:(long long)a0;
+ (id)localizedStringForCardioFitnessLevelName:(long long)a0;
+ (id)localizedStringForCardioFitnessTitle:(long long)a0;

@end
