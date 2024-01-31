@class SOConfigurationHost, NSString, NSXPCConnection, POKeychainHelper, NSMutableDictionary, POConfigurationManager, NSObject, NSMutableArray, POAgentAuthenticationProcess;

@interface POExtensionAgentProcess : NSObject <POServiceLoginManagerProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (retain) POConfigurationManager *configurationManager;
@property (retain) POAgentAuthenticationProcess *agentProcess;
@property (retain) NSMutableArray *keyProxies;
@property (retain) NSObject *authenticationObserver;
@property (copy) id /* block */ authenticationCompletion;
@property (retain) SOConfigurationHost *configurationHost;
@property (retain) POKeychainHelper *keychainHelper;
@property (retain) NSMutableDictionary *_analytics;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)isUserRegisteredWithCompletion:(id /* block */)a0;
- (void)addEvent:(id)a0 forKeyType:(long long)a1;
- (void)attestKey:(long long)a0 clientDataHash:(id)a1 completion:(id /* block */)a2;
- (id)bundleIdentiferForXPCConnection:(id)a0;
- (void)copyDeviceAttestationCertificateWithCompletion:(id /* block */)a0;
- (void)deviceRegistrationsNeedsRepairWithCompletion:(id /* block */)a0;
- (id)identityForKeyType:(long long)a0;
- (id)initWithXPCConnection:(id)a0 authenticationProcess:(id)a1;
- (void)invalidateAllKeyProxies;
- (BOOL)isCallerCurrentSSOExtension;
- (void)isDeviceRegisteredWithCompletion:(id /* block */)a0;
- (BOOL)isURL:(id)a0 validForProfile:(id)a1;
- (id)keyProxyEndpointForKeyType:(long long)a0;
- (void)loginConfigurationWithCompletion:(id /* block */)a0;
- (void)loginUserNameWithCompletion:(id /* block */)a0;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)registrationTokenWithCompletion:(id /* block */)a0;
- (void)resetDeviceKeysWithCompletion:(id /* block */)a0;
- (void)resetUserSecureEnclaveKeyWithCompletion:(id /* block */)a0;
- (void)secIdentityProxyEndpointForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)secKeyProxyEndpointForKeyType:(long long)a0 completion:(id /* block */)a1;
- (void)setCertificateData:(id)a0 keyType:(long long)a1 completion:(id /* block */)a2;
- (void)setLoginConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)setLoginUserName:(id)a0 completion:(id /* block */)a1;
- (void)setRegistrationToken:(id)a0 completion:(id /* block */)a1;
- (void)setSsoTokens:(id)a0 completion:(id /* block */)a1;
- (void)setUserLoginConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)ssoTokensWithCompletion:(id /* block */)a0;
- (void)userLoginConfigurationWithCompletion:(id /* block */)a0;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (void)userRegistrationsNeedsRepairWithCompletion:(id /* block */)a0;

@end
