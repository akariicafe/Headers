@interface LPKPerfResultAnalyzer : NSObject

+ (id)_abstractUserSwitchsFromTheEnd:(long long)a0 userSwitches:(id)a1;
+ (double)_durationFromString:(id)a0;
+ (id)_perfResultsFromUserSwitches:(id)a0;
+ (void)_populateMigratorsData:(id)a0;
+ (id)analyzePerformanceTestResult:(id)a0 type:(unsigned long long)a1 count:(long long)a2;

@end
