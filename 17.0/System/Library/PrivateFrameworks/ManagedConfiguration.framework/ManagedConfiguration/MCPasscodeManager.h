@interface MCPasscodeManager : NSObject

+ (id)deviceLockedError;
+ (BOOL)restrictionsEnforcePasscodePolicy:(id)a0;
+ (BOOL)_passcodeCharacteristics:(id)a0 creationDate:(id)a1 compliesWithPolicyFromRestrictions:(id)a2 outError:(id *)a3;
+ (id)hashForPasscode:(id)a0 usingMethod:(int)a1 salt:(id)a2 customIterations:(unsigned int)a3;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0;
+ (BOOL)passcode:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 checkHistory:(BOOL)a2 outError:(id *)a3;
+ (id)sharedManager;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0;
+ (int)unlockScreenTypeForRestrictions:(id)a0;
+ (BOOL)isDeviceUnlocked;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0 outSimplePasscodeType:(int *)a1;
+ (id)generateSalt;
+ (id)characteristicsDictionaryFromPasscode:(id)a0;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;
+ (int)unlockScreenTypeForRestrictions:(id)a0 outSimplePasscodeType:(int *)a1;
+ (id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)a0;
+ (id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0 shouldBeDefault:(BOOL)a1;

- (BOOL)isDeviceLocked;
- (void)lockDevice;
- (id)_wrongPasscodeError;
- (id)localizedDescriptionOfDefaultNewPasscodePolicy;
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)a0;
- (BOOL)isPasscodeCompliantWithNamedPolicy:(id)a0 outError:(id *)a1;
- (int)unlockScreenTypeWithPublicPasscodeDict:(id)a0 isRecovery:(BOOL)a1;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (id)_privatePasscodeDictWithOutError:(id *)a0;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (id)_filterPublicPasscodeDict:(id)a0 forGeneration:(id)a1;
- (BOOL)unlockDeviceWithPasscode:(id)a0 outError:(id *)a1;
- (BOOL)isPasscodeSet;
- (int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0 shouldBeMinimum:(BOOL)a1;
- (id)_publicPasscodeDict;
- (int)currentUnlockSimplePasscodeType;
- (void)lockDeviceImmediately:(BOOL)a0;
- (BOOL)_checkPasscode:(id)a0 againstHistoryWithRestrictions:(id)a1 outError:(id *)a2;
- (id)recoveryPasscodeExpiryDate;
- (int)recoveryPasscodeUnlockScreenType;
- (id)_fixUpPasscodeCharacteristics:(id)a0;
- (id)_filterPasscodeCharacteristics:(id)a0 forGeneration:(id)a1;
- (BOOL)passcode:(id)a0 compliesWithPolicyCheckHistory:(BOOL)a1 outError:(id *)a2;
- (int)_minimumPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (int)currentUnlockScreenType;
- (id)passcodeExpiryDate;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)a0 outError:(id *)a1;
- (int)recoveryPasscodeUnlockSimplePasscodeType;
- (int)unlockSimplePasscodeTypeWithPublicPasscodeDict:(id)a0 isRecovery:(BOOL)a1;
- (id)passcodeCreationDate;
- (id)localizedDescriptionOfPasscodePolicy;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (int)newPasscodeEntryScreenType;
- (id)_fixUpPublicPasscodeDict:(id)a0;

@end
