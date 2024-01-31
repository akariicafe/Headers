@class POAgentAuthenticationProcess, NSDistributedNotificationCenter, NSString, POKeychainHelper, NSXPCConnection, NSMutableDictionary, POKeyWrap, PODirectoryServices, POAuthenticationProcess;

@interface POAgentProcess : NSObject <POServiceProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (class, readonly, nonatomic) NSMutableDictionary *retainedContexts;

@property (retain) POAuthenticationProcess *authenticationProcess;
@property (retain) PODirectoryServices *directoryServices;
@property (retain) POAgentAuthenticationProcess *process;
@property (retain) POKeyWrap *keyWrap;
@property (retain) POKeychainHelper *keychainHelper;
@property (retain) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retainedContexts;

- (id)init;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (BOOL)verifyPasswordChangeEntitlement;
- (void)_saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)_verifyLogin:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 deviceConfiguration:(id)a4 loginConfiguration:(id)a5 forAuthorization:(BOOL)a6 completion:(id /* block */)a7;
- (id)initWithAuthenticationProcess:(id)a0;
- (id)initWithXPCConnection:(id)a0 authenticationProcess:(id)a1;
- (void)passwordDidChangeForUsername:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performLocalPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performPasswordLogin:(id)a0 loginUserName:(id)a1 passwordContext:(id)a2 updateLocalAccountPassword:(BOOL)a3 completion:(id /* block */)a4;
- (void)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2 completion:(id /* block */)a3;
- (void)retainContextForUserName:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)screenDidUnlockWithCredentialContext:(id)a0 smartCardContext:(id)a1 tokenId:(id)a2 atLogin:(BOOL)a3 tokenUnlock:(BOOL)a4 completion:(id /* block */)a5;
- (void)updateLocalAccountPassword:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)updateLocalAccountPassword:(id)a0 passwordContextData:(id)a1 completion:(id /* block */)a2;
- (BOOL)verifyAgentEntitlement;
- (BOOL)verifyLoginUserEntitlement;
- (void)verifyPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
