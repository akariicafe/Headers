@class NSString, CDPContext;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_resetEscrowMissingPromptDebounceCount;
- (BOOL)_createAndRegisterBackupPublicKeyInSOS:(id)a0 error:(id *)a1;
- (id)initWithContext:(id)a0;
- (void)uncacheAllSecrets;
- (BOOL)verifyRecoveryKey:(id)a0 error:(id *)a1;
- (void)enableWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)enableWithInfo:(id)a0 error:(id *)a1;
- (void)cacheRecoveryKey:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)disableWithInfo:(id)a0 error:(id *)a1;
- (BOOL)isRecoveryKeySet:(id *)a0;
- (id)activityTypeString;
- (id)recoverWithInfo:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)removeRecoveryKeyFromSOS:(id *)a0;
- (BOOL)setRecoveryKeyInSOS:(id)a0 error:(id *)a1;
- (id)secureBackupContextWithInfo:(id)a0;
- (id)secureBackupContext;
- (id)accountInfoWithInfo:(id)a0 error:(id *)a1;

@end
