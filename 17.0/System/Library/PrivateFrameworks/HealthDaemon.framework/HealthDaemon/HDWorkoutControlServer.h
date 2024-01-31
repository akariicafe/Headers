@class NSString, HDWorkoutManager;

@interface HDWorkoutControlServer : HDStandardTaskServer <HKWorkoutControlServer> {
    HDWorkoutManager *_workoutManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)exportedInterface;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)remote_finishAllWorkoutsWithCompletion:(id /* block */)a0;
- (void)remote_generateFakeDataForActivityType:(long long)a0 minutes:(double)a1 completion:(id /* block */)a2;
- (void)remote_generatePauseOrResumeRequestAllowingBackgroundRuntime:(BOOL)a0 completion:(id /* block */)a1;

@end
