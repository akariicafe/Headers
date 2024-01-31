@interface AMDPerf : NSObject

+ (void)enable:(BOOL)a0;
+ (void)setVerbosity:(char)a0;
+ (id)getContainer;
+ (void)endMonitoringEvent:(id)a0;
+ (void)provision;
+ (void)startMonitoringEvent:(id)a0;
+ (void)sampleForKey:(id)a0;
+ (void)log:(id)a0 atLevel:(int)a1;
+ (id)generatePerformanceDict;

@end
