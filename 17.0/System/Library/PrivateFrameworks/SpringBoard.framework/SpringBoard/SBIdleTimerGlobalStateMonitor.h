@class NSHashTable, NSString, _SBIdleTimerGlobalNumericSettingMonitor, SBBacklightController, SBLocalDefaults, _SBIdleTimerGlobalBoolSettingMonitor, SBIdleTimerAggregateClientConfiguration, NSNumber, SBIdleTimerService;
@protocol SBFThermalBlockProvider, BSInvalidatable;

@interface SBIdleTimerGlobalStateMonitor : NSObject <SBPocketStateMonitorObserver, _SBIdleTimerGlobalSettingMonitorDelegate, SBIdleTimerServiceDelegate, SBFThermalConditionObserver, SBBacklightControllerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    NSHashTable *_observers;
    SBBacklightController *_backlightController;
    SBIdleTimerService *_idleTimerService;
    SBLocalDefaults *_localDefaults;
    id<SBFThermalBlockProvider> _thermalBlockProvider;
    id /* block */ _dontLockEver;
    id /* block */ _dontDimOrLockOnAC;
    id /* block */ _disableAttentionAwareness;
    id /* block */ _minimumLockscreenIdleTime;
    _SBIdleTimerGlobalNumericSettingMonitor *_autoLockTimeoutMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_batterySaverModeMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_onACPowerMonitor;
    BOOL _autoDimDisabled;
    BOOL _thermalBlocked;
    BOOL _screenIsOn;
    id<BSInvalidatable> _stateCaptureAssertion;
}

@property (readonly, nonatomic) long long pocketState;
@property (readonly, nonatomic) BOOL dontLockEver;
@property (readonly, nonatomic) BOOL dontDimOrLockOnAC;
@property (readonly, nonatomic) BOOL disableAttentionAwareness;
@property (readonly, nonatomic) double minimumLockscreenIdleTime;
@property (readonly, nonatomic) NSNumber *autoLockTimeout;
@property (readonly, nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive;
@property (readonly, nonatomic, getter=isOnACPower) BOOL onACPower;
@property (readonly, nonatomic, getter=isFaceDownOnTable) BOOL faceDownOnTable;
@property (readonly, nonatomic, getter=isAutoDimDisabled) BOOL autoDimDisabled;
@property (readonly, nonatomic) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration;
@property (readonly, nonatomic, getter=isThermalBlocked) BOOL thermalBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)backlightController:(id)a0 didTransitionToBacklightState:(long long)a1 source:(long long)a2;
- (void)_updateObserversForReason:(id)a0;
- (void)dealloc;
- (void)_updateAutoDimDisabled;
- (void)removeObserver:(id)a0;
- (id /* block */)_boolMonitorForProperty:(id)a0 inDefaults:(id)a1 fetchingWith:(id /* block */)a2;
- (id)_init;
- (id)_stateCaptureDescription;
- (void)_addStateCaptureHandlers;
- (void)idleTimerGlobalSettingMonitor:(id)a0 changedForReason:(id)a1;
- (void)pocketStateMonitor:(id)a0 pocketStateDidChangeFrom:(long long)a1 to:(long long)a2;
- (id)_initWithLocalDefaults:(id)a0 profileConnection:(id)a1 pocketStateMonitor:(id)a2 uiController:(id)a3 idleTimerService:(id)a4 thermalBlockProvider:(id)a5 backlightController:(id)a6;
- (void)idleTimerServiceTimeoutAssertionsDidChange:(id)a0;
- (id /* block */)_timeIntervalMonitorForProperty:(id)a0 inDefaults:(id)a1 fetchingWith:(id /* block */)a2;
- (void).cxx_destruct;
- (void)thermalBlockStatusChanged:(id)a0;
- (void)addObserver:(id)a0;
- (void)_updateFaceDownOnTable;

@end
