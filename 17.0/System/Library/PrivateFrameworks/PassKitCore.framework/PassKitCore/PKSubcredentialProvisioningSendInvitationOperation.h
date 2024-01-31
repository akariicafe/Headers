@class PKAppletSubcredential, PKPassCredentialShare, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingRequest, PKPaymentWebService;

@interface PKSubcredentialProvisioningSendInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation {
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKAppletSubcredentialSharingInvitation *_invitation;
    PKAppletSubcredential *_credential;
    PKPaymentWebService *_localDeviceWebService;
    PKPaymentWebService *_remoteDeviceWebService;
    PKPassCredentialShare *_invitationReceipt;
    BOOL _hasFinished;
}

- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)canAcceptInvitationWithCompletion:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)initializeAccountAttestationIfNecessaryWithCompletion:(id /* block */)a0;
- (void)sendInvitation;
- (void)sendInvitationWithAuth:(id)a0 completion:(id /* block */)a1;
- (id)userAuthDelegate;

@end
