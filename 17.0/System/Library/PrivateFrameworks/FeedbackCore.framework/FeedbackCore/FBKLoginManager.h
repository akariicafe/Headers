@class FBKData, NSMutableArray, FBKSeedPortalAPI;
@protocol FBKReAuthenticationHandler, FBKLoginManagerDelegate;

@interface FBKLoginManager : NSObject

@property unsigned long long loginState;
@property (retain, nonatomic) NSMutableArray *postLoginTaskQueue;
@property (retain, nonatomic) NSMutableArray *postLogOutTaskQueue;
@property (copy) id /* block */ pendingLoginOperation;
@property (weak, nonatomic) id<FBKReAuthenticationHandler> reAuthHandler;
@property (weak) FBKSeedPortalAPI<FBKLoginManagerDelegate> *api;
@property (weak) FBKData<FBKLoginManagerDelegate> *FBKData;
@property BOOL loggedInAsSomeoneElse;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAPI:(id)a0;
- (void)logOut;
- (void)_drainLogOutTaskQueue;
- (void)_drainLoginTaskQueue;
- (BOOL)_errorIncludesNotAParticipant:(id)a0;
- (BOOL)_errorIncludesOutdatedVersion:(id)a0;
- (BOOL)_hasInternalDeviceToken;
- (void)_internalLoginWithDeviceToken:(id /* block */)a0;
- (id)_loginInfo;
- (void)_loginWithUsername:(id)a0 authenticationResults:(id)a1 completion:(id /* block */)a2;
- (BOOL)_usesNewAutoLoginFlowAfterInvalidSessionError;
- (id)authenticationContextForUsername:(id)a0;
- (void)autoLoginUsingSystemAccount:(BOOL)a0 completion:(id /* block */)a1;
- (void)autoLoginWithCompletion:(id /* block */)a0;
- (void)autoLoginWithUserID:(id)a0 userName:(id)a1 deviceToken:(id)a2 usesSystemAccount:(BOOL)a3 completion:(id /* block */)a4;
- (void)backgroundStartupWithCompletion:(id /* block */)a0;
- (void)clearLoginTaskQueue;
- (void)didLoginWithUserInfo:(id)a0;
- (void)didLoginWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)handleInteractiveLoginWithError:(id)a0 success:(BOOL)a1 completion:(id /* block */)a2;
- (void)interactiveStartupUsingSystemAccount:(BOOL)a0 completion:(id /* block */)a1;
- (void)interactiveStartupWithCompletion:(id /* block */)a0;
- (void)interactiveStartupWithLaunchAction:(id)a0 completion:(id /* block */)a1;
- (void)logOutIfNeededAndRun:(id /* block */)a0;
- (void)loginAsAnonymousUserWithLaunchAction:(id)a0 completion:(id /* block */)a1;
- (void)loginAsUnauthenticatedUserWithCompletion:(id /* block */)a0;
- (void)loginWithEphemeralDeviceToken:(id)a0 completion:(id /* block */)a1;
- (void)loginWithSystemAccountWithCompletion:(id /* block */)a0;
- (void)loginWithUsername:(id)a0 authenticationResults:(id)a1 completion:(id /* block */)a2;
- (void)runAfterLogin:(id /* block */)a0;
- (void)sessionDidBecomeInvalid:(id)a0;
- (id)signInViewControllerWithAuthenticationContext:(id)a0;

@end
