@class DAKeySharingSession;

@interface PKAppletSubcredentialSharingSession : PKDASession

@property (retain, nonatomic) DAKeySharingSession *session;

+ (id)createPendingSessionWithDelegate:(id)a0;
+ (id)createSessionWithDelegate:(id)a0;

- (void)startShareAcceptanceFlowWithInvitation:(id)a0 fromMailboxIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)routingInformationForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)createInviteForShare:(id)a0 forCredential:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (void)acceptCrossPlatformInvitationWithIdentifier:(id)a0 transportChannelIdentifier:(id)a1 activationCode:(id)a2 encryptedProductPlanIdentifierContainer:(id)a3 completion:(id /* block */)a4;
- (void)accountAttestionRequestForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendSharingInvitation:(id)a0 forInvitationRequest:(id)a1 completion:(id /* block */)a2;
- (void)setTransportChannelIdentifier:(id)a0 forCredential:(id)a1 forCredentialShare:(id)a2 completion:(id /* block */)a3;
- (void)getProductPlanIdentifierRequestForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)setAccountAttestation:(id)a0 forCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)requestSharingInvitation:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (BOOL)startSession;
- (void)retryActivationCodeForCredentialIdentifier:(id)a0 activationCode:(id)a1 completion:(id /* block */)a2;
- (void)sendSharingInvitationWithRequest:(id)a0 auth:(id)a1 completion:(id /* block */)a2;
- (void)acceptSharingInvitation:(id)a0 encryptedProductPlanIdentifierContainer:(id)a1 completion:(id /* block */)a2;
- (BOOL)cancelSharingInvitationWithIdentifier:(id)a0;
- (void)getPretrackRequestForKeyWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;

@end
