@class NSString;

@interface DAKeySharingSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyPreTrackDataUpdate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptCrossPlatformInvitationWithIdentifier:(id)a0 passcode:(id)a1 productPlanIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)acceptSharingInvitationWithIdentifier:(id)a0 passcode:(id)a1 productPlanIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (id)cancelSharingInvitation:(id)a0;
- (void)createSharingInvitationsForKeyIdentifier:(id)a0 friendIdentifier:(id)a1 auth:(id)a2 config:(id)a3 completionHandler:(id /* block */)a4;
- (void)getPreTrackRequestForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)ppidRequestForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)readerInformationForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestBindingAttestationDataForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)requestInviteWithConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)retryPasscode:(id)a0 forKeyIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendSharingInvitationForKeyIdentifier:(id)a0 toIdsIdentifier:(id)a1 auth:(id)a2 config:(id)a3 completionHandler:(id /* block */)a4;
- (void)sendSilentSharingInvitationWithKeyIdentifier:(id)a0 config:(id)a1 groupIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)setBindingAttestation:(id)a0 forKeyWithIdentifier:(id)a1 callback:(id /* block */)a2;
- (void)setMailboxIdentifier:(id)a0 forOwnerKeyIdentifier:(id)a1 forInvitationIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)startShareAcceptanceFlowWithInvitation:(id)a0 fromMailboxIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)didEnd:(id)a0;
- (void)acceptSharingInvitation:(id)a0 fromMailboxIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)acceptSharingInvitation:(id)a0 fromMailboxIdentifier:(id)a1 passcode:(id)a2 completionHandler:(id /* block */)a3;
- (void)acceptSharingInvitationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptSharingInvitationWithIdentifier:(id)a0 passcode:(id)a1 completionHandler:(id /* block */)a2;
- (void)authorizeSharingInvitationIdentifier:(id)a0 auth:(id)a1 completionHandler:(id /* block */)a2;
- (void)didStart:(BOOL)a0;

@end
