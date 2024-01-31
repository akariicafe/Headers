@class AALoginPluginManager, AAStorableLoginContext, AASetupAssistantService;

@interface BYAppleIDAccountsManager : NSObject {
    AALoginPluginManager *_appleIDLoginPluginManager;
    AAStorableLoginContext *_storedLoginContext;
}

@property (retain, nonatomic, setter=setAAService:) AASetupAssistantService *aaService;

+ (id)sharedManager;

- (id)init;
- (id)storedLoginContext;
- (void)repeatedlyAttemptPostRestoreRenewForAccount:(id)a0 loginContext:(id)a1 numberOfAttemptsAllowed:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initForDelegateBundleIDs:(id)a0;
- (void)clearStoredLoginContext;
- (void)attemptPostRestoreRenewForAccount:(id)a0 loginContext:(id)a1 allowFollowUp:(BOOL)a2 completion:(id /* block */)a3;
- (void)enableDataClassesForAccount:(id)a0 completion:(id /* block */)a1;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (void).cxx_destruct;
- (void)preloadDefaultLoginParametersWithBundleIDs:(id)a0;
- (void)loginDelegateAccountsWithUsername:(id)a0 password:(id)a1 rawPassword:(id)a2 skipiTunes:(BOOL)a3 onlyAppleIDPlugin:(BOOL)a4 completion:(id /* block */)a5;
- (void)performSilentICDPUpgrade;

@end
