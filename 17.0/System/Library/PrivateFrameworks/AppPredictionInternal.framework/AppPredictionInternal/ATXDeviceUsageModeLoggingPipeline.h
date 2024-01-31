@class BPSPublisher;

@interface ATXDeviceUsageModeLoggingPipeline : NSObject {
    double _lastEventTimestamp;
    unsigned long long _lastActivityType;
}

@property (readonly, nonatomic) BPSPublisher *modeTransitionPublisher;
@property (readonly, nonatomic) BPSPublisher *displayIntervalPublisher;

- (id)init;
- (void)persistState;
- (void).cxx_destruct;
- (id)timeMergedPublisherFromEventPublishers:(id)a0 modeTransitionPublisher:(id)a1;
- (id)_coalesceAndFilterDisplayOnIntervals:(id)a0;
- (BOOL)_shouldCoalesceOnInterval:(id)a0 nextInterval:(id)a1;
- (id)displayIntervalsFromStartDate:(id)a0 endDate:(id)a1;
- (id)initWithModeTransitionPublisher:(id)a0 displayIntervalPublisher:(id)a1 lastEventTimestamp:(double)a2 lastActivityType:(unsigned long long)a3;
- (unsigned long long)lastKnownActivityFromStore;
- (double)lastPipelineRunTimestampFromStore;
- (void)logDeviceUsage;
- (void)logDeviceUsageWithXPCActivity:(id)a0;

@end
