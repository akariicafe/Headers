@class SBWakeDebounceFilter, NSString, SBIdleTimerDefaults, NSHashTable, BSCompoundAssertion, CMWakeGestureManager;

@interface SBLiftToWakeController : NSObject <BLSBacklightStateObserving, CMWakeGestureDelegate> {
    CMWakeGestureManager *_wakeGestureManager;
    long long _wakeGestureState;
    NSHashTable *_observers;
    BOOL _screenOn;
    BOOL _observingCMWakeGestureManager;
    BSCompoundAssertion *_bumpToWakeAssertions;
    SBWakeDebounceFilter *_bumpToWakeDebounceFilter;
}

@property (retain, nonatomic, getter=_idleTimerDefaults, setter=_setIdleTimerDefaults:) SBIdleTimerDefaults *idleTimerDefaults;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)_handleBacklightLevelChanged:(id)a0;
- (id)init;
- (id)acquireBumpToWakeEnableAssertionForReason:(id)a0;
- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1 orientation:(int)a2 detectedAt:(unsigned long long)a3;
- (void)removeObserver:(id)a0;
- (void)_stopObservingIfNecessary;
- (void)_startObservingBumpsIfNecessary;
- (void)_reconsiderEnablement;
- (void)wakeGestureManager:(id)a0 didUpdateWakeGestureEvent:(id)a1;
- (void)_startObservingIfNecessary;
- (BOOL)_isObservingWakeGestureManager;
- (id)initWithBacklightController:(id)a0 idleTimerDefaults:(id)a1;
- (void)_sendIgnoredTransitionToObservers:(long long)a0;
- (void).cxx_destruct;
- (void)_screenTurnedOn;
- (void)_sendTransitionToObservers:(long long)a0 deviceOrientation:(long long)a1;
- (void)_ignoredTransition:(long long)a0;
- (void)_stopObservingBumpsIfNecessary;
- (void)addObserver:(id)a0;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)_screenTurnedOff;

@end
