@interface LAPSPasscodePersistenceMCAdapter : NSObject

- (id)clearRecoveryPasscode;
- (id)passcodeType;
- (BOOL)isPasscodeRecoveryRestricted;
- (id)passcodeCreationDate;
- (BOOL)isPasscodeRecoverySupported;
- (BOOL)hasPasscode;
- (id)_mcProfileConnection;
- (id)_passcodeTypeForQuery:(id /* block */)a0;
- (BOOL)canChangePasscode;
- (BOOL)changePasscode:(id)a0 to:(id)a1 enableRecovery:(BOOL)a2 error:(id *)a3;
- (id)defaultNewPasscodeType;
- (BOOL)isPasscodeRecoveryAvailable;
- (BOOL)isPasscodeRecoveryEnabled;
- (id)localizedPasscodeRequirements;
- (BOOL)performRecovery:(id)a0 newPasscode:(id)a1 enableRecovery:(BOOL)a2 error:(id *)a3;
- (id)recoveryPasscodeType;
- (id)setPasscodeRecoveryEnabled:(BOOL)a0;
- (id)simplestAllowedNewPasscodeType;
- (BOOL)verifyNewPasscodeMeetsPlatformRequirements:(id)a0 error:(id *)a1;

@end
