@class NSString, CDPContext, CDPDSecureBackupController, CDPDPCSController;
@protocol CDPDSecureBackupProxy, CDPDOctagonTrustProxy, CDPDCircleProxy, CDPDAuthProviderInternal, CDPAuthProviderInternal, CDPStateUIProviderInternal;

@interface CDPDRecoveryKeyController : NSObject <CDPDRecoveryKeyValidatorInternalDelegate, CDPDDeviceSecretValidatorDelegate> {
    CDPContext *_context;
    CDPDPCSController *_pcsController;
    CDPDSecureBackupController *_secureBackupController;
}

@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (retain, nonatomic) id<CDPDSecureBackupProxy> sbProxy;
@property (retain, nonatomic) id<CDPDOctagonTrustProxy> otProxy;
@property (retain, nonatomic) id<CDPAuthProviderInternal> recoveryAuthProvider;
@property (retain, nonatomic) id<CDPDAuthProviderInternal> internalAuthProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)generateRandomRecoveryKey:(id /* block */)a0;
- (id)initWithContext:(id)a0;
- (void)authenticateAndDeleteRecoveryKeyWithCompletion:(id /* block */)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (BOOL)isWalrusRecoveryKeyAvailableWithError:(id *)a0;
- (void)authenticateAndGenerateNewRecoveryKeyWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)generateNewRecoveryKey:(id /* block */)a0;
- (BOOL)isRecoveryKeyAvailableWithError:(id *)a0;
- (void)verifyRecoveryKey:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1;
- (void)_authenticateAndPerformRecoveryKeyOperation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)deleteRecoveryKeyWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 circleProxy:(id)a3 secureBackupProxy:(id)a4 octagonTrustProxy:(id)a5 pcsProxy:(id)a6;
- (void)recoverAndSynchronizeStateWithServer:(id /* block */)a0;
- (void)recoverDataUsingMasterKeyWithCompletion:(id /* block */)a0;
- (void)recoverState:(id /* block */)a0;
- (void)secretValidator:(id)a0 recoverSecureBackupWithContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)secretValidator:(id)a0 shouldContinueValidationAfterError:(id)a1;
- (void)secretValidator:(id)a0 validateRecoveryKeyWithContext:(id)a1 completion:(id /* block */)a2;

@end
