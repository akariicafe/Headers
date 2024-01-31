@class SBSystemApertureController, NSHashTable, NSString, SBDeviceApplicationSceneHandle, NSSet, NSTimer, SBSystemApertureSettings, NSMutableSet, UIStatusBarServer, SBWindowSceneStatusBarAssertionManager, SBSystemApertureStatusBarPillElement;

@interface SBSystemApertureStatusBarPillElementProvider : NSObject <UIStatusBarServerClient, SBWindowSceneStatusBarAssertionManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneStatusBarStateObserver, STBackgroundActivityManagerClient, BSInvalidatable, SBSystemApertureBackgroundActivitiesSuppressing>

@property (readonly, nonatomic) UIStatusBarServer *_statusBarServer;
@property (weak, nonatomic) SBSystemApertureController *elementRegistrar;
@property (weak, nonatomic) SBWindowSceneStatusBarAssertionManager *statusBarAssertionManager;
@property (retain, nonatomic) NSMutableSet *_registeredElements;
@property (readonly, nonatomic) SBSystemApertureStatusBarPillElement *_activeElement;
@property (readonly, nonatomic) SBSystemApertureStatusBarPillElement *_nowLocatingElement;
@property (readonly, nonatomic) SBSystemApertureStatusBarPillElement *_nowRecordingElement;
@property (copy, nonatomic) NSSet *currentBackgroundActivityIdentifiers;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (weak, nonatomic) SBDeviceApplicationSceneHandle *observedSceneHandle;
@property (readonly, nonatomic) NSHashTable *suppressionAssertions;
@property (readonly, nonatomic) NSMutableSet *applicationsWithActiveElements;
@property (readonly, nonatomic) NSMutableSet *assertionsForApplicationsWithActiveElements;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSString *resolvedBackgroundActivityIdentifier;
@property (retain, nonatomic) NSTimer *applyOverridesDebounceTimer;
@property (retain, nonatomic) SBSystemApertureSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (void)statusBarServer:(id)a0 didReceiveStatusBarData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a1 withActions:(int)a2;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_lockStateChanged;
- (void)sceneWithIdentifier:(id)a0 didChangeBackgroundActivitiesToSuppressTo:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)statusBarAssertionManager:(id)a0 addStatusBarSettingsAssertion:(id)a1;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)invalidate;
- (void)statusBarServer:(id)a0 didReceiveStyleOverrides:(unsigned long long)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (void)statusBarServer:(id)a0 didReceiveDoubleHeightStatusString:(id)a1 forStyle:(long long)a2;
- (void)addObserver:(id)a0;
- (void)statusBarServer:(id)a0 didReceiveGlowAnimationState:(BOOL)a1 forStyle:(long long)a2;
- (void)statusBarAssertionManager:(id)a0 removeStatusBarSettingsAssertion:(id)a1;
- (void)activeBackgroundActivitiesDidUpdate:(id)a0;
- (void)_invalidateElement:(id)a0 withReason:(id)a1;
- (BOOL)_managesDedicatedElementForBackgroundActivityIdentifier:(id)a0;
- (BOOL)_managesDedicatedElementForBackgroundActivityIdentifiers:(id)a0;
- (void)_nowLocatingAppsDidChange;
- (void)_nowRecordingAppDidChange;
- (void)_registerElement:(id)a0;
- (void)_updateActiveElementIfNeededForReason:(id)a0;
- (void)_updateActiveElementIfNeededForReason:(id)a0 notifyingObserversIfNecessary:(BOOL)a1;
- (void)_updateActiveElementIfNeededWithLayoutState:(id)a0 reason:(id)a1;
- (void)_updateActiveElementIfNeededWithLayoutState:(id)a0 reason:(id)a1 notifyingObserversIfNecessary:(BOOL)a2;
- (void)_updateCurrentBackgroundActivityIdentifiersWithStatusBarOverrides:(unsigned long long)a0;
- (void)_updateNowLocatingElementWithReason:(id)a0;
- (void)_updateNowRecordingAndNowLocatingElementsWithReason:(id)a0;
- (void)_updateNowRecordingElementWithReason:(id)a0;
- (id)acquireActiveElementAssertionForApplication:(id)a0 reason:(id)a1;
- (id)acquireSuppressionAssertionForBackgroundActivities:(id)a0 reason:(id)a1;
- (void)activateWithRegistrar:(id)a0;
- (void)statusBarAssertionManager:(id)a0 statusBarSettingsDidChange:(id)a1;

@end
