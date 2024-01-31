@class PKPaymentWebService, PKAppletSubcredentialSharingInvitation;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKSubcredentialProvisioningAcceptRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentWebService *_remoteDeviceWebService;
    PKPaymentWebService *_localDeviceWebService;
    id<PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;
    id<PKPaymentWebServiceTargetDeviceProtocol> _localTargetDevice;
    PKAppletSubcredentialSharingInvitation *_invitation;
}

+ (BOOL)canDeviceAcceptInvitation:(id)a0;

- (void)performOperation;
- (void)canAcceptInvitation:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_handleAcceptInviteResponseWithPass:(id)a0 error:(id)a1;
- (void)acceptCrossPlatformInvitation;
- (void)acceptIDSInvitation;
- (void)acceptInvitation:(id)a0 withMetadata:(id)a1;
- (void)getMatchingInvitation:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)metadataForInvitation:(id)a0 withCompletion:(id /* block */)a1;

@end
