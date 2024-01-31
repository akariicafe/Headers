@interface CDPCustodianRecoveryKeyController : NSObject

- (BOOL)_isInSOSCircleWithContext:(id)a0;
- (BOOL)_isSOSTrustAndSyncingEnabled;
- (void)checkCustodianRecoveryKey:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)createRecoveryKeyWithContext:(id)a0 forUUID:(id)a1 completion:(id /* block */)a2;
- (void)deleteRecoveryKeyWithContext:(id)a0 forUUID:(id)a1 completion:(id /* block */)a2;
- (void)validateRecoveryKey:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)verifyRecoveryKeyObservingSystemsHaveMatchingStateWithContext:(id)a0 error:(id *)a1;

@end
