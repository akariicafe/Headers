@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SFAppleIDClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_syncXPCCnx;
    NSXPCConnection *_xpcCnx;
    NSXPCConnection *_xpcAuthCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void)dealloc;
- (void)_ensureXPCStarted;
- (void)_invalidated;
- (void)ensureSyncXPCStarted;
- (void)_invalidate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_interrupted;
- (id)syncRemoteProxyWithError:(id *)a0;
- (void)_copyCertificateForAppleID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_copyIdentityForAppleID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_ensureAuthXPCStarted;
- (void)_myAccountWithCompletion:(id /* block */)a0;
- (void)_personInfoWithEmailOrPhone:(id)a0 completion:(id /* block */)a1;
- (void)authenticateAccountWithAppleID:(id)a0 password:(id)a1 completion:(id /* block */)a2;
- (void)copyCertificateForAppleID:(id)a0 withCompletion:(id /* block */)a1;
- (struct __SecIdentity { } *)copyIdentityForAppleID:(id)a0 error:(id *)a1;
- (void)copyIdentityForAppleID:(id)a0 withCompletion:(id /* block */)a1;
- (void)myAccountWithCompletion:(id /* block */)a0;
- (id)myAccountWithError:(id *)a0;
- (void)personInfoWithEmailOrPhone:(id)a0 completion:(id /* block */)a1;
- (void)requestWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)statusInfoWithCompletion:(id /* block */)a0;

@end
