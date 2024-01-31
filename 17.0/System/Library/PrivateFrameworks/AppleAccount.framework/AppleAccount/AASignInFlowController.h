@class NSMutableDictionary, NSDictionary, CUMessageSession, ACAccountStore, NSObject;
@protocol CDPStateUIProvider, OS_dispatch_queue, AASignInFlowControllerDelegate;

@interface AASignInFlowController : NSObject {
    ACAccountStore *_accountStore;
    NSDictionary *_authResults;
    BOOL _pendingSignIn;
    BOOL _existingAccount;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_uiQueue;
}

@property (nonatomic) BOOL ignoreLockAssertErrors;
@property (retain, nonatomic) CUMessageSession *messageSession;
@property (retain, nonatomic) NSMutableDictionary *telemetryTimeSeries;
@property (weak, nonatomic) id<AASignInFlowControllerDelegate> delegate;
@property (weak, nonatomic) id<CDPStateUIProvider> cdpUIProvider;
@property (nonatomic) BOOL shouldAutomaticallySaveSignInResults;

- (id)init;
- (void).cxx_destruct;
- (id)_userPersonaUniqueString;
- (void)_delegate_presentValidationAlertForError:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)_onqueue_updateAppleAccountIfNecessary:(id)a0 withAltDSID:(id)a1 rawPassword:(id)a2;
- (id)_aaErrorForErrorCode:(long long)a0;
- (id)_aaErrorForErrorCode:(long long)a0 withUnderlyingError:(id)a1;
- (id)_aaMessageForErrorCode:(long long)a0;
- (void)_addKeysAndEnrollCDPStateForAccount:(id)a0 withCDPContext:(id)a1 completion:(id /* block */)a2;
- (void)_backgroundSaveAccount:(id)a0 withDataclassEnablement:(BOOL)a1 completion:(id /* block */)a2;
- (void)_cacheLoginResponse:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (BOOL)_delegateRequiresTerms;
- (BOOL)_delegateWantsToBackgroundDataclassEnablement;
- (BOOL)_delegateWantsToSkipDataclassEnablement;
- (void)_delegate_presentAccountCreationError:(id)a0 completion:(id /* block */)a1;
- (void)_delegate_presentGenericTermsUIforAccount:(id)a0 authResults:(id)a1 serverError:(id)a2 completion:(id /* block */)a3;
- (void)_delegate_presentProgressViewForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_enableFindMyIfPossibleWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)_enrollCDPStateForAccount:(id)a0 withCDPContext:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)_findMyActivationAction;
- (BOOL)_isDuplicateAccountError:(long long)a0;
- (id)_nameForCloudService;
- (void)_onqueue_addKeysAndEnrollCDPStateForAccount:(id)a0 withCDPContext:(id)a1 completion:(id /* block */)a2;
- (id)_onqueue_createCDPContextWithAuthResults:(id)a0;
- (id)_onqueue_createNewAppleAccountWithAuthResults:(id)a0 accountCreationError:(id *)a1;
- (void)_onqueue_delegate_enableFindMyWithCompletion:(id /* block */)a0;
- (void)_onqueue_delegate_saveAccount:(id)a0 withDataclassEnablement:(BOOL)a1 completion:(id /* block */)a2;
- (void)_onqueue_enableFindMyIfPossibleWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)_onqueue_enrollCDPStateForAccount:(id)a0 withCDPContext:(id)a1 completion:(id /* block */)a2;
- (void)_onqueue_legacyRegisterAndVerifyLoginForiCloudAccount:(id)a0 authResults:(id)a1 withCompletion:(id /* block */)a2;
- (void)_onqueue_prepareExistingAppleAccountForSignIn:(id)a0 withAuthResults:(id)a1 accountCreationError:(id *)a2;
- (void)_onqueue_registerAndVerifyLoginForiCloudAccount:(id)a0 authResults:(id)a1 withCompletion:(id /* block */)a2;
- (void)_onqueue_saveAccount:(id)a0 withCDPEnablement:(BOOL)a1 withAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)a2;
- (void)_onqueue_saveAccount:(id)a0 withDataclassEnablement:(BOOL)a1 completion:(id /* block */)a2;
- (void)_onqueue_saveTermsWithAuthResults:(id)a0 account:(id)a1;
- (void)_onqueue_signInWithIDMSAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (void)_onqueue_updateAppleAccount:(id)a0 withAuthenticationResults:(id)a1;
- (id)_onqueue_updateOrCreateAppleAccountForAuthResults:(id)a0 accountCreationError:(id *)a1;
- (void)_onqueue_validateAndEnrollCDPStateForAccount:(id)a0 withAuthResults:(id)a1 completion:(id /* block */)a2;
- (void)_onqueue_verifyLoginResponseForiCloudAccount:(id)a0 withAuthResults:(id)a1 withSuccess:(BOOL)a2 error:(id)a3 completion:(id /* block */)a4;
- (void)_registerAndVerifyLoginForiCloudAccount:(id)a0 authResults:(id)a1 withCompletion:(id /* block */)a2;
- (void)_saveAccount:(id)a0 withCDPEnablement:(BOOL)a1 withAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)a2;
- (BOOL)_shouldEnableDataclassesForAccount:(id)a0;
- (BOOL)_shouldStashLoginResponse;
- (void)_stashLoginResponseWithAuthenticationResults:(id)a0 appleAccount:(id)a1;
- (BOOL)_termsAreRequired;
- (id)_titleForSignInFailureAlert;
- (id)_titleForVerificationFailureAlert;
- (void)_validateAndEnrollCDPStateForAccount:(id)a0 withAuthResults:(id)a1 completion:(id /* block */)a2;
- (void)_verifyLoginResponseForiCloudAccount:(id)a0 withAuthResults:(id)a1 withSuccess:(BOOL)a2 error:(id)a3 completion:(id /* block */)a4;
- (void)prewarmOperationsWithCompletion:(id /* block */)a0;
- (void)signInWithIDMSAuthenticationResults:(id)a0 completion:(id /* block */)a1;

@end
