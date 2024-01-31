@class NSString, NSUUID, NSMutableDictionary, HKDataFlowLink, NSLock;

@interface HDGymKitMetricsDataSource : HDStandardTaskServer <HKGymKitDataSourceServerInterface, HDMetricsCollectorObserver, HKDataFlowLinkProcessor, HDWorkoutDataSource> {
    HKDataFlowLink *_workoutDataFlowLink;
    NSLock *_lock;
    NSMutableDictionary *_accumulatedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)dealloc;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_startTaskServerIfNeeded;
- (void)_startObservingMetrics;
- (void)metricsCollector:(id)a0 didCollectMetrics:(id)a1;
- (void)workoutDataDestination:(id)a0 didBeginActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 didEndActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didInsertEvent:(id)a1;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;

@end
