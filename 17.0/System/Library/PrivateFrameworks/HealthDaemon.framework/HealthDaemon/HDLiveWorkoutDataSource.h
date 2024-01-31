@class HDWorkoutBasicDataSource, NSString, NSUUID, HDProfile, HKWorkoutDataSourceConfiguration, HKDataFlowLink, NSLock;
@protocol HDWorkoutDataAccumulator;

@interface HDLiveWorkoutDataSource : HDStandardTaskServer <HKLiveWorkoutDataSourceServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination> {
    HDProfile *_profile;
    HKDataFlowLink *_workoutDataFlowLink;
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    HDWorkoutBasicDataSource *_basicDataSource;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_synchronizeWithCompletion:(id /* block */)a0;
- (void)remote_setDataSourceConfiguration:(id)a0;
- (void)remote_startTaskServerIfNeeded;
- (void)addMetadata:(id)a0 dataSource:(id)a1;
- (void)addOtherSamples:(id)a0 dataSource:(id)a1;
- (void)addQuantities:(id)a0 dataSource:(id)a1;
- (void)addWorkoutEvents:(id)a0 dataSource:(id)a1;
- (void)didBeginActivity:(id)a0 dataSource:(id)a1;
- (void)didEndActivity:(id)a0 dataSource:(id)a1;
- (void)didReceiveDataFromRemoteWorkoutSession:(id)a0 completion:(id /* block */)a1;
- (void)didSuggestActivity:(id)a0 dataSource:(id)a1;
- (void)updateWorkoutConfiguration:(id)a0 dataSource:(id)a1;
- (void)workoutDataDestination:(id)a0 didBeginActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 didEndActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didInsertEvent:(id)a1;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;

@end
