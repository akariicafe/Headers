@class UIWindow, NSString, AXAssetsService, AXDispatchTimer, AXAccessQueueTimer;

@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate, AVSpeechSynthesizerDelegate, AXUIClientDelegate> {
    UIWindow *_voiceOverVibrateWindow;
    AXAccessQueueTimer *_voiceOverActivationCanceler;
    AXDispatchTimer *_managedConfigurationNotificationCoalesceTimer;
    AXAssetsService *_assetsService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_registerForNotifications;
+ (void)_performValidations;
+ (void)_updateSpringBoardHelper;
+ (BOOL)_alreadyRebootedGracefullyOnce;
+ (void)_checkContrastSetting;
+ (void)_checkClosedCaptioningSetByiTunes;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)initialize;
+ (void)_processStartupSoundEnabled;
+ (void)_checkAssistiveTouchSetByiTunes;
+ (void)_setRebootedGracefullyOnce;
+ (void)_handleLiveListenEventIsListening:(BOOL)a0 audioLevel:(double)a1;
+ (void)_gracefulRebootForBrokenHomeButton;
+ (void)_registerForHomeButtonBreakage;
+ (void)_checkVoiceOverTouchSetByiTunes;
+ (void)_checkForHomeButtonBreakage:(BOOL)a0;
+ (void)_findNoteFromLoginSessionWithCompletion:(id /* block */)a0;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (void)_updateAXSettings;
+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)checkAccessibilityOptions;
+ (void)checkScreenContrast;
+ (void)_registerForHomeButtonBreakageNotification;
+ (void)_initializeDelayedSpringBoardSettings;
+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)_setVoiceOverTouchSettings:(unsigned char)a0;
+ (void)_startAssistiveTouchForBrokenHomeButton;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)_checkForDataResetFile;

- (id)init;
- (void)dealloc;
- (BOOL)_isDeviceAffectedByVOActivationWorkaround;
- (void)_initializeRemoteSettingsListener;
- (void)_bootstrapSoundDetection;
- (void)_playVOActivationSoundEnded;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_makeVoiceOverVibrateWindow;
- (void)_remoteAccessibilitySettingsChanged:(id)a0;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)a0;
- (void)_playVOActivationSoundStarted;
- (void)_updateRemoteAccessibilitySettings;
- (void)swipeDetectorCanceled;
- (void).cxx_destruct;
- (void)_hideVoiceOverEnabler;
- (void)_registerReachability;
- (void)_updateAXSettings;
- (void)_voiceOverEnabled:(id)a0;
- (void)_ensureUltronAppVisibility:(BOOL)a0;
- (void)swipeDetectorDetectedSwipe;
- (void)_showSwipeDetectionEnablerView;
- (void)_reachabilityChanged:(id)a0;

@end
