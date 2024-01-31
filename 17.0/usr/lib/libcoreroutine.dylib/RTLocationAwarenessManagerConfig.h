@interface RTLocationAwarenessManagerConfig : NSObject <NSCopying>

@property (readonly, nonatomic) double heartbeatIntervalResolution;
@property (readonly, nonatomic) double maxHeartbeatInterval;
@property (readonly, nonatomic) double dispatchTimerLeeway;
@property (readonly, nonatomic) double requiredHorizontalAccuracy;
@property (readonly, nonatomic) double activeDuration;
@property (readonly, nonatomic) double minMetricSubmissionAge;
@property (readonly, nonatomic) double maxHorizontalAccuracyForCoarseLocation;
@property (readonly, nonatomic) double highAccuracyLocationRequestDuration;

- (id)init;
- (id)initWithHeartbeatIntervalResolution:(double)a0 maxHeartbeatInterval:(double)a1 dispatchTimerLeeway:(double)a2 requiredHorizontalAccuracy:(double)a3 activeDuration:(double)a4 minMetricSubmissionAge:(double)a5 maxHorizontalAccuracyForCoarseLocation:(double)a6 highAccuracyLocationRequestDuration:(double)a7;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
