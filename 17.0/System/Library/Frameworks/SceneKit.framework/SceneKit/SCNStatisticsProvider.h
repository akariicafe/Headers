@interface SCNStatisticsProvider : NSObject

- (id)collectedShadersForPid:(int)a0;
- (id)performanceStatisticsForPid:(int)a0;
- (int)startCollectingPerformanceStatisticsForPid:(int)a0;
- (int)stopCollectingPerformanceStatisticsForPid:(int)a0;

@end
