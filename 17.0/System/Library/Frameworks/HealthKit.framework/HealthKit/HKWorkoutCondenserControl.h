@class NSString, HKTaskServerProxyProvider;

@interface HKWorkoutCondenserControl : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)serverInterface;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)condenseWorkoutsForReason:(long long)a0 workoutBatchLimit:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)condensableWorkoutsWithCompletion:(id /* block */)a0;
- (void)condenseWorkoutWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)condensedWorkoutsWithCompletion:(id /* block */)a0;

@end
