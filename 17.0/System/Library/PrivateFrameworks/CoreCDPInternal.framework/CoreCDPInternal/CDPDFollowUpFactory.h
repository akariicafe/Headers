@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (BOOL)_isWalrusEnabled;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (BOOL)_isManateeAvailable;
- (unsigned long long)secretType;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (void)_configureRepairFollowUpItem:(id)a0;
- (id)_createPasscodeFollowUpAction;
- (void)_configureWalrusConfirmExistingSecretFollowUpItem:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (id)_createPasscodeNoteFollowUpAction;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_confirmExistingSecretFollowUpAction;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (id)followUpItemWithContext:(id)a0;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)identifierForContext:(id)a0;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (BOOL)_isBiometricCapable;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (BOOL)_supportsFaceID;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (id)_followUpItemForSOSCompatibilityMode:(id)a0;
- (id)_secureTermsFollowUpAction;
- (id)_deviceCapabilityProvider;
- (id)_followUpItemForRecoveryKeyMismatchHealing:(id)a0;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;

@end
