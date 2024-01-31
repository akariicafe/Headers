@class HMDNetworkObserver;

@interface HMDHouseholdNetworkStabilityLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory>

@property (readonly, nonatomic) HMDNetworkObserver *networkObserver;

- (void).cxx_destruct;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)coalescedLogEventsFromLogEvents:(id)a0 homeUUID:(id)a1;
- (id)initWithNetworkObserver:(id)a0;
- (id)logEventsFromDictionary:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)serializeLogEvents:(id)a0;

@end
