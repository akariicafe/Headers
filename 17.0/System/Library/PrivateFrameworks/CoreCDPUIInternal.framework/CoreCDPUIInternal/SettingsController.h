@class CDPRecoveryController, NSString, DummyWebAccessStateController, CDPRecoveryTestController, CDPUIController, DummyWalrusStateController;

@interface SettingsController : PSListController <CDPAuthProvider> {
    BOOL _didUseSMS;
    CDPUIController *_uiController;
    CDPRecoveryTestController *_recoveryTestController;
    CDPRecoveryController *_recoveryController;
    DummyWalrusStateController *_walrusStateController;
    DummyWebAccessStateController *_webAccessStatusController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_recoveryKeySpecifier;
- (void)beginIDMSRecoveryWithFailure:(id)a0;
- (void)_loadSpecifiers;
- (void)_showWebAccessChangeUI:(unsigned long long)a0;
- (id)_contextForPrimaryAccount;
- (void)_showStatusChangeUIFor:(id)a0;
- (void)_showWalrusChangeUI:(unsigned long long)a0;
- (void)removeSpinnerFromSpecifier:(id)a0;
- (BOOL)_enableWalrus;
- (void)beginIDMSRecoveryWithRKSkip:(id)a0;
- (void)_recoverStingrayData:(id)a0;
- (void)cdpContext:(id)a0 verifyMasterKey:(id)a1 completion:(id /* block */)a2;
- (void)promptFor6DigitRemoteSecret:(id)a0;
- (void)promptFor6DigitICSC:(id)a0;
- (void)promptForLocalSecret:(id)a0;
- (void)beginFMIPRecovery:(id)a0;
- (void)viewDidLoad;
- (void)promptFor4DigitRemoteSecret:(id)a0;
- (id)_recoverAndSyncrhonizeDataSpecifier;
- (void)beginIDMSRecoveryRK:(id)a0;
- (BOOL)_rkMandate;
- (id)getUserDefaultEnabled:(id)a0;
- (void)showDisableWebAccessUI:(id)a0;
- (id)specifiers;
- (void)showDisableWalrusUI:(id)a0;
- (id)_walrusSpecifiers;
- (void)promptForComplexICSC:(id)a0;
- (void)startSpinnerForSpecifier:(id)a0;
- (void)startBeneficiaryFlow:(id)a0;
- (id)_enableWalrusSwitchCellSpecifier;
- (void)showEnableWebAccessUI:(id)a0;
- (BOOL)_didUseSMSVerification;
- (BOOL)shouldAllowCDPEnrollment;
- (id)_fakeDevicesWithExpectedSecret:(id)a0 isNumber:(BOOL)a1 numericLength:(id)a2;
- (void).cxx_destruct;
- (BOOL)_forceInlineUI;
- (id)webAccessEnabled;
- (void)enableCDP:(id)a0;
- (id)_webAccessSpecifiers;
- (void)generateNewRecoveryKey:(id)a0;
- (void)promptFor4DigitICSC:(id)a0;
- (id)_recoveryKeySpecifierRegen;
- (void)setUserDefaultEnabled:(id)a0 specifier:(id)a1;
- (void)promptForRandomICSC:(id)a0;
- (void)deviceToDeviceAccountUpgradeCardUI:(id)a0;
- (void)_recoverAndSyncrhonizeStingrayData:(id)a0;
- (void)setWalrusStatus:(BOOL)a0;
- (void)beginIDMSRecoveryPrimary:(id)a0;
- (id)walrusEnabled;
- (void)promptForCustomAlphanumericRemoteSecret:(id)a0;
- (void)promptForCustomNumericRemoteSecret:(id)a0;
- (void)beginIDMSRecovery:(id)a0;
- (void)showEnableWalrusUI:(id)a0;
- (BOOL)_offerRemoteApproval;
- (void)setWebAccessStatus:(BOOL)a0;
- (id)_recoverStingrayDataSpecifier;

@end
