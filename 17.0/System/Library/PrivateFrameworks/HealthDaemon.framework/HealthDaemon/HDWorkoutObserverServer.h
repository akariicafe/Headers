@class NSString, HDWorkoutSessionServer, NSLock;

@interface HDWorkoutObserverServer : HDStandardTaskServer <_HKWorkoutObserverServerInterface, HDCurrentWorkoutObserver, HDWorkoutDataAccumulatorObserver> {
    BOOL _registered;
    HDWorkoutSessionServer *_currentWorkout;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)workoutManager:(id)a0 didUpdateCurrentWorkout:(id)a1;
- (id)remoteInterface;
- (void)dealloc;
- (void)connectionInvalidated;
- (void)workoutManager:(id)a0 currentWorkout:(id)a1 didChangeToState:(long long)a2;
- (void).cxx_destruct;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_waitForAutomaticWorkoutRecoveryWithCompletion:(id /* block */)a0;
- (void)workoutDataAccumulator:(id)a0 didUpdateEvents:(id)a1;
- (void)workoutDataAccumulator:(id)a0 didUpdateStartDate:(id)a1;
- (void)workoutManager:(id)a0 currentWorkout:(id)a1 didUpdateDataAccumulator:(id)a2;

@end
