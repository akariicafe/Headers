@class NSString, VSUserAccountServiceConnection, VSRemoteNotifier;

@interface VSUserAccountManager : NSObject <VSRemoteNotifierDelegate>

@property (class, readonly, nonatomic) VSUserAccountManager *sharedUserAccountManager;

@property (retain, nonatomic) VSUserAccountServiceConnection *connection;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void)deleteUserAccount:(id)a0 completion:(id /* block */)a1;
- (void)fetchUserAccountWithSourceIdentifier:(id)a0 sourceType:(long long)a1 deviceIdentifier:(id)a2 withCompletion:(id /* block */)a3;
- (void)forceRefreshUserAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)queryUserAccountsWithOptions:(long long)a0 completion:(id /* block */)a1;
- (void)queryUserAccountsWithOptions:(long long)a0 sourceIdentifier:(id)a1 sourceType:(id)a2 deviceIdentifier:(id)a3 completion:(id /* block */)a4;
- (void)updateUserAccount:(id)a0 completion:(id /* block */)a1;

@end
