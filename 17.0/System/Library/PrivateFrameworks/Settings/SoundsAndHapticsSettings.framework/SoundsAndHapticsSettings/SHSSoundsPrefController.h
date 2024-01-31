@class NSString, CoreTelephonyClient, PSSpecifier, NSNumberFormatter, SHSAudioPlayback, SHSRingerControl, ADASManager, NSNumber;

@interface SHSSoundsPrefController : PSListController <SHSRingerControlDelegate, CoreTelephonyClientCarrierBundleDelegate, SoundsAndHapticsSettings.SHSHapticsOptionsViewDelegate, PSListControllerTestableSpecifiers> {
    BOOL _hasTelephony;
    BOOL _volumeHUDsuppressed;
}

@property (retain, nonatomic) ADASManager *audioSettingsManager;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) SHSAudioPlayback *_audioPlayback;
@property (nonatomic, getter=_isVolumeSliderVisible) BOOL _volumeSliderVisible;
@property (retain, nonatomic) SHSRingerControl *_ringerControl;
@property (retain, nonatomic) CoreTelephonyClient *_client;
@property (retain, nonatomic) PSSpecifier *_voiceMailSpecifier;
@property (retain, nonatomic) PSSpecifier *_audioGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *_headphoneLevelLimitingSpecifier;
@property (nonatomic) long long _voiceMailSpecifierIndex;
@property (retain, nonatomic) NSNumber *_cachedShouldHideValue;
@property (readonly, nonatomic) BOOL _isKeyHapticsSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (void)willResignActive;
- (int)_deviceType;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)updateVolume;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willBecomeActive;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)carrierBundleChange:(id)a0;
- (void)didLock;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)endInterruption;
- (id)volume:(id)a0;
- (id)detailTextForToneWithSpecifier:(id)a0;
- (void)refreshShouldHideAllVoicemailUI;
- (void)setPlayKeyboardSound:(id)a0 specifier:(id)a1;
- (void)setSilentModeEnabled:(id)a0 specifier:(id)a1;
- (id)_keyboardClicksTitle:(id)a0;
- (id)_keyboardFeedbackSpecifier;
- (id)_volumeSliderCell;
- (unsigned long long)ageOfToggleForSilentModeOn:(BOOL)a0;
- (id)canChangeRingtoneWithButtons:(id)a0;
- (void)didBackground;
- (id)getFixedVolumeControlsFooterWithSwitch:(BOOL)a0;
- (id)getHeadphoneLevelLimitSetting;
- (long long)getSelectedHapticsOption;
- (id)getSelectedHapticsOptionTitleWithSpecifier:(id)a0;
- (id)getSilentModeFooterWithSwitch:(BOOL)a0;
- (id)getSilentModeIconWithSwitch:(BOOL)a0;
- (void)handleSilentModeNotification:(id)a0;
- (void)hapticsOptionsDidChange:(long long)a0;
- (void)presentHapticsController:(id)a0;
- (void)ringerControl:(id)a0 volumeValueDidChange:(float)a1;
- (void)ringerControlDidObserveEffectiveSystemVolumeChange:(id)a0;
- (void)serverDiedNotificationHandler:(id)a0;
- (void)setCanChangeRingtoneWithButtons:(id)a0 specifier:(id)a1;
- (void)setFixedVolumeControls:(id)a0 specifier:(id)a1;
- (void)setPlayLockSound:(id)a0 specifier:(id)a1;
- (void)setShowInStatusBarEnabled:(id)a0 specifier:(id)a1;
- (void)setSilentModeOff:(BOOL)a0;
- (void)setSilentModeOn:(BOOL)a0;
- (void)setSoundEffects:(id)a0 specifier:(id)a1;
- (void)setSystemHapticsEnabled:(id)a0 specifier:(id)a1;
- (void)setUpSilentModeNotifications;
- (void)setVolume:(id)a0 specifier:(id)a1;
- (void)setVolumeHUDsuppression:(BOOL)a0;
- (id)showInStatusBarEnabled:(id)a0;
- (id)silentModeEnabled:(id)a0;
- (id)soundEffects:(id)a0;
- (void)startRingtonePreview;
- (id)systemHapticsEnabled:(id)a0;
- (void)unregisterSilentModeNotifications;
- (void)updateVoiceMailVisibility;
- (void)willForeground;
- (void)willHideSlider;
- (void)willShowSlider;

@end
