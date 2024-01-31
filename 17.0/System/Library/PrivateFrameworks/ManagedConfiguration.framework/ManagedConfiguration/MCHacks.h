@interface MCHacks : NSObject

+ (id)sharedHacks;

- (BOOL)isGreenTea;
- (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)a0;
- (void)_applyHeuristicsToEffectiveUserSettings:(id)a0;
- (void)_applyHeuristicsToGranfatheredRestrictionPayloadKeys:(id)a0;
- (BOOL)_applyHeuristicsToRestrictions:(id)a0 forProfile:(id)a1 outError:(id *)a2;
- (void)_applyImpliedSettingsToSettingsDictionary:(id)a0 currentSettings:(id)a1 restrictions:(id)a2;
- (void)_applyInternalDiagnosticEnforcementToSettings:(id)a0;
- (void)_applyMandatorySettingsToEffectiveUserSettings:(id)a0;
- (void)_applyServerSideChangesWithOldRestrictions:(id)a0 newRestrictions:(id)a1 oldEffectiveUserSettings:(id)a2 newEffectiveUserSettings:(id)a3;
- (id)_deviceSpecificDefaultSettings;
- (id)_permittedGracePeriodNumbers;
- (id)_selectLargestNumberFromSortedArray:(id)a0 equalToOrLessThanNumber:(id)a1;
- (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)a0;
- (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)a0;
- (BOOL)isJapanSKU;
- (BOOL)isSetupBuddyDone;
- (id)permittedAutoLockNumbers;
- (id)quantizedAutoLockInSeconds:(id)a0;
- (id)quantizedGracePeriodInSeconds:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)a0;

@end
