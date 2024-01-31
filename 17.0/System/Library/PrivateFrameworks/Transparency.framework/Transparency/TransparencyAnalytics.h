@class TransparencySFAnalytics;

@interface TransparencyAnalytics : NSObject

@property (retain) TransparencySFAnalytics *sfanalytics;

+ (BOOL)hasInternalDiagnostics;
+ (void)unsetGlobalLogger;
+ (id)formatEventName:(id)a0 application:(id)a1;
+ (id)analyticsApplications;
+ (BOOL)doWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)logger;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 validateType:(unsigned long long)a1 error:(id *)a2 block:(id /* block */)a3;
+ (id)errorChain:(id)a0 depth:(unsigned long long)a1;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)analyticsErrorData:(id)a0;

- (id)dailyMetrics;
- (void)setNumberProperty:(id)a0 forKey:(id)a1;
- (void)setSuccessNowForPropertyKey:(id)a0;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)logSuccessForEventNamed:(id)a0;
- (void)noteLaunchSequence:(id)a0;
- (id)fuzzyTimeSinceLastSuccess:(id)a0;
- (void)setFailureNowForPropertyKey:(id)a0;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void)setMetricsAccountID:(id)a0;
- (void)noteEventNamed:(id)a0;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)addMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (BOOL)skipLogResult:(id)a0;
- (id)numberPropertyForKey:(id)a0;
- (id)datePropertyForKey:(id)a0;
- (void).cxx_destruct;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (id)failureKey:(id)a0;
- (id)fuzzyTimeSinceDateKey:(id)a0;
- (void)updateCollectionConfigurationWithData:(id)a0;
- (void)removeMultiSamplerForName:(id)a0;
- (void)incrementIntegerPropertyForKey:(id)a0;

@end
