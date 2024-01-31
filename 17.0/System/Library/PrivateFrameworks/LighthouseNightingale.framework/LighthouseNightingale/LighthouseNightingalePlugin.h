@interface LighthouseNightingalePlugin : NSObject

+ (void)initialize;
+ (BOOL)checkIfPluginShouldRunOnJulianDay:(long long)a0 andWithDeploymentId:(long long)a1 andCadence:(long long)a2;
+ (BOOL)doWorkWithRecipe:(id)a0 telemetryIds:(id)a1 outError:(id *)a2;
+ (id)getPseudoDeviceID;
+ (void)performHistoricalEvaluationWithHKHealthStore:(id)a0 andDayStreamProcessorConfig:(id)a1 useHeartRate:(BOOL)a2 useWristTemperature:(BOOL)a3 runWithDropOut:(BOOL)a4 additionalDayCount:(long long)a5 minCycleLength:(long long)a6 maxCycleLength:(long long)a7 simulateCrashOnTimeout:(BOOL)a8 error:(id *)a9;
+ (void)updateUserDefaultsThatPluginRanOnJulianDay:(long long)a0 withDeploymentId:(long long)a1;
+ (BOOL)userHasDataFromDayStreamProcessorConfig:(id)a0;

- (void)stop;

@end
