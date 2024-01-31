@class NSString, NSHashTable, SBAmbientSettings, SBWindowScene, CMSuppressionManager;
@protocol SBFIdleTimerBehaviorProviding;

@interface SBAmbientIdleTimerController : NSObject <SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver> {
    NSHashTable *_observers;
    SBAmbientSettings *_ambientSettings;
    BOOL _suppressionEnabled;
    BOOL _suppressionServiceStarted;
    unsigned long long _monitoredSuppressionReasons;
    CMSuppressionManager *_suppressionManager;
}

@property (weak, nonatomic, getter=_windowScene, setter=_setWindowScene:) SBWindowScene *windowScene;
@property (nonatomic, getter=isAmbientSuppressed, setter=_setAmbientSuppressed:) BOOL ambientSuppressed;
@property (nonatomic, getter=_isIdleTimerAllowedForAssertions, setter=_setIdleTimerAllowedForAssertions:) BOOL idleTimerAllowedForAssertions;
@property (nonatomic, getter=_isIdleTimerAllowedForSuppression, setter=_setIdleTimerAllowedForSuppression:) BOOL idleTimerAllowedForSuppression;
@property (nonatomic, getter=isUserSleepPredicted, setter=_setUserSleepPredicted:) BOOL userSleepPredicted;
@property (readonly, nonatomic) id<SBFIdleTimerBehaviorProviding> idleTimerBehaviorProvider;
@property (nonatomic, getter=isSuppressionMonitoringActive) BOOL suppressionMonitoringActive;
@property (readonly, nonatomic) long long idleTimerDuration;
@property (readonly, nonatomic) long long idleTimerMode;
@property (readonly, nonatomic) long long idleWarnMode;
@property (readonly, nonatomic) double customIdleExpirationTimeout;
@property (readonly, nonatomic) double customIdleWarningTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_notifyObserversIdleTimerBehaviorDidChange;
- (void)_notifyObserversSuppressionDidEnd;
- (void)_notifyObserversUserSleepPredictedDidChange;
- (void)_setActiveSuppressionReasons:(unsigned long long)a0;
- (void)_setSuppressionEnabled:(BOOL)a0;
- (unsigned long long)_sourcesForMonitoredEvents;
- (void)_updateAmbientSuppressed;
- (void)_updateSuppressionManager;
- (void)_updateUserSleepPredicted;

@end
