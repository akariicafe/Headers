@class NSString, BLSHBacklightEnvironmentStateMachine, BLSBacklightSceneUpdate, BLSBacklightChangeEvent, BLSHBacklightEnvironmentPresentation, NSMutableSet, BLSHBacklightInactiveEnvironmentSession, BLSHCriticalAssertTester;
@protocol BLSBacklightSceneEnvironment_Private, BLSHOSTimerProviding, BLSHBacklightEnvironmentSessionProviding;

@interface BLSHLocalHostSceneEnvironmentUpdater : NSObject <BLSHBacklightEnvironmentStateMachineDelegate, BLSHBacklightInactiveEnvironmentSessionUpdating, BLSBacklightSceneEnvironmentUpdating> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BLSHBacklightEnvironmentSessionProviding> _sessionProvider;
    id<BLSBacklightSceneEnvironment_Private> _localHostEnvironment;
    id<BLSHOSTimerProviding> _osTimerProvider;
    BLSHBacklightInactiveEnvironmentSession *_lock_inactiveEnvSession;
    BLSHBacklightEnvironmentPresentation *_lock_updatingToPresentation;
    BLSHBacklightEnvironmentStateMachine *_environmentStateMachine;
    NSMutableSet *_lock_timelinesCalculators;
    BLSBacklightSceneUpdate *_lock_sceneUpdateForPerformingEvent;
    BLSBacklightChangeEvent *_lock_localTriggerEventForPerformingEvent;
    BLSHCriticalAssertTester *_criticalAssertTester;
    unsigned long long _lock_nextEventID;
}

@property (readonly, nonatomic) long long backlightState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performDesiredFidelityRequest:(id)a0;
- (void)environmentStateMachine:(id)a0 didCompleteUpdateToState:(long long)a1;
- (void)environmentStateMachine:(id)a0 didUpdateToPresentation:(id)a1;
- (void)performFrameSpecifiersRequest:(id)a0;
- (void)environmentStateMachine:(id)a0 didUpdateToSpecifier:(id)a1;
- (void)inactiveEnvironmentSession:(id)a0 updateToPresentation:(id)a1;
- (void).cxx_destruct;
- (void)updatedEnvironmentWithDelta:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; })a0 backlightSceneUpdate:(id)a1;
- (void)environmentStateMachine:(id)a0 didBeginUpdateToState:(long long)a1;
- (void)ensureInactiveEnvSessionCreated;
- (void)aggregateDesiredFidelityForBacklightState:(long long)a0 withCompletion:(id /* block */)a1;
- (void)destroyInactiveEnvSession;
- (BOOL)ensureAlwaysOnSessionCreated;
- (id)initWithSessionProvider:(id)a0 localHostEnvironment:(id)a1;
- (void)onMain_ensureInactiveEnvSessionCreated;
- (void)performBlockWithSubhostedEnvironments:(id /* block */)a0;
- (void)performWithSubhostedEnvironmentsFromPresentationEntries:(id)a0 block:(id /* block */)a1;
- (id)subHostedHostEnvironments;
- (void)timelinesForDateInterval:(id)a0 previousPresentationDate:(id)a1 localHostEnvironment:(id)a2 shouldReset:(BOOL)a3 completion:(id /* block */)a4;

@end
