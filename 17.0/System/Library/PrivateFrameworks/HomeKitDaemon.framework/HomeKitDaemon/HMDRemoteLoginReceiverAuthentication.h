@protocol HMDRemoteLoginReceiverAuthenticationDelegate;

@interface HMDRemoteLoginReceiverAuthentication : HMDRemoteLoginAuthentication

@property (readonly, weak, nonatomic) id<HMDRemoteLoginReceiverAuthenticationDelegate> delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_saveRemoteVerifiedAccount:(id)a0 completion:(id /* block */)a1;
- (void)_authenticateAccount:(id)a0 targetedAccountType:(unsigned long long)a1;
- (void)_authenticateForAccountType:(unsigned long long)a0 usingAuthenticationResults:(id)a1 completionHandler:(id /* block */)a2;
- (void)_authenticateStoreWithAuthenticationResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)_completedAuthenticationRequest:(id)a0 loggedInAccount:(id)a1;
- (void)_handleAuthenticationResults:(id)a0 error:(id)a1 targetedAccountType:(unsigned long long)a2;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4;

@end
