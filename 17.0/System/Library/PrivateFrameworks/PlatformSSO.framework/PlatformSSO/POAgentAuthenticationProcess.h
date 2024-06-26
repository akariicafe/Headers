@class POKeyWrap, UNUserNotificationCenter, PORegistrationContext, NSDate, NSObject, NSDistributedNotificationCenter, SOExtensionManager, PODirectoryServices, POConfigurationManager, POKeyBag, POAuthenticationProcess, NSString, POKeychainHelper, POTokenHelper, SOConfigurationHost, POKerberosHelper, NSTimer, NSNotificationCenter;
@protocol OS_dispatch_queue, POAgentAuthenticationProcessKerberosDelegate;

@interface POAgentAuthenticationProcess : NSObject <UNUserNotificationCenterDelegate, POExtensionDelegate>

@property (retain) POConfigurationManager *configurationManager;
@property (retain) POAuthenticationProcess *authenticationProcess;
@property (retain) SOConfigurationHost *configurationHost;
@property (retain) SOExtensionManager *extensionManager;
@property (retain) POKeyBag *keyBag;
@property (retain) POKeyWrap *keyWrap;
@property (retain) UNUserNotificationCenter *userNotificationCenter;
@property (retain) NSNotificationCenter *notificationCenter;
@property (retain) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (retain) POKerberosHelper *kerberosHelper;
@property (retain) PODirectoryServices *directoryServices;
@property (retain) POTokenHelper *tokenHelper;
@property (retain) POKeychainHelper *keychainHelper;
@property (retain) PORegistrationContext *registrationContext;
@property BOOL registrationFailed;
@property (retain) NSTimer *authenticationTimer;
@property (retain) NSDate *lastAuthenticationAttempt;
@property (retain) NSString *userName;
@property BOOL localAccount;
@property BOOL platformSSOActive;
@property BOOL enableNetworkChanges;
@property BOOL shouldRunConfigurationChangeWhenUnlocked;
@property (retain) NSObject<OS_dispatch_queue> *loginQueue;
@property (copy, nonatomic) id /* block */ screenUnlockHandler;
@property (weak) id<POAgentAuthenticationProcessKerberosDelegate> kerberosDelegate;
@property (readonly) long long registrationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)windowDidClose;
- (void)configurationChanged:(id)a0;
- (void)postAuthenticationNotification:(unsigned long long)a0;
- (void)handleKeyRequestWithCompletion:(id /* block */)a0;
- (void)sendPasswordChangedNotification;
- (BOOL)_doLoginWithPasswordContext:(id)a0 tokenId:(id)a1;
- (BOOL)_doRefreshWithPasswordContext:(id)a0 tokenId:(id)a1;
- (void)_handleLoginResult:(unsigned long long)a0 authenticationContext:(id)a1 tokens:(id)a2 passwordContext:(id)a3 tokenId:(id)a4;
- (void)_startDeviceRegistration;
- (void)_startUserRegistration;
- (void)checkIfPlatformSSOIsActive;
- (id)createPasswordChangedNotificationWithAccountName:(id)a0 extensionIdentifier:(id)a1;
- (id)createRegistrationNotificationWithAccountName:(id)a0;
- (id)createRegistrationUpdateNotificationWithAccountName:(id)a0;
- (id)createSignInNotificationWithAccountName:(id)a0 extensionIdentifier:(id)a1;
- (void)doUnlockForPasswordWithCredentialContext:(id)a0;
- (void)doUnlockForSmartCardWithCredentialContext:(id)a0 tokenId:(id)a1;
- (void)doUnlockForTokenUnlockWithCredentialContext:(id)a0;
- (void)doUnlockForTokenWithCredentialContext:(id)a0;
- (void)doUnlockWithEmptyCredentialContext:(id)a0;
- (void)exchangeTGTForStatus:(id)a0;
- (void)finishRegistrationWithRetry;
- (void)finishRegistrationWithStatus:(BOOL)a0;
- (void)finishRegistrationWithStatus:(BOOL)a0 message:(id)a1;
- (void)handleAgentStartup;
- (void)handleConfigurationChanged:(BOOL)a0;
- (void)handleDeviceAndUserRegistrationForRepair:(BOOL)a0;
- (void)handleDeviceAndUserRegistrationForRepair:(BOOL)a0 newUser:(BOOL)a1 notified:(BOOL)a2 profile:(id)a3;
- (void)handleDeviceRegistrationNotification;
- (void)handleKerberosMappingForTokens:(id)a0 extensionIdentifier:(id)a1 userConfiguration:(id)a2;
- (void)handleKerberosMappingForTokens:(id)a0 loginConfiguration:(id)a1 userConfiguration:(id)a2;
- (void)handleNetworkChange;
- (void)handlePendingSSOTokensWithSharedData:(id)a0;
- (void)handleRegistrationViewControllerForExtensionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)handleRemovingRegistrationForExtension:(id)a0;
- (void)handleScreenLock;
- (void)handleScreenUnlock;
- (void)handleScreenUnlockWithCredentialContext:(id)a0 tokenId:(id)a1 atLogin:(BOOL)a2 tokenUnlock:(BOOL)a3;
- (unsigned long long)handleTokenBindingWithPasswordContext:(id)a0;
- (void)handleUnfinishedTGTExchanges;
- (BOOL)handleUserAuthorizationNeededForAccountDisplayName:(id)a0 bundleIdentifier:(id)a1;
- (void)handleUserAuthorizationUsing:(id)a0 userName:(id)a1 tokens:(id)a2 configurationManager:(id)a3;
- (void)handleUserCredentialNeededAtLogin:(BOOL)a0 smartCard:(BOOL)a1 accountDisplayName:(id)a2 bundleIdentifier:(id)a3 returningContext:(id *)a4;
- (BOOL)handleUserNeedsReauthenticationAfterDelay:(double)a0;
- (void)handleUserRegistrationForUser:(id)a0 repair:(BOOL)a1;
- (void)handleUserRegistrationForUser:(id)a0 repair:(BOOL)a1 newUser:(BOOL)a2 notified:(BOOL)a3 profile:(id)a4;
- (void)handleUserRegistrationNotification;
- (BOOL)isCurrentSSOExtension:(id)a0;
- (id)loadSSOExtensionWithExtensionBundleIdentifier:(id)a0;
- (void)notifyKerberosDelegateTGTDidBegin;
- (void)notifyKerberosDelegateTGTDidComplete;
- (BOOL)performLoginForCurrentUserWithPasswordContext:(id)a0;
- (BOOL)performLoginForCurrentUserWithPasswordContext:(id)a0 tokenId:(id)a1;
- (void)promptUserForRegistration;
- (void)requestDidCompleteWithError:(id)a0;
- (unsigned long long)requestSmartCardForBinding:(BOOL)a0 tokenId:(id *)a1 tokenHash:(id *)a2 wrapTokenHash:(id *)a3;
- (void)requestUserAuthenticationWithCompletion:(id /* block */)a0;
- (void)requestUserAuthenticationWithUserInfo:(id)a0;
- (void)requestUserAuthenticationWithWindow:(id)a0 completion:(id /* block */)a1;
- (void)resetRegistrationWithCompletion:(id /* block */)a0;
- (void)setupNotificationCategories;
- (void)setupTimerForAuthentication;
- (void)showAlertMessage:(id)a0 completion:(id /* block */)a1;
- (int)ssoMethodToUse:(id)a0 profile:(id)a1;

@end
