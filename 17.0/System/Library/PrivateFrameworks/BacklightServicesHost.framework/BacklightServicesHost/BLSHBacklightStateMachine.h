@class BLSAssertion, NSString, BLSBacklightChangeEvent, NSHashTable, BLSHOnSystemSleepAction;
@protocol BLSHOSInterfaceProviding, BLSHBacklightHostTelemetryDelegate, BSTimerScheduleQuerying, BSInvalidatable, BLSHSystemActivityAsserting, BLSHBacklightStateMachineEventPerforming;

@interface BLSHBacklightStateMachine : NSObject <BLSHBacklightHostObserving, BLSHBacklightPlatformProviderObserver, BLSHDisableAlwaysOnProvider, BLSHBacklightHostTelemetrySource, BLSHBacklightStateMachineEventPerformerDelegate, BLSHOnSystemSleepActionDelegate, BLSBacklightProxy, BLSHBacklightHostObservable> {
    id<BLSHOSInterfaceProviding> _osInterfaceProvider;
    BLSHOnSystemSleepAction *_sleepAction;
    id /* block */ _lock_sleepActionCompletion;
    BLSBacklightChangeEvent *_lock_transitioningEvent;
    BLSAssertion *_lock_flipbookPowerSavingAssertion;
    id<BLSHSystemActivityAsserting> _lock_activeOnAPAwakeAssertion;
    unsigned long long _lock_activeOnAPAwakeAssertionAcquireTime;
    id<BSInvalidatable> _lock_unexpectedSleepDebounceTimer;
    id<BLSHSystemActivityAsserting> _lock_performEventAPAwakeAssertion;
    id<BSTimerScheduleQuerying, BSInvalidatable> _lock_activeOnAPAwakeTimeoutTimer;
    NSHashTable *_lock_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _lock_nextEventID;
    long long _lock_activityState;
    BOOL _lock_alwaysOnEnabledResolved;
    BOOL _lock_alwaysOnEnabledByPlatform;
    BOOL _lock_alwaysOnDisabledByAssertion;
    BOOL _lock_alwaysOnEnabledAfterInitialization;
    BOOL _lock_alwaysOnSuppressed;
    BOOL _lock_notifyingObserversWillTransitionToState;
    BOOL _suppressionSupported;
    BOOL _deviceSupportsAlwaysOn;
}

@property (readonly, nonatomic) long long backlightState;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) BLSBacklightChangeEvent *activeTransitionEvent;
@property (readonly, nonatomic) id<BLSHBacklightStateMachineEventPerforming> eventPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isAlwaysOnDisabledByAssertion) BOOL alwaysOnDisabledByAssertion;
@property (weak) id<BLSHBacklightHostTelemetryDelegate> telemetryDelegate;
@property (readonly, nonatomic) unsigned long long backlightStateChangeTimestamp;
@property (readonly, copy, nonatomic) NSString *backlightStateDescription;
@property (readonly, nonatomic) long long flipbookState;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) BOOL deviceSupportsAlwaysOn;
@property (readonly, nonatomic, getter=isAlwaysOnSuppressed) BOOL alwaysOnSuppressed;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithPlatformProvider:(id)a0 eventPerformer:(id)a1 osInterfaceProvider:(id)a2;
- (void)platformProvider:(id)a0 didChangeAlwaysOnSetting:(BOOL)a1;
- (id)performChangeRequest:(id)a0;
- (void)backlight:(id)a0 didCompleteUpdateToFlipbookState:(long long)a1 forEvents:(id)a2 abortedEvents:(id)a3;
- (void)platformProviderDidDetectSignificantUserInteraction:(id)a0;
- (void)systemSleepAction:(id)a0 performWithCompletion:(id /* block */)a1;
- (void)registerHandlersForService:(id)a0;
- (void).cxx_destruct;
- (void)eventPerformer:(id)a0 didUpdateVisualContentsToBeginTransitionToState:(long long)a1 forEvents:(id)a2 abortedEvents:(id)a3;
- (void)systemSleepAction:(id)a0 systemWillWakeForReason:(id)a1;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvents:(id)a2 abortedEvents:(id)a3;
- (void)addObserver:(id)a0;
- (void)eventPerformer:(id)a0 didUpdateDisplayStateForState:(long long)a1 forEvents:(id)a2 abortedEvents:(id)a3;
- (void)performUnexpectedSleepRequest:(id)a0;

@end
