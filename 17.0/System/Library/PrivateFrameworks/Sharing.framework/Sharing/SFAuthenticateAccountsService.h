@class SFAuthenticateAccountsServiceConfiguration, NSArray, SFService, NSString, SFDeviceOperationHandlerCDPSetup, SFSession, NSMutableArray, NSObject, HMDeviceSetupOperationHandler, ACAccountStore;
@protocol OS_dispatch_queue, CDPStateUIProvider, SFAuthenticateAccountsServiceDelegate;

@interface SFAuthenticateAccountsService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFService *_sfService;
    SFSession *_sfSession;
    ACAccountStore *_accountStore;
    id<CDPStateUIProvider> _cdpUIProvider;
    NSMutableArray *_authenticatedAccounts;
    NSArray *_knownHomeUserIdentifiers;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    BOOL _isVoiceProfileAvailable;
    NSString *_preferredLanguageCode;
    NSString *_localeIdentifier;
    NSArray *_preferredLanguages;
    NSArray *_keyboards;
}

@property (copy, nonatomic) SFAuthenticateAccountsServiceConfiguration *configuration;
@property (nonatomic) unsigned int targetedAccountTypes;
@property (nonatomic) BOOL isHomeSharingSetupNeeded;
@property (weak, nonatomic) id<SFAuthenticateAccountsServiceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) BOOL isHomeKitSetupNeeded;
@property (nonatomic) BOOL homeKitSetupDidSucceed;

- (void)_cleanup;
- (id)init;
- (void)_activate;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_sfServiceStart;
- (void)_handleSessionStarted:(id)a0;
- (BOOL)_validateConfiguration;
- (void)_saveAccount:(id)a0 completion:(id /* block */)a1;
- (void)_finishSession:(id)a0;
- (void)__runAuthenticateiCloudWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (unsigned int)_accountTypeForTRAccountService:(unsigned long long)a0;
- (void)_authenticateAccount:(id)a0 serviceType:(long long)a1 companionDevice:(id)a2 anisetteDataProvider:(id)a3 completion:(id /* block */)a4;
- (void)_authenticateAccount:(id)a0 serviceType:(long long)a1 password:(id)a2 completion:(id /* block */)a3;
- (void)_authenticateGameCenterWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (void)_authenticateWithServiceType:(unsigned long long)a0 authResults:(id)a1 completion:(id /* block */)a2;
- (void)_authenticateWithServiceTypes:(id)a0 authResults:(id)a1 completion:(id /* block */)a2;
- (void)_authenticateiCloudWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (void)_authenticateiTunesWithAuthResults:(id)a0 completion:(id /* block */)a1;
- (id)_configurationExistingAccountWithType:(unsigned int)a0;
- (void)_handleInfoExchange:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleRequest:(id)a0 flags:(unsigned int)a1 session:(id)a2 responseHandler:(id /* block */)a3;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleTRCompanionAuthenticationRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleTRProxyAuthenticationRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleTRProxyDeviceRequest:(id)a0 responseHandler:(id /* block */)a1;
- (long long)_nextServiceTypeForTRAccountServices:(id)a0;
- (unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)a0;
- (void)_saveRemoteVerifiedAccount:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldSignInAccountsInInfoRequest:(id)a0;
- (void)_validateiCloudCredentialsWithRequest:(id)a0 unvalidatedResponse:(id)a1 completionHandler:(id /* block */)a2;

@end
