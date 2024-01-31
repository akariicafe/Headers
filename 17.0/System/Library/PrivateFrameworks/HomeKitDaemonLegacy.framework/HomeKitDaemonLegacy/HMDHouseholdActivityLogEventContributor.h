@class NSString, HMMDateProvider, HMDEventCountersManager;

@interface HMDHouseholdActivityLogEventContributor : HMDLogEventAnalyzer <HMDHouseholdActivityLogEventContributing>

@property (readonly, nonatomic) NSString *householdGroupName;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (void)coalesceLogEvent:(id)a0 fromSourceEvent:(id)a1;
- (void)contributeLogEvent:(id)a0 toCoreAnalyticsEvent:(id)a1;
- (void)contributeLogEvent:(id)a0 toSerializedMetric:(id)a1;
- (void)deserializeLogEvent:(id)a0 fromSerializedMetric:(id)a1;
- (void)finishCoalescingLogEvent:(id)a0;
- (id)householdGroupForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)householdGroupForLogEvent:(id)a0;
- (id)initWithHouseholdGroupName:(id)a0 countersManager:(id)a1 dateProvider:(id)a2;
- (void)populateLogEvent:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2;
- (void)startCoalescingLogEvent:(id)a0;

@end
