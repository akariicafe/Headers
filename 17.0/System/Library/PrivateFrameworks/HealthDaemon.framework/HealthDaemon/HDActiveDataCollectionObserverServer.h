@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDActiveDataCollectionObserverServer : HDStandardTaskServer <HKActiveDataCollectionObserverServerInterface, HDWorkoutSessionObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_observedTypes;
    NSSet *_recentlyNotifiedTypes;
    BOOL _recentlyNotifiedPauseState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (void)launchObservingProcessesForTypes:(id)a0;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)workoutSession:(id)a0 didGenerateEvent:(id)a1;
- (void)remote_subscribeForQuantityTypes:(id)a0;
- (void)remote_unsubscribeForQuantityTypes:(id)a0;

@end
