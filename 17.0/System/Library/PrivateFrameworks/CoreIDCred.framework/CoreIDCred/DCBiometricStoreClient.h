@class DCXPCDisconnectHandler, NSString, NSXPCConnection;
@protocol DCBiometricStoreXPCProtocol;

@interface DCBiometricStoreClient : NSObject <DCBiometricStoreXPCProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<DCBiometricStoreXPCProtocol> remoteObjectProxy;
@property (retain, nonatomic) DCXPCDisconnectHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)a0;
- (void)establishPrearmTrustV2:(id)a0 completion:(id /* block */)a1;
- (void)prearmCredentialWithAuthorizationToken:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)a0;
- (void)globalAuthACLWithCompletion:(id /* block */)a0;
- (void)bioBindingUnboundACL:(id /* block */)a0;
- (void)credentialAuthenticationTokenStatus:(id /* block */)a0;
- (void)generatePhoneTokenWithNonce:(id)a0 keyBlob:(id)a1 pairingID:(id)a2 completion:(id /* block */)a3;
- (void)generatePrearmTrustCertificateWithNonce:(id)a0 pairingID:(id)a1 completion:(id /* block */)a2;
- (void)getCASDCertificate:(id /* block */)a0;
- (void)getProgenitorKeyAttestation:(id /* block */)a0;
- (void)globalAuthACLTemplateUUIDsWithCompletion:(id /* block */)a0;
- (void)migratePrearmTrustBlob:(id)a0 completion:(id /* block */)a1;
- (void)passcodeBindingUnboundACL:(id /* block */)a0;
- (void)revokeCredentialAuthorizationToken:(id /* block */)a0;
- (void)setGlobalAuthACL:(id)a0 ofType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)setModifiedGlobalAuthACL:(id)a0 externalizedLAContext:(id)a1 completion:(id /* block */)a2;

@end
