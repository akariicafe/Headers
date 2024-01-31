@interface NPKWatchSubcredentialProvisioningService : NPKSubcredentialProvisioningService

- (id)init;
- (void)canAcceptInvitationOnRemoteDeviceResponse:(id)a0;
- (void)fetchAccountAttestationAnonymizationSaltOnRemoteDeviceWithCompletion:(id /* block */)a0;
- (void)fetchAccountAttestationAnonymizationSaltResponse:(id)a0;
- (void)registerProtobufActionsForService:(id)a0;
- (void)sendAcceptSubcredentialProvisioningRequestForInvitation:(id)a0 metadata:(id)a1;
- (void)sendAcceptSubcredentialProvisioningRequestForMailboxAddress:(id)a0 activationCode:(id)a1;
- (void)sendCanAcceptInvitationOnRemoteDeviceRequestForInvitation:(id)a0 completion:(id /* block */)a1;

@end
