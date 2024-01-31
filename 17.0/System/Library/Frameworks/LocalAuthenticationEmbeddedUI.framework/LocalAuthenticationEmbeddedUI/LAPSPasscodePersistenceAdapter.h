@class LAPSPasscodePersistenceMCAdapter, NSString, LAPSPasscodePersistenceSecAdapter, LAPSPasscodePersistenceMKBAdapter, LAPSPasscodePersistenceCDPAdapter;

@interface LAPSPasscodePersistenceAdapter : NSObject <LAPSPasscodePersistence> {
    LAPSPasscodePersistenceMCAdapter *_mcAdapter;
    LAPSPasscodePersistenceCDPAdapter *_cdpAdapter;
    LAPSPasscodePersistenceMKBAdapter *_mkbAdapter;
    LAPSPasscodePersistenceSecAdapter *_secAdapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)clearRecoveryPasscode;
- (id)passcodeType;
- (void).cxx_destruct;
- (BOOL)isPasscodeRecoveryRestricted;
- (id)passcodeCreationDate;
- (BOOL)isPasscodeRecoverySupported;
- (BOOL)hasPasscode;
- (id)verifyPasscode:(id)a0;
- (id)backoffTimeout;
- (BOOL)canChangePasscode;
- (BOOL)changePasscode:(id)a0 to:(id)a1 enableRecovery:(BOOL)a2 error:(id *)a3;
- (id)defaultNewPasscodeType;
- (id)failedPasscodeAttempts;
- (id)failedPasscodeRecoveryAttempts;
- (BOOL)isPasscodeLockedOut;
- (BOOL)isPasscodeRecoveryAvailable;
- (BOOL)isPasscodeRecoveryEnabled;
- (id)localizedPasscodeRequirements;
- (id)maxPasscodeRecoveryAttempts;
- (BOOL)performRecovery:(id)a0 newPasscode:(id)a1 enableRecovery:(BOOL)a2 error:(id *)a3;
- (id)recoveryPasscodeType;
- (void)reportPasscodeDidChangeTo:(id)a0 completion:(id /* block */)a1;
- (id)setPasscodeRecoveryEnabled:(BOOL)a0;
- (id)simplestAllowedNewPasscodeType;
- (BOOL)verifyFixedLengthNumericPasscodeIsStrong:(id)a0;
- (BOOL)verifyNewPasscodeMeetsPlatformRequirements:(id)a0 error:(id *)a1;
- (id)verifyRecoveryPasscode:(id)a0;
- (BOOL)verifyVariableLengthAlphanumericPasscodeIsStrong:(id)a0;

@end
