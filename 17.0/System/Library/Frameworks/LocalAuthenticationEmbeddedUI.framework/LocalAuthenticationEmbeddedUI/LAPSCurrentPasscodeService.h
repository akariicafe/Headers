@protocol LAPSPasscodePersistence;

@interface LAPSCurrentPasscodeService : NSObject

@property (readonly, nonatomic) id<LAPSPasscodePersistence> persistence;

- (id)initWithPersistence:(id)a0;
- (id)passcodeType;
- (void).cxx_destruct;
- (id)passcodeCreationDate;
- (BOOL)hasPasscode;
- (long long)backoffTimeout;
- (BOOL)canChangePasscodeWithError:(id *)a0;
- (void)changePasscode:(id)a0 to:(id)a1 enableRecovery:(BOOL)a2 completion:(id /* block */)a3;
- (long long)failedPasscodeAttempts;
- (void)verifyPasscode:(id)a0 completion:(id /* block */)a1;

@end
