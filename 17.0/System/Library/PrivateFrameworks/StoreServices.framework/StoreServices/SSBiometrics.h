@class SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSBiometrics : NSObject {
    NSObject<OS_dispatch_queue> *_clientQueue;
    SSXPCConnection *_connection;
}

- (void)_sendMessage:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (void)getAllCachedBiometricHTTPHeadersWithToken:(id)a0 accountID:(id)a1 evict:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)getCachedBiometricAuthenticationContextWithToken:(id)a0 evict:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)getCachedBiometricHTTPHeadersWithToken:(id)a0 accountID:(id)a1 evict:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)getConstraintsDictionaryForPurpose:(long long)a0 completion:(id /* block */)a1;
- (void)getCurrentACLVersionWithCompletion:(id /* block */)a0;
- (void)getIdentityMapCountWithCompletionBlock:(id /* block */)a0;
- (void)getStateWithCompletionBlock:(id /* block */)a0;
- (void)isIdentityMapValidForAccountIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)renewPurchaseTokenWithAuthToken:(id)a0 completionBlock:(id /* block */)a1;
- (void)resetAccount:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)resetWithCompletionBlock:(id /* block */)a0;
- (void)saveIdentityMapForAccountIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)setAllowed:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)setEnabled:(BOOL)a0 withAuthToken:(id)a1 completionBlock:(id /* block */)a2;
- (void)tokenUpdateDidFinishWithLogKey:(id)a0 completion:(id /* block */)a1;
- (void)tokenUpdateShouldStartWithLogKey:(id)a0 completion:(id /* block */)a1;
- (void)tokenUpdateStateWithCompletionBlock:(id /* block */)a0;

@end
