@interface WorkoutKitXPCServiceHelper : NSObject <WorkoutKitXPCServiceProtocol>

+ (id)sharedInstance;

- (id)_init;
- (void)presentWorkoutCompositionData:(id)a0 completion:(id /* block */)a1;
- (void)deleteScheduledWorkoutCompositionsForSourceBundleId:(id)a0 completion:(id /* block */)a1;
- (void)addScheduledWorkouts:(id)a0 sourceBundleId:(id)a1 completion:(id /* block */)a2;
- (void)openWorkoutAppWithWorkoutCompositionData:(id)a0 completion:(id /* block */)a1;
- (void)removeScheduledWorkouts:(id)a0 sourceBundleId:(id)a1 completion:(id /* block */)a2;
- (void)requestAuthorizationForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAuthorizationStateForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)retrieveScheduledWorkoutCompositionsForSourceBundleId:(id)a0 completion:(id /* block */)a1;
- (void)retrieveWorkoutCompositionFromWorkoutUUID:(id)a0 completion:(id /* block */)a1;
- (void)saveWorkoutCompositionData:(id)a0 completion:(id /* block */)a1;
- (void)handleUninstalledAppIds:(id)a0 completion:(id /* block */)a1;
- (void)iconForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)openWorkoutAppWithWorkoutPlanData:(id)a0 completion:(id /* block */)a1;
- (void)presentWorkoutConfigurationData:(id)a0 completion:(id /* block */)a1;
- (void)retrieveWorkoutCompositionFromWorkout:(id)a0 completion:(id /* block */)a1;
- (void)setAuthorizationState:(id)a0 forBundleId:(id)a1 completion:(id /* block */)a2;
- (void)storeScheduledWorkoutCompositions:(id)a0 sourceBundleId:(id)a1 completion:(id /* block */)a2;

@end
