@class NSArray, NSDictionary;

@interface SBSTestAutomationService : SBSAbstractSystemService

@property (nonatomic, getter=isChamoisWindowingUIEnabled) BOOL chamoisWindowingUIEnabled;
@property (nonatomic) BOOL chamoisPrefersDockHidden;
@property (nonatomic) BOOL chamoisPrefersStripHidden;
@property (readonly) BOOL deviceSupportsSystemAperture;
@property (readonly, copy) NSArray *systemApertureStateDump;
@property (readonly, copy) NSDictionary *widgetControllerStateDump;

- (void)setReachabilityActive:(BOOL)a0;
- (void)addWidgetsToEachPage;
- (void)resetToHomeScreenAnimated:(BOOL)a0;
- (id)acquireAssertionForReachabilityEnabled:(BOOL)a0;
- (void)setAmbientPresentationState:(long long)a0;
- (void)setUserPresenceDetectedSinceWake;
- (void)countScenesForBundleIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)addWidgetWithIdentifier:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)stashSwitcherModelToPath:(id)a0;
- (void)suspendAllDisplays;
- (void)setApplicationBundleIdentifier:(id)a0 blockedForScreenTime:(BOOL)a1;
- (void)setHiddenFeaturesEnabled:(BOOL)a0;
- (void)loadStashedSwitcherModelFromPath:(id)a0;
- (void)clearAllUserNotifications;
- (void)setAlertsEnabled:(BOOL)a0;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)a0;
- (void)setOrientationLockEnabled:(BOOL)a0;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)a0;
- (void)setIdleTimerEnabled:(BOOL)a0;
- (void)setAccessoryType:(long long)a0 attached:(BOOL)a1;
- (void)exitLostMode;
- (void)addWidgetStackWithIdentifiers:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)setMallocStackLoggingEnabled:(BOOL)a0;
- (void)enterLostMode;

@end
