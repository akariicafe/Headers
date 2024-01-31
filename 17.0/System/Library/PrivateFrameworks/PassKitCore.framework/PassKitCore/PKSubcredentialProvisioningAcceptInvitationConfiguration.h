@class PKPaymentWebService, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingSession, PKAppletSubcredentialSharingInvitationMetadata;

@interface PKSubcredentialProvisioningAcceptInvitationConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration

@property (readonly, weak, nonatomic) PKAppletSubcredentialSharingSession *session;
@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation;
@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitationMetadata *metadata;
@property (readonly, nonatomic) BOOL declineRelatedInvitations;
@property (readonly, nonatomic) PKPaymentWebService *remoteDeviceWebService;

- (id)description;
- (void).cxx_destruct;
- (id)transitionTable;
- (id)initWithSession:(id)a0 invitation:(id)a1 metadata:(id)a2 declineRelatedInvitations:(BOOL)a3 localDeviceWebService:(id)a4 remoteDeviceWebService:(id)a5;
- (id)initWithSession:(id)a0 invitation:(id)a1 metadata:(id)a2 webService:(id)a3;
- (long long)startingState;

@end
