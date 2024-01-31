@class MCCSecretAgentConnection;

@interface MCCSecretAgentController : NSObject <MCCSecretAgentProtocol> {
    MCCSecretAgentConnection *_agentConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)listCertificatesWithCompletion:(id /* block */)a0;
- (void)fetchSigningAndEncryptingStatusForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)fetchSigningAndEncrytionMessagesStatusForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)generateCertificateWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithAgentXPCEndpoint:(id)a0;
- (void)listCertificatesForEmail:(id)a0 completion:(id /* block */)a1;
- (void)refreshCertificateWithContext:(id)a0 certId:(id)a1 completion:(id /* block */)a2;
- (void)setEncryptIsEnabled:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)setSignIsEnabled:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)setSigningAndEncrytingStatusTo:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)updateCertificateDefaultsForEmailAddress:(id)a0 certInfo:(id)a1 completion:(id /* block */)a2;

@end
