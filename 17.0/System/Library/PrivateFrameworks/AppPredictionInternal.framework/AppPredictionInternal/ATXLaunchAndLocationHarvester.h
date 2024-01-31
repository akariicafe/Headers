@interface ATXLaunchAndLocationHarvester : NSObject

+ (id)_awdMetricsObjectWithLocation:(id)a0 date:(id)a1 bundleId:(id)a2 urlHash:(id)a3 isClip:(BOOL)a4 launchReason:(int)a5 isNegativeSession:(BOOL)a6;
+ (BOOL)_passedAppOrClipSpecificFiltersGivenBundleId:(id)a0 date:(id)a1 isClip:(BOOL)a2 counterKey:(id)a3 samplingRate:(double)a4 maxSamples:(unsigned long long)a5;
+ (BOOL)_passedGeneralFiltersGivenLocation:(id)a0 date:(id)a1;
+ (void)_postAwdMetrics:(id)a0;
+ (void)logAppOrClipLaunch:(id)a0 isNegativeSession:(BOOL)a1;

@end
