@interface HKMCProjectionAccuracyAnalytics : NSObject

+ (BOOL)shouldSubmit;
+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (id)_closestProjectionToLoggedDayIndex:(long long)a0 analysis:(id)a1;
+ (id)_isSleepConfiguredForWristTemperatureMeasurementsWithError:(id *)a0;
+ (void)submitMetricWithDayIndex:(long long)a0 oldMenstrualFlow:(long long)a1 newMenstrualFlow:(long long)a2 analysis:(id)a3 isLoggingMultipleDays:(BOOL)a4 periodPredictionEnabled:(BOOL)a5 heartRateBasedPredictionEnabled:(BOOL)a6 wristTemperatureBasedPredictionEnabled:(BOOL)a7 isWristTemperatureInputDelivered:(BOOL)a8 internalLiveOnCycleFactorOverrideEnabled:(BOOL)a9 cycles:(id)a10;

@end
