@protocol LAPSPasscodePersistence;

@interface LAPSRecoveryPasscodeService : NSObject

@property (readonly, nonatomic) id<LAPSPasscodePersistence> persistence;

- (id)initWithPersistence:(id)a0;
- (id)passcodeType;
- (void).cxx_destruct;
- (BOOL)isPasscodeRecoveryRestricted;
- (BOOL)isPasscodeRecoverySupported;
- (long long)_failedPasscodeRecoveryAttempts;
- (void)_clearRecoveryPasscode;
- (long long)_failedPasscodeAttempts;
- (BOOL)_hasAttemptedPasscodeEnoughTimes;
- (BOOL)_hasPasscodeRecoveryAttemptsLeft;
- (long long)_maxPasscodeRecoveryAttempts;
- (long long)_minRequiredPasscodeFailures;
- (void)_reportPasscodeChangedTo:(id)a0;
- (void)_setPasscodeRecoveryEnabled:(BOOL)a0;
- (void)changePasscode:(id)a0 to:(id)a1 enableRecovery:(BOOL)a2 completion:(id /* block */)a3;
- (long long)failedPasscodeAttempts;
- (BOOL)isPasscodeRecoveryAvailableWithError:(id *)a0;
- (BOOL)isPasscodeRecoveryEnabled;
- (void)verifyPasscode:(id)a0 completion:(id /* block */)a1;

@end
