@class HMDThreadNetworkObserver;

@interface HMDHouseholdThreadNetworkStabilityLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory>

@property (readonly, nonatomic) HMDThreadNetworkObserver *threadNetworkObserver;

- (void).cxx_destruct;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)coalescedLogEventsFromLogEvents:(id)a0 homeUUID:(id)a1;
- (id)initWithThreadNetworkObserver:(id)a0;
- (id)logEventsFromDictionary:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)serializeLogEvents:(id)a0;

@end
