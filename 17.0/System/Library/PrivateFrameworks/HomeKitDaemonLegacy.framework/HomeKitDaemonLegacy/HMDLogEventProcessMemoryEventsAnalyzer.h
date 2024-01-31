@class HMDEventCountersManager;

@interface HMDLogEventProcessMemoryEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) unsigned long long storedAverageProcessMemoryKB;
@property (readonly) unsigned long long storedPeakProcessMemoryKB;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)_handleMemoryPressureNotificationLogEvent:(id)a0;
- (void)_handleMemorySampleLogEvent:(id)a0;
- (id)initWithEventCountersManager:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;

@end
