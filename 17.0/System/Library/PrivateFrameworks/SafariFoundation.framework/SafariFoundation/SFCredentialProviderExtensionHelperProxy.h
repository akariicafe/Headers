@class NSXPCConnection;

@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_proxyObject;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllPaskeyCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)fetchPasskeyCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (void)getCredentialProviderExtensionStateWithCompletion:(id /* block */)a0;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)removeCredentialIdentities:(id)a0 completion:(id /* block */)a1;
- (void)removeCredentialIdentityStoreForApplication:(id)a0 completion:(id /* block */)a1;
- (void)replaceCredentialIdentitiesWithIdentities:(id)a0 completion:(id /* block */)a1;
- (void)saveCredentialIdentities:(id)a0 completion:(id /* block */)a1;

@end
