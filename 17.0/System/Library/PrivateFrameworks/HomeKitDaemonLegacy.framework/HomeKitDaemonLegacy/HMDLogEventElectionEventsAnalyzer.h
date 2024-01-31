@class NSNumber, HMDEventCountersManager;

@interface HMDLogEventElectionEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property BOOL isCurrentDeviceInSecondaryResidentCoordinationMesh;
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id /* block */ uptimeFactory;
@property (retain, nonatomic) NSNumber *lastPrimaryUpdateTime;
@property double lastDurationInMeshUpdateTime;

+ (id)managedEventCounterRequestGroups;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)_updatePrimaryDuration;
- (unsigned long long)fetchCountForEventName:(id)a0;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (void)incrementCountForEventName:(id)a0;
- (void)incrementCountForEventName:(id)a0 withValue:(long long)a1;
- (id)initWithDataSource:(id)a0 uptimeFactory:(id /* block */)a1;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)updateMeshStateAndDurationInPrimaryMeshForCurrentDevice:(BOOL)a0;
- (void)updatePrimaryDuration;

@end
