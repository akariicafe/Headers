@class HDWorkoutEventsManager, NSString, HDWorkoutSessionConfiguration, NSSet, HDBiomeInterface, HDProfile, NSObject, HDSessionAssertionGroup, HKWorkoutActivity;
@protocol HDWorkoutSessionStateController, OS_dispatch_queue;

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController> {
    HDProfile *_profile;
    id<HDWorkoutSessionStateController> _sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    HDSessionAssertionGroup *_assertionGroup;
    HDWorkoutEventsManager *_eventsManager;
    long long _sessionServerState;
    HDBiomeInterface *_bmInterface;
    HKWorkoutActivity *_currentActivity;
    NSSet *_collectedTypes;
    id /* block */ _hkTestTransitionCompletionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)a0 profile:(id)a1;

- (void)dealloc;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)enableAutomaticDetectionForActivityConfigurations:(id)a0;
- (void)_lowPowerModeStateChanged:(id)a0;
- (void)beginNewActivity:(id)a0;
- (void)endCurrentActivity:(id)a0;
- (void)fakeActivityDetection:(id)a0 workoutActivity:(id)a1;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)a0;
- (id)initWithProfile:(id)a0 sessionConfiguration:(id)a1 sessionStateController:(id)a2 recoveryState:(id)a3;
- (void)receivedWorkoutEvent:(id)a0;
- (void)receivedWorkoutEvent:(id)a0 forWorkoutActivity:(id)a1;
- (void)unitTest_suggestActivity:(id)a0;
- (void)workoutSessionServer:(id)a0 accumulatorDidChange:(id)a1;
- (void)workoutSessionServer:(id)a0 didChangeConfiguration:(id)a1;
- (void)workoutSessionServer:(id)a0 didTransitionFromState:(long long)a1 toState:(long long)a2 date:(id)a3;

@end
