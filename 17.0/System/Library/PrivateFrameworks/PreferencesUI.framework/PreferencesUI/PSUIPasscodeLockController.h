@class NSArray, NSString, HMHomeManager, PSSpecifier, SFAutoUnlockManager, LAPasscodeChangeService;

@interface PSUIPasscodeLockController : PSListController <HMHomeManagerDelegate, SFAutoUnlockManagerDelegate, DevicePINControllerDelegate> {
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialSpecifier;
    PSSpecifier *_voiceDialGroupSpecifier;
}

@property (nonatomic) BOOL canUnlockWatch;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) SFAutoUnlockManager *autoUnlockManager;
@property (retain, nonatomic) NSArray *autoUnlockSpecifiers;
@property (retain, nonatomic) LAPasscodeChangeService *_passcodeChangeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)passcodeGracePeriod;

- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)suspend;
- (void)profileNotification:(id)a0;
- (BOOL)isPasscodeSet;
- (id)specifiers;
- (id)autoUnlockEnabled:(id)a0;
- (void).cxx_destruct;
- (void)showPINSheet:(id)a0;
- (BOOL)isWalletRestricted;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManager:(id)a0 didUpdateAccessAllowedWhenLocked:(BOOL)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)devicePINController:(id)a0 didAcceptChangedPIN:(id)a1;
- (void)devicePINController:(id)a0 didAcceptSetPIN:(id)a1;
- (void)devicePINController:(id)a0 shouldAcceptPIN:(id)a1 withCompletion:(id /* block */)a2;
- (void)devicePINControllerDidDismissPINPane:(id)a0;
- (void)didAcceptRemovePIN;
- (void)showWeakWarningAlertForController:(id)a0 offerUseAnyway:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)manager:(id)a0 didEnableDevice:(id)a1;
- (void)manager:(id)a0 enablingLockedDevice:(id)a1;
- (void)manager:(id)a0 failedToEnableDevice:(id)a1 error:(id)a2;
- (void)showPINSheet:(id)a0 allowOptionsButton:(BOOL)a1;
- (BOOL)showReplyWithMessage;
- (id)wallet:(id)a0;
- (void)_updateGracePeriodForSpecifier:(id)a0;
- (unsigned long long)errorActionWithAutoUnlockError:(id)a0;
- (void)setAutoUnlockEnabled:(id)a0 specifier:(id)a1;
- (void)togglePasscode:(id)a0;
- (void)_didUpdatePasscode:(id)a0;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)a0;
- (id)_makeWipeDeviceGroupFooter;
- (void)_setWipeEnabled:(BOOL)a0;
- (BOOL)_shouldUseLocalAuthenticationBasedPasscodeFlowForPINSheetRequest:(id)a0;
- (void)_showDeleteSavedFingerprintsAlert;
- (void)_showLocalAuthenticationPINSheet:(id)a0;
- (void)addGracePeriodPasscodeRecoveryFooterToSpecifier:(id)a0;
- (id)assistantUnderLockEnabled:(id)a0;
- (void)disablePasscodeRequiredSpecifiers:(id)a0;
- (void)enableAutoUnlockForDevice:(id)a0 ofSpecifier:(id)a1;
- (id)enabledInLockScreen:(id)a0;
- (id)enabledInLockScreenForUSB:(id)a0;
- (long long)fingerprintCount;
- (void)gracePeriodClearRecoveryPasscode:(id)a0;
- (BOOL)gracePeriodPasscodeRecoveryAvailable;
- (id)graceValue:(id)a0;
- (id)homeControlAccessAllowedWhenLocked:(id)a0;
- (BOOL)isAssistantRestricted;
- (BOOL)isEnrolledInFaceID;
- (BOOL)isVoiceDialRestricted;
- (void)openGracePeriodPasscodeRecoveryHelpLink;
- (void)presentAppleIDAuthenticationController;
- (void)presentAutoUnlockEnableFailureAlertWithDevice:(id)a0 withError:(id)a1;
- (void)setAssistantUnderLockEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setEnabledInLockScreen:(id)a0 specifier:(id)a1;
- (void)setEnabledInLockScreenForUSB:(id)a0 specifier:(id)a1;
- (void)setGraceValue:(id)a0 specifier:(id)a1;
- (void)setHomeControlAccessAllowedWhenLocked:(id)a0 specifier:(id)a1;
- (void)setVoiceDial:(id)a0 specifier:(id)a1;
- (void)setWallet:(id)a0 specifier:(id)a1;
- (void)setWipeEnabled:(id)a0 specifier:(id)a1;
- (BOOL)shouldDisplayTurnOffPasscodeAlertMessage;
- (BOOL)shouldShowVoiceDial;
- (BOOL)shouldUseLocalAuthenticationBasedPasscodeFlowForChangePasscodeRequests;
- (void)showAlertForPhoneAutoUnlockEnablementOfDevice:(id)a0 ofSpecifier:(id)a1;
- (void)showKeychainAlert;
- (void)showLocalAuthenticationPasscodeChangeFlowFromPresentingController:(id)a0 title:(id)a1 passcodePrompt:(id)a2 withCompletion:(id /* block */)a3;
- (id)turnOffPasscodeAlertMessage;
- (void)updateAutoUnlockDevicewithDevice:(id)a0;
- (void)updateAutoUnlockSpecifiers;
- (void)updateGracePeriodSpecifier;
- (void)updatePhoneAutounlockSection:(BOOL)a0;
- (void)updateVoiceDialGroup;
- (BOOL)useAlternateFooterTextForPAU;
- (id)voiceDial:(id)a0;
- (id)wipeEnabled:(id)a0;

@end
