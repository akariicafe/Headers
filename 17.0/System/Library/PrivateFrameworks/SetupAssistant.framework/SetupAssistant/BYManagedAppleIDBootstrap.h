@class UMUserSwitchContext, NSDictionary, NSString, AKAppleIDAuthenticationContext, NSObject, BYPreferencesController;
@protocol OS_dispatch_queue;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver, UMUserSwitchStakeholder> {
    AKAppleIDAuthenticationContext *_authContext;
    UMUserSwitchContext *_userSwitchContext;
}

@property (readonly, nonatomic) UMUserSwitchContext *userSwitchContext;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL shouldRetrySilentLoginUpgrade;
@property (nonatomic) long long silentLoginUpgradeRetryCount;
@property (retain, nonatomic) NSDictionary *authenticationResults;
@property (retain, nonatomic) BYPreferencesController *buddyPreferences;
@property (readonly, copy, nonatomic) NSString *shortLivedToken;
@property (readonly, nonatomic) BOOL passwordChangeFlowNeedsToRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateBundleIDsForManagedAccount;
+ (BOOL)isManagedAppleIDSignedIn;
+ (BOOL)isSettingUpMultiUser;
+ (id)sharedManager;
+ (BOOL)isFirstTimeLogin;
+ (BOOL)isMultiUser;

- (BOOL)isLoginUser;
- (id)init;
- (void)recoverEMCSWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)postUserSwitchContextHasBeenUsed;
- (void)_modifyAuthenticationContextIfNeeded:(id)a0;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1 willNotCompleteBlock:(id /* block */)a2;
- (void)willSwitchUser;
- (void)switchToLoginWindowDueToError:(id)a0 completion:(id /* block */)a1;
- (void)markUserWithManagedCredentials;
- (BOOL)needsToUpgradeShortLivedToken;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1;
- (void)userSwitchContextHasBeenUsed;
- (id)_languageConfigurationDictionary;
- (void)_registerForStartupCompletionNotificationWithTask:(id /* block */)a0;
- (void)writeAccountConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)ingestManagedBuddyData;
- (void)_runSilentLoginUpgradeWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1;
- (void)_runPostStartupTasksWithAccountStore:(id)a0 completion:(id /* block */)a1;
- (id)_authenticationContextWithAuthenticationResults:(id)a0;
- (void)_createAppleAccountWithAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (void)_upgradeShortLivedTokenCompletion:(id /* block */)a0;
- (id)_fetchAKURLBagSynchronously;

@end
