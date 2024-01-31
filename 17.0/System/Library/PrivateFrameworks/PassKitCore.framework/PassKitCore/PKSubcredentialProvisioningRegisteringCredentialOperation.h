@class PKSubcredentialProvisioningConfiguration, PKAppletSubcredential;

@interface PKSubcredentialProvisioningRegisteringCredentialOperation : PKSubcredentialProvisioningSessionOperation {
    PKAppletSubcredential *_subcredential;
    PKSubcredentialProvisioningConfiguration *_configuration;
}

- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)credentialShouldHaveAttestation;
- (BOOL)canBeRestarted;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)performOperationForFriendConfiguration;
- (void)performOperationWithSession:(id)a0;

@end
