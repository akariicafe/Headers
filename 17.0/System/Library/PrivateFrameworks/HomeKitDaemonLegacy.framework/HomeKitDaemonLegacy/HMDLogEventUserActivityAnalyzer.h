@class HMDEventCounterGroup, HMDTimeBasedFlagsManager;

@interface HMDLogEventUserActivityAnalyzer : HMDHouseholdActivityLogEventContributor <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup;
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager;

+ (id)logCategory;
+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)_handleAccessoryPairingLogEvent:(id)a0;
- (void)_handleActionSetRunLogEvent:(id)a0;
- (void)_handleAddActionSetLogEvent:(id)a0;
- (void)_handleAddTriggerLogEvent:(id)a0;
- (void)_handleCameraClipRequestLogEvent:(id)a0;
- (void)_handleCameraStreamLogEvent:(id)a0;
- (void)_handleReadWriteLogEvent:(id)a0;
- (BOOL)_isTriggerSource:(unsigned long long)a0;
- (BOOL)_isUserSource:(unsigned long long)a0;
- (void)coalesceLogEvent:(id)a0 fromSourceEvent:(id)a1;
- (void)contributeLogEvent:(id)a0 toCoreAnalyticsEvent:(id)a1;
- (void)contributeLogEvent:(id)a0 toSerializedMetric:(id)a1;
- (void)deserializeLogEvent:(id)a0 fromSerializedMetric:(id)a1;
- (void)finishCoalescingLogEvent:(id)a0;
- (id)initWithEventCountersManager:(id)a0 flagsManager:(id)a1 dateProvider:(id)a2;
- (void)markActiveForEventName:(id)a0 logEvent:(id)a1;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)populateLogEvent:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2;
- (void)updateLinkTypeActivityCountsForReadWriteLogEvent:(id)a0;

@end
