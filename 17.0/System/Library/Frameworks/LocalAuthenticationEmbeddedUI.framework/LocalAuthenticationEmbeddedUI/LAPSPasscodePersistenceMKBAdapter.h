@interface LAPSPasscodePersistenceMKBAdapter : NSObject

- (id)verifyPasscode:(id)a0;
- (id)_deviceLockStateValueForKey:(id)a0;
- (id)_mementoStateValueForKey:(id)a0;
- (id)_persistenceErrorWithPasscodeVerificationStatus:(int)a0;
- (id)_verifyPasscode:(id)a0 options:(id)a1;
- (id)backoffTimeout;
- (id)failedPasscodeAttempts;
- (id)failedPasscodeRecoveryAttempts;
- (BOOL)isPasscodeLockedOut;
- (id)maxPasscodeRecoveryAttempts;
- (id)verifyRecoveryPasscode:(id)a0;

@end
