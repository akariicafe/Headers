@class NSArray, NSDictionary;

@interface SBSSystemServiceClient : SBSServiceFacilityClient {
    BOOL _buttonEventServiceIsWaitingForServerMessages;
}

@property (nonatomic) long long passcodePolicy;
@property (nonatomic, getter=isChamoisWindowingUIEnabled) BOOL chamoisWindowingUIEnabled;
@property (nonatomic) BOOL chamoisPrefersDockHidden;
@property (nonatomic) BOOL chamoisPrefersStripHidden;
@property (readonly) BOOL deviceSupportsSystemAperture;
@property (readonly, copy) NSArray *systemApertureStateDump;
@property (readonly, copy) NSDictionary *widgetControllerStateDump;

+ (id)serviceFacilityIdentifier;

- (void)setReachabilityActive:(BOOL)a0;
- (void)addWidgetsToEachPage;
- (void)resetToHomeScreenAnimated:(BOOL)a0;
- (void)_handleButtonEventConsumePressMessage:(id)a0;
- (void)fetchHapticTypeForButtonKind:(long long)a0 completion:(id /* block */)a1;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (void)fetchUnlockCredentialSetWithCompletion:(id /* block */)a0;
- (void)setEventMask:(unsigned long long)a0 forButtonKind:(long long)a1 priority:(long long)a2;
- (id)acquireAssertionForReachabilityEnabled:(BOOL)a0;
- (void)setAmbientPresentationState:(long long)a0;
- (void)setUserPresenceDetectedSinceWake;
- (void)acquireAssertionOfType:(long long)a0 forReason:(id)a1 withCompletion:(id /* block */)a2;
- (void)writeStateDump:(unsigned long long)a0 toTextFileAtPath:(id)a1;
- (void)countScenesForBundleIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)setHapticType:(long long)a0 forButtonKind:(long long)a1;
- (void)requestAppSwitcherAppearanceForHiddenApplicationWithBundleIdentifier:(id)a0 reacquiringExistingAssertion:(id)a1 completion:(id /* block */)a2;
- (void)addWidgetWithIdentifier:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)setRequestsHIDEvents:(BOOL)a0 token:(id)a1 forButtonKind:(long long)a2;
- (void)stashSwitcherModelToPath:(id)a0;
- (void)suspendAllDisplays;
- (void)setApplicationBundleIdentifier:(id)a0 blockedForScreenTime:(BOOL)a1;
- (void)requestStateDump:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)setHiddenFeaturesEnabled:(BOOL)a0;
- (void)loadStashedSwitcherModelFromPath:(id)a0;
- (void)clearAllUserNotifications;
- (void)enableRemoteStateDumpWithTimeout:(long long)a0 completion:(id /* block */)a1;
- (id)deserializedStringArrayForKey:(const char *)a0 fromPayload:(id)a1;
- (void)setAlertsEnabled:(BOOL)a0;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)a0;
- (void)setOrientationLockEnabled:(BOOL)a0;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)a0;
- (void)setIdleTimerEnabled:(BOOL)a0;
- (void)setAccessoryType:(long long)a0 attached:(BOOL)a1;
- (long long)toggleStateForButtonKind:(long long)a0;
- (void)disableRemoteStateDumpWithCompletion:(id /* block */)a0;
- (void)exitLostMode;
- (void)addWidgetStackWithIdentifiers:(id)a0 toPage:(int)a1 withSizing:(int)a2;
- (void)setChamoisHideStripsEnabled:(BOOL)a0;
- (void)setMallocStackLoggingEnabled:(BOOL)a0;
- (void)enterLostMode;
- (void)setButtonEventServiceIsWaitingForServerMessages:(BOOL)a0;

@end
