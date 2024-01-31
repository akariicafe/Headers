@interface HDWorkoutCondenserControlServer : HDStandardTaskServer <HKWorkoutCondenserControlServer>

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_condensableWorkoutsWithCompletion:(id /* block */)a0;
- (void)remote_condenseWorkoutWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_condenseWorkoutsForReason:(long long)a0 workoutBatchLimit:(long long)a1 completion:(id /* block */)a2;
- (void)remote_condensedWorkoutsWithCompletion:(id /* block */)a0;

@end
