@class AXAccessQueue, NSMutableDictionary, NSString, NSMutableArray;

@interface AXSpringBoardServer : AXServer <AXSystemAppServer>

@property (class, readonly, nonatomic) BOOL isAvailable;

@property (retain, nonatomic) AXAccessQueue *accessQueue;
@property (copy, nonatomic) id /* block */ currentAlertHandler;
@property (retain, nonatomic) NSMutableArray *actionHandlers;
@property (retain, nonatomic) NSMutableDictionary *reachabilityHandlers;
@property (retain, nonatomic) NSMutableDictionary *mediaPlayingHandlers;
@property (readonly, nonatomic) BOOL isGuidedAccessActive;
@property (nonatomic) BOOL bluetoothPowerEnabled;
@property (nonatomic) BOOL shouldFocusNonExclusiveSystemUI;
@property (nonatomic) BOOL zoomEnabled;
@property (nonatomic) BOOL voiceOverEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)server;

- (void)setReachabilityEnabled:(BOOL)a0;
- (void)takeScreenshot;
- (BOOL)isPasscodeLockVisible;
- (id)medusaApps;
- (void)pid:(id /* block */)a0;
- (long long)activeInterfaceOrientation;
- (void)setReachabilityActive:(BOOL)a0;
- (BOOL)isDockVisible;
- (BOOL)dismissSiri;
- (void)toggleSpotlight;
- (void)setVolume:(double)a0;
- (id)init;
- (void)_willClearServer;
- (void)setOrientation:(long long)a0;
- (BOOL)isStatusBarNativeFocusableIncludingNonDismissableElements:(BOOL)a0;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)launchVoiceOverQuickSettingsViewService:(id)a0;
- (id)_axSpringBoardServerInstanceDelegate;
- (id)focusedApps;
- (id)_payloadForRemoteViewType:(long long)a0 data:(id)a1;
- (void)setShowSpeechPlaybackControls:(BOOL)a0;
- (void)resumeMedia;
- (double)reachabilityOffset;
- (void)showRemoteView:(long long)a0 withData:(id)a1;
- (void)rebootDevice;
- (void)toggleDock;
- (id)splashImageForAppWithBundleIdentifier:(id)a0;
- (BOOL)showNotificationCenter:(BOOL)a0;
- (void)revealSpotlight;
- (void)openSCATCustomGestureCreation;
- (BOOL)isMagnifierVisible;
- (id)_handleMediaPlayingResult:(id)a0;
- (BOOL)dismissBuddyIfNecessary;
- (BOOL)isSiriTalkingOrListening;
- (BOOL)isPurpleBuddyAppFrontmost;
- (BOOL)isShowingLongLookNotification;
- (BOOL)isSystemAppFrontmostExludingSiri;
- (void)setCaptionPanelContextId:(unsigned int)a0;
- (void)hideRemoteView:(long long)a0;
- (void)setOrientationLocked:(BOOL)a0;
- (void)didPotentiallyDismissNonExclusiveSystemUI;
- (void)launchFloatingApplication:(id)a0;
- (id)allowedMedusaGestures;
- (BOOL)hasActiveOrPendingCall;
- (void)screenLockStatus:(id /* block */)a0 passcodeStatusRequired:(BOOL)a1;
- (void)launchVoiceOverImageExplorerViewServiceForResult:(id)a0 withData:(id)a1;
- (BOOL)isStatusBarNativeFocusable;
- (double)volumeLevel;
- (void)relinquishAssertionWithType:(id)a0 identifier:(id)a1;
- (void)_sendRemoteViewIPCMessage:(int)a0 withRemoteViewType:(long long)a1 withData:(id)a2;
- (void)toggleLiveTranscription;
- (int)pid;
- (void)cancelSiriDismissalForAssistiveTouch;
- (id)focusedOccludedAppScenes;
- (void)setCancelGestureActivation:(unsigned long long)a0 cancelEnabled:(BOOL)a1;
- (int)purpleBuddyPID;
- (void)removeActionHandler:(id)a0;
- (id)focusedAppPID;
- (BOOL)isSyncingRestoringResettingOrUpdating;
- (void)_didConnectToClient;
- (BOOL)isRingerMuted;
- (BOOL)isOrientationLocked;
- (void)registerSpringBoardActionHandler:(id /* block */)a0 withIdentifierCallback:(id /* block */)a1;
- (BOOL)isSystemAppFrontmost;
- (void)setHearingAidControlVisible:(BOOL)a0;
- (BOOL)canLaunchAsFloatingApplicationForIconView:(id)a0;
- (void)pauseMediaForApp:(id)a0;
- (void)isSystemSleeping:(id /* block */)a0;
- (void)_didConnectToServer;
- (void)toggleBackgroundSounds;
- (BOOL)isScreenshotWindowVisible;
- (void)toggleDetectionMode;
- (BOOL)isSpotlightVisible;
- (void)showNotificationCenter;
- (void)purpleBuddyPID:(id /* block */)a0;
- (id)runningAppPIDs;
- (void)dismissShelfSwitcher;
- (void)launchPinnedApplication:(id)a0 onLeadingSide:(BOOL)a1;
- (BOOL)connectedDevicesRequireAssistiveTouch;
- (BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)a0;
- (void)systemAppInfoWithQuery:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)toggleTorch;
- (BOOL)isSettingsAppFrontmost;
- (id)jindoAppBundleIndentifiers;
- (int)_actionResultKey;
- (BOOL)showControlCenter:(BOOL)a0;
- (id)displayIdentifierForSceneIdentifier:(id)a0;
- (BOOL)isNotificationVisible;
- (BOOL)toggleIncomingCall;
- (BOOL)hasActiveEndpointCall;
- (BOOL)isShelfSwitcherVisible;
- (BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)a0 includingNonDismissableElements:(BOOL)a1;
- (void)requestDismissJindo;
- (void)_wasDisconnectedFromClient;
- (BOOL)isAppleWatchRemoteScreenActive;
- (BOOL)isPointInsideAccessibilityInspector:(id)a0;
- (id)visibleTripleClickItems;
- (BOOL)loadGAXBundleForUnmanagedASAM;
- (id)_axSpringBoardServerInstanceIfExists;
- (BOOL)isNowPlayingUIVisible;
- (void)showAlert:(int)a0 withHandler:(id /* block */)a1;
- (void)hideNotificationCenter;
- (BOOL)hasActiveCall;
- (int)nativeFocusedApplication;
- (BOOL)performMedusaGesture:(unsigned long long)a0;
- (void)setDockIconActivationMode:(unsigned long long)a0;
- (id)runningAppProcesses;
- (BOOL)isSiriVisible;
- (void)toggleReachability;
- (int)topEventPidOverride;
- (id)_handleReplyResult:(id)a0;
- (void)reactivateInCallService;
- (id)_axSpringBoardServerInstance;
- (void)resumeMediaForApp:(id)a0;
- (BOOL)_shouldValidateEntitlements;
- (BOOL)currentDevicesHaveAssistiveTouchCustomActions;
- (void)toggleAppLibrary;
- (void)resetDimTimer;
- (BOOL)areSystemGesturesDisabledByAccessibility;
- (void)launchMagnifierApp;
- (BOOL)isScreenLockedWithPasscode:(BOOL *)a0;
- (void)wakeUpDeviceIfNecessary;
- (void).cxx_destruct;
- (BOOL)isInspectorMinimized;
- (void)removeReachabilityHandler:(id)a0;
- (BOOL)isPIPWindowVisible;
- (void)openAppSwitcher;
- (BOOL)hasActiveOrPendingCallOrFaceTime;
- (BOOL)isShowingRemoteView:(long long)a0;
- (void)openCommandAndControlVocabulary;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isSideSwitchUsedForOrientation;
- (id)_serviceName;
- (BOOL)isStageManagerSwitcherVisible;
- (void)launchApplication:(id)a0;
- (BOOL)isBannerVisible;
- (BOOL)isScreenSaverVisible;
- (BOOL)isNotificationCenterVisible;
- (void)registerReachabilityHandler:(id /* block */)a0 withIdentifierCallback:(id /* block */)a1;
- (void)activateSOSMode;
- (void)freezeClarityUILoadingScreenWithCompletion:(id /* block */)a0;
- (id)appNameFromPid:(int)a0;
- (void)launchOnboardingViewService:(id)a0;
- (void)openCommandAndControlSettings;
- (BOOL)canLaunchAsPinnedApplicationForIconView:(id)a0;
- (id)focusedAppProcess;
- (BOOL)isShowingAXAlert;
- (BOOL)isShowingHomescreen;
- (long long)activeApplicationOrientation;
- (BOOL)isReceivingAirPlay;
- (BOOL)isControlCenterVisible;
- (BOOL)isShowingNonSystemApp;
- (void)showAlert:(int)a0 withHandler:(id /* block */)a1 withData:(id)a2;
- (void)copyStringToPasteboard:(id)a0;
- (void)pauseMedia;
- (id)installedApps;
- (void)startHearingAidServer;
- (BOOL)isSoftwareUpdateUIVisible;
- (BOOL)isSpeakThisTemporarilyDisabled;
- (void)presentNearbyDeviceControlPicker;
- (void)simulateEdgePressHaptics;
- (BOOL)isSystemAppShowingAnAlert;
- (void)activeInterfaceOrientation:(id /* block */)a0;
- (void)_isSystemAppFrontmostExcludingSiri:(BOOL)a0 completion:(id /* block */)a1;
- (void)openCommandAndControlCommands;
- (BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)a0;
- (BOOL)isVoiceControlRunning;
- (void)isSystemAppFrontmost:(id /* block */)a0;
- (void)hideAlert;
- (void)cancelReachabilityDetection;
- (void)cleanupAlertHandler;
- (BOOL)isAppSwitcherVisible;
- (void)toggleNotificationCenter;
- (BOOL)_shouldDispatchLocally;
- (BOOL)isLockScreenVisible;
- (void)armApplePay;
- (BOOL)areSystemGesturesDisabledNatively;
- (id)_handleReachabilityResult:(id)a0;
- (BOOL)canSetDockIconActivationMode;
- (void)toggleQuickNote;
- (id)applicationWithIdentifier:(id)a0;
- (void)isMagnifierVisibleWithCompletion:(id /* block */)a0;
- (BOOL)isSystemSleeping;
- (void)dismissAppSwitcher;
- (BOOL)isDarkModeActive;
- (id)internalApps;
- (void)isMediaPlayingForApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)acquireAssertionWithType:(id)a0 identifier:(id)a1;
- (void)openVoiceControl;
- (BOOL)toggleDarkMode;
- (void)unlockDevice;

@end
