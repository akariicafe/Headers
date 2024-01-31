@class BLSAssertion, NSString, BrightnessSystemClient, NSHashTable, SBAlwaysOnDefaults;
@protocol SBBacklightControllerContextProviding, BSInvalidatable;

@interface SBBacklightController : NSObject <BLSBacklightStateObserving, BLSHBacklightHostObserving> {
    id<SBBacklightControllerContextProviding> _contextProvider;
    NSHashTable *_observers;
    NSHashTable *_informers;
    long long _backlightState;
    id /* block */ _backlightCompletion;
    long long _lastReportedWillTransitionState;
    BrightnessSystemClient *_brightnessSystemClient;
    BLSAssertion *_disableAODAssertion;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    BOOL _hasPerformedBacklightChange;
}

@property (retain, nonatomic) id<BSInvalidatable> currentHIDUISensorModeAssertion;
@property (retain, nonatomic) id<BSInvalidatable> currentDisplayStateAssertion;
@property (readonly, nonatomic) BOOL isPendingScreenUnblankAfterCACommit;
@property (readonly, nonatomic) BOOL screenIsOn;
@property (readonly, nonatomic) BOOL screenIsDim;
@property (readonly, nonatomic) long long lastBacklightChangeSource;
@property (readonly, nonatomic, getter=isDigitizerDisabled) BOOL digitizerDisabled;
@property (readonly, nonatomic, getter=isTapToWakeEnabled) BOOL tapToWakeEnabled;
@property (readonly, nonatomic) BOOL tapToWakeRequiresHitTestSuppression;
@property (readonly, nonatomic) long long backlightState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;

- (void)_notifyObserversDidTransitionToBacklightState:(long long)a0 source:(long long)a1;
- (void)_notifyObserversWillTransitionToBacklightState:(long long)a0 source:(long long)a1;
- (void)preventIdleSleepForNumberOfSeconds:(float)a0;
- (id)init;
- (double)defaultLockScreenDimInterval;
- (void)removeObserver:(id)a0;
- (id)initWithContextProvider:(id)a0;
- (void)_updateHIDUISensorModeForBacklightState:(long long)a0 source:(long long)a1;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)a0;
- (void)_startFadeOutAnimationFromLockSource:(int)a0;
- (void)backlightHost:(id)a0 willTransitionToState:(long long)a1 forEvent:(id)a2;
- (void)setBacklightState:(long long)a0 source:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)preventIdleSleep;
- (void)_undimFromSource:(long long)a0;
- (void)completeStartup;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (void)allowIdleSleep;
- (void)_notifyObserversDidAnimateToFactor:(float)a0 source:(long long)a1;
- (BOOL)shouldTurnOnScreenForBacklightSource:(long long)a0;
- (void)turnOnScreenFullyWithBacklightSource:(long long)a0;
- (void).cxx_destruct;
- (float)_factorToPublishForBacklightState:(long long)a0;
- (void)_userInterfaceStyleChanged;
- (void)_performBacklightChangeRequest:(id)a0 completion:(id /* block */)a1;
- (void)registerInformer:(id)a0;
- (void)setBacklightState:(long long)a0 source:(long long)a1;
- (void)_noteDigitizerDisabled:(BOOL)a0 tapToWakeEnabled:(BOOL)a1 disabledDigitizerMode:(long long)a2;
- (void)addObserver:(id)a0;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)unregisterInformer:(id)a0;
- (void)_notifyObserversWillAnimateToFactor:(float)a0 source:(long long)a1;

@end
