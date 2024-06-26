@class UIWindow, AXSSMotionTrackingInputManager, AXSpringBoardServerSideAppManager, AXSpringBoardServerAlertManager, NSString, AXAssertion, NSMutableArray;
@protocol BSInvalidatable;

@interface AXSpringBoardServerHelper : NSObject <AXSpringBoardServerSideAppManagerDelegate, AXSSMotionTrackingInputManagerDelegate, AXSpringBoardServerInstanceDelegate> {
    id /* block */ _alertHandler;
    NSMutableArray *_visibleTripleClickItems;
    BOOL _shouldOverrideInterfaceOrientation;
    NSMutableArray *_notificationObservers;
}

@property (readonly, nonatomic) AXSpringBoardServerSideAppManager *sideAppManager;
@property (retain, nonatomic) AXSpringBoardServerAlertManager *alertManager;
@property (retain, nonatomic) UIWindow *presentationWindow;
@property (retain, nonatomic) id<BSInvalidatable> presentationWindowFocusAssertion;
@property (readonly, nonatomic) AXSSMotionTrackingInputManager *motionTrackingInputManager;
@property (retain, nonatomic) AXAssertion *disableSystemGesturesAssertionForAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_iconController;
+ (id)_uiController;
+ (id)_wallpaperController;
+ (void)initialize;
+ (id)_globalIdleTimeCoordinator;
+ (id)_axActiveWindowScene;
+ (id)sharedServerHelper;
+ (id)_backlightController;
+ (id)_applicationController;
+ (id)_lockScreenManager;
+ (id)_assistantController;
+ (id)_syncController;
+ (id)_awayController;

- (BOOL)isPasscodeLockVisible;
- (BOOL)isBuddyRunning;
- (BOOL)isAppSwitcherVisibleWithServerInstance:(id)a0;
- (BOOL)_accessibilityIsUILocked;
- (id)serverInstance:(id)a0 splashImageForAppWithBundleIdentifier:(id)a1;
- (void)setReachabilityActive:(BOOL)a0;
- (BOOL)handleToggleIncomingCallWithServerInstance:(id)a0;
- (BOOL)isStageManagerSwitcherVisibleWithServerInstance:(id)a0;
- (id)serverInstance:(id)a0 springBoardSystemInfoQuery:(unsigned long long)a1;
- (void)freezeClarityUILoadingScreenWithServerInstance:(id)a0;
- (void)dismissAlertWithCancel;
- (void)_handleASTMenuCustomizeAddDwell:(BOOL)a0 addScroll:(BOOL)a1;
- (id)medusaBundleIDsToLayoutRoles;
- (id)_accessibilityCoverSheetPresentationManagerSharedInstance;
- (double)volumeLevelWithServerInstance:(id)a0;
- (BOOL)isLockScreenVisibleWithServerInstance:(id)a0;
- (id)init;
- (void)toggleLiveTranscriptionWithServerInstance:(id)a0;
- (void)_toggleTripleClickDisplay;
- (void)launchApplicationWithFullConfiguration:(id)a0;
- (BOOL)hasActiveEndpointCallWithServerInstance:(id)a0;
- (void)_handleAlertActionPress:(id)a0;
- (void)openCommandAndControlVocabularyWithServerInstance:(id)a0;
- (void)_performValidation;
- (void)dealloc;
- (void)updateFrontMostApplicationWithServerInstance:(id)a0;
- (void)launchMagnifierAppWithServerInstance:(id)a0;
- (void)_createAlertWindowSubclass;
- (void)_handleTripleClickAskAlert;
- (BOOL)accessibilityIsNotificationVisible;
- (BOOL)shouldOverrideInterfaceOrientation;
- (BOOL)_accessibilityHandleHomeOrLockButtonPress;
- (void)wakeUpDeviceIfNecessaryWithServerInstance:(id)a0;
- (id)focusedAppPIDWithServerInstance:(id)a0;
- (id)_serviceForRemoteViewType:(long long)a0;
- (double)reachabilityOffsetWithServerInstance:(id)a0;
- (void)serverInstance:(id)a0 hideRemoteViewType:(long long)a1;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)toggleQuickNoteWithServerInstance:(id)a0;
- (void)launchOnboardingViewServiceWithServerInstance:(id)a0 data:(id)a1;
- (void)_handleTouchAccommodationsUsageConfirmed;
- (void)_handleAlwaysOnBluetoothModeForVoiceOver;
- (void)openCommandAndControlCommandsWithServerInstance:(id)a0;
- (BOOL)isDarkModeActiveWithServiceInstance:(id)a0;
- (void)handleBrokenHomeButtonAlert;
- (void)_dismissViewControllerWithCompletion:(id /* block */)a0;
- (void)hideAlertWithServerInstance:(id)a0;
- (BOOL)isScreenLockedWithServerInstance:(id)a0;
- (BOOL)hasActiveCallWithServerInstance:(id)a0;
- (void)serverInstanceBringInCallServiceForeground:(id)a0;
- (void)launchFloatingApplication:(id)a0;
- (void)reactivateInCallServiceWithServerInstance:(id)a0;
- (BOOL)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)a0;
- (id)coverSheetViewController;
- (void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)a0;
- (void)_handleDisableBrightnessFiltersAlert:(id)a0;
- (BOOL)isSiriVisibleWithServerInstance:(id)a0;
- (BOOL)_shouldShowTCOption:(int)a0;
- (void)serverInstance:(id)a0 pauseMedia:(BOOL)a1 forBundleId:(id)a2;
- (void)serverInstance:(id)a0 setReachabilityEnabled:(BOOL)a1;
- (void)toggleSpotlightWithServerInstance:(id)a0;
- (BOOL)_accessibilityShowNotificationCenter:(BOOL)a0 serverInstance:(id)a1;
- (void)openMenuCustomizationForASTWithServerInstance:(id)a0;
- (void)_handleConnectedDevicesHaveAssistiveTouchCustomActions;
- (void)dismissShelfSwitcherWithServerInstance:(id)a0;
- (id)focusedAppsWithServerInstance:(id)a0;
- (BOOL)isShowingNonSystemAppWithServerInstance:(id)a0;
- (void)openCustomGestureCreationForSCATWithServerInstance:(id)a0;
- (void)openVoiceControlWithServerInstance:(id)a0;
- (BOOL)isMakingEmergencyCallWithServerInstance:(id)a0;
- (void)rebootDeviceWithServerInstance:(id)a0;
- (BOOL)canSetDockIconActivationModeForServerInstance:(id)a0;
- (BOOL)canLaunchAsFloatingApplicationForIconView:(id)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (BOOL)isSystemGestureActiveWithServerInstance:(id)a0;
- (void)toggleDockWithServerInstance:(id)a0;
- (BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)a0;
- (id)_visibleTripleClickItems;
- (id)runningAppPIDsWithServerInstance:(id)a0;
- (BOOL)serverInstance:(id)a0 performMedusaGesture:(unsigned long long)a1;
- (id)visibleTripleClickItemsWithServerInstance:(id)a0;
- (BOOL)isDockVisibleWithServerInstance:(id)a0;
- (void)setDashBoardSystemGesturesEnabled:(BOOL)a0 withServerInstance:(id)a1;
- (void)serverInstance:(id)a0 showSpeechPlaybackControls:(BOOL)a1;
- (BOOL)isSettingsAppFrontmostWithServerInstance:(id)a0;
- (id)allowedMedusaGesturesWithServerInstance:(id)a0;
- (void)launchPinnedApplication:(id)a0 onLeadingSide:(BOOL)a1;
- (void)_displayViewController:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleVONoHomeButtonGestureAlert;
- (void)_displayViewController:(id)a0;
- (BOOL)isReachabilityActive;
- (BOOL)connectedDevicesRequireAssistiveTouch;
- (BOOL)isPIPWindowVisibleWithServerInstance:(id)a0;
- (BOOL)isNotificationCenterVisibleWithServerInstance:(id)a0;
- (void)launchVoiceOverImageExplorerViewServiceWithServerInstance:(id)a0 forData:(id)a1;
- (BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)a0;
- (void)openCommandAndControlSettingsWithServerInstance:(id)a0;
- (void)serverInstance:(id)a0 setOrientationLocked:(BOOL)a1;
- (void)unlockDeviceWithServerInstance:(id)a0;
- (BOOL)isStatusBarNativeFocusableWithServerInstance:(id)a0 includingNonDismissableElements:(BOOL)a1;
- (void)isMediaPlayingWithServerInstance:(id)a0 forBundleId:(id)a1 completion:(id /* block */)a2;
- (void)_handleDisallowUSBRestrictedModeSCInformativeOnly:(BOOL)a0;
- (id)displayIdentifierForSceneIdentifier:(id)a0 serverInstance:(id)a1;
- (id)runningAppProcessesWithServerInstance:(id)a0;
- (id)jindoAppBundleIndentifiersWithServerInstance:(id)a0;
- (BOOL)isSystemSleepingWithServerInstance:(id)a0;
- (BOOL)isPreferencesFrontmost;
- (void)openCustomGestureCreationForASTWithServerInstance:(id)a0;
- (void)toggleBackgroundSoundsWithServerInstance:(id)a0;
- (id)_handleUsageConfirmationDialogWithMessage:(id)a0;
- (BOOL)dismissSiriWithServerInstance:(id)a0;
- (id)internalAppsWithServerInstance:(id)a0;
- (id)appNameFromPid:(int)a0 withServerInstance:(id)a1;
- (void)_handleConfirmRebootDevice;
- (void)dismissAppSwitcherWithServerInstance:(id)a0;
- (void)_handleASTMenuFullForInstance:(id)a0;
- (BOOL)isPurpleBuddyAppFrontmostWithServerInstance:(id)a0;
- (BOOL)isCoverSheetVisibleWithServerInstance:(id)a0;
- (BOOL)serverInstance:(id)a0 showNotificationCenter:(BOOL)a1;
- (void)forceLoadGAXBundleWithServerInstance:(id)a0;
- (BOOL)isGuidedAccessActiveWithServerInstance:(id)a0;
- (BOOL)serverInstance:(id)a0 isShowingRemoteViewType:(long long)a1;
- (int)purpleBuddyPIDWithServerInstance:(id)a0;
- (void)openAppSwitcherWithServerInstance:(id)a0;
- (void)diminishJindoWithServerInstance:(id)a0;
- (void)_handleDisableSwitchControlConfirmation;
- (id)focusedOccludedAppScenesWithServerInstance:(id)a0;
- (int)nativeFocusedApplication;
- (id)sceneLayoutState;
- (void)_sortVisibleItems;
- (BOOL)accessibilityIsBannerVisible;
- (BOOL)isShelfSwitcherVisibleWithServerInstance:(id)a0;
- (void)_handleSecureItentAlertForSwitchAST;
- (void)serverInstance:(id)a0 showRemoteViewType:(long long)a1 withData:(id)a2;
- (BOOL)currentDevicesHaveAssistiveTouchCustomActions;
- (BOOL)isRingerMutedWithServerInstance:(id)a0;
- (BOOL)isSystemAppShowingAnAlertWithServerInstance:(id)a0;
- (BOOL)isShowingHomescreenWithServerInstance:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityShowControlCenter:(BOOL)a0;
- (BOOL)_isDarkModeActive;
- (unsigned long long)_accessibilityNotificationCount;
- (BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)a0 withServerInstance:(id)a1;
- (BOOL)isBannerVisibleWithServerInstance:(id)a0;
- (void)_dismissAlertController;
- (BOOL)isNotificationVisibleWithServerInstance:(id)a0;
- (void)toggleDetectionModeWithServerInstance:(id)a0;
- (BOOL)isLongLookNotificationVisibleWithServerInstance:(id)a0;
- (BOOL)hasActiveOrPendingCallWithServerInstance:(id)a0;
- (BOOL)serverInstance:(id)a0 showControlCenter:(BOOL)a1;
- (void)_handleLiveTranscriptionConfirmation;
- (BOOL)toggleDarkModeWithServerInstance:(id)a0;
- (void)resetDimTimerWithServerInstance:(id)a0;
- (void)armApplePayWithServerInstance:(id)a0;
- (BOOL)_accessibilityAllowShowNotificationGestureOverride;
- (id)focusedAppProcessWithServerInstance:(id)a0;
- (void)_handleVoiceOverUsageConfirmation;
- (void)serverInstance:(id)a0 showAlertType:(int)a1 withHandler:(id /* block */)a2 withData:(id)a3;
- (void)launchApplication:(id)a0;
- (id)_axFloatingDockController;
- (id)frontmostAppProcessWithServerInstance:(id)a0;
- (BOOL)isTodayViewOrAppLibraryVisibleWithServerInstance:(id)a0;
- (void)_updateVisibleTripleClickItems;
- (id)medusaAppsWithServerInstance:(id)a0;
- (void)serverInstance:(id)a0 setDockIconActivationMode:(unsigned long long)a1;
- (BOOL)canLaunchAsPinnedApplicationForIconView:(id)a0;
- (void)_handleDisallowUSBRestrictedModeVOInformativeOnly:(BOOL)a0;
- (void)_handleZoomTripleClickAfterConflict;
- (void)_handleDisableAssistiveTouchConfirmation;
- (id)_accessibilityNotificationSummary:(unsigned long long)a0;
- (void)didFailToPinAppForSideAppManager:(id)a0;
- (BOOL)isOrientationLockedWithServerInstance:(id)a0;
- (id)serverInstance:(id)a0 appWithIdentifier:(id)a1;
- (void)_handleZoomConflictAlert:(id)a0;
- (void)toggleTorchWithServerInstance:(id)a0;
- (id)installedAppsWithServerInstance:(id)a0;
- (BOOL)isPasscodeLockVisibleWithServerInstance:(id)a0;
- (BOOL)isPasscodeRequiredOnLockWithServerInstance:(id)a0;
- (void)launchVoiceOverQuickSettingsViewServiceWithServerInstance:(id)a0 data:(id)a1;
- (BOOL)isScreenshotWindowVisibleWithServerInstance:(id)a0;
- (BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(id)a0;
- (void)didFailToFloatAppForSideAppManager:(id)a0;
- (BOOL)isAppSwitcherPeekingWithServerInstance:(id)a0;
- (void)serverInstance:(id)a0 setOrientation:(long long)a1;
- (void)_cleanupAlertController;
- (void)_unlockWithIntent:(int)a0;
- (BOOL)isSpotlightVisibleWithServerInstance:(id)a0;
- (void)_displayAlertController:(id)a0;
- (void)_handleDisableFKAConfirmation;
- (BOOL)isLockScreenVisible;
- (void)presentNearbyDeviceControlPickerWithServerInstance:(id)a0;
- (BOOL)isSpeakThisTemporarilyDisabledWithServerInstance:(id)a0;
- (void)_dismissAlertControllerWithCompletion:(id /* block */)a0;
- (BOOL)_accessibilityShowCoverSheet:(BOOL)a0 serverInstance:(id)a1 completion:(id /* block */)a2;
- (void)simulateEdgePressHaptics:(id)a0;
- (void)toggleNotificationCenterWithServerInstance:(id)a0;
- (BOOL)isControlCenterVisibleWithServerInstance:(id)a0;
- (void)_handleSwitchUsageConfirmed;
- (void)activateSOSModeWithServerInstance:(id)a0;
- (void)revealSpotlightWithServerInstance:(id)a0;
- (BOOL)_isDisplayingAlertController;
- (id)appForLayoutRole:(long long)a0;
- (BOOL)isMagnifierVisibleWithServerInstance:(id)a0;
- (void)_handleZoomInBuddyAlert;
- (void)cancelSiriDismissalForAssistiveTouchWithServerInstance:(id)a0;
- (void)toggleAppLibraryWithServerInstance:(id)a0;
- (void)_cleanupPresentationWindow;
- (BOOL)isVoiceControlRunningWithServerInstance:(id)a0;

@end
