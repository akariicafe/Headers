@class PKPaymentWebService, PKAppletSubcredentialSharingInvitation;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKSubcredentialProvisioningRequestRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentWebService *_remoteDeviceWebService;
    id<PKPaymentWebServiceTargetDeviceProtocol> _remoteTargetDevice;
    PKAppletSubcredentialSharingInvitation *_invitation;
}

+ (BOOL)canRequestInvitation:(id)a0;

- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
