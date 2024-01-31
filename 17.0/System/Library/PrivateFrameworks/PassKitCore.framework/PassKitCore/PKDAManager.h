@class PKDAPairingSessionManager, PKDASessionManager, NSObject;
@protocol OS_dispatch_queue;

@interface PKDAManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PKDAPairingSessionManager *_pairingSessionManager;
    PKDASessionManager *_managementSessionManager;
    PKDASessionManager *_sharingSessionManager;
}

+ (BOOL)isSupported;
+ (BOOL)isCarKeySupportedForManufacturerIdentifier:(id)a0 issuerIdentifier:(id)a1 productPlanIdentifier:(id)a2;

- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void)listCredentialsWithCompletion:(id /* block */)a0;
- (void)generateTransactionKeyWithParameters:(id)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (void)updateTrackingAttestation:(id)a0 forCredential:(id)a1 encryptedContainer:(id)a2 completion:(id /* block */)a3;
- (void)startShareAcceptanceFlowWithInvitation:(id)a0 fromMailboxIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)signData:(id)a0 auth:(id)a1 bundleIdentifier:(id)a2 nonce:(id)a3 credential:(id)a4 completion:(id /* block */)a5;
- (void)handleOutstandingMessage:(id)a0 subcredentialIdentifier:(id)a1 credentialShareIdentifier:(id)a2 transportIdentifier:(id)a3 completion:(id /* block */)a4;
- (void)immobilizerTokensCountForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)declineSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)routingInformationForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_deviceCredentialForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)createInviteForShare:(id)a0 forCredential:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (void)acceptCrossPlatformInvitationWithIdentifier:(id)a0 transportChannelIdentifier:(id)a1 activationCode:(id)a2 encryptedProductPlanIdentifierContainer:(id)a3 completion:(id /* block */)a4;
- (id)decryptData:(id)a0 withCredential:(id)a1 ephemeralPublicKey:(id)a2;
- (void)listDACredentialsWithSession:(id)a0 seid:(id)a1 completion:(id /* block */)a2;
- (id)storeSEBlobForSubcredentialIdentifier:(id)a0 seBlob:(id)a1;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)accountAttestionRequestForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendSharingInvitation:(id)a0 forInvitationRequest:(id)a1 completion:(id /* block */)a2;
- (void)setTransportChannelIdentifier:(id)a0 forCredential:(id)a1 forCredentialShare:(id)a2 completion:(id /* block */)a3;
- (id)description;
- (BOOL)deletePrivacyKey:(id)a0 outError:(id *)a1;
- (void)getProductPlanIdentifierRequestForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)setAccountAttestation:(id)a0 forCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)rescindInvitations:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)statusForSentSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)privacyKeysForGroupIdentifier:(id)a0 privacyKeyIdentifier:(id)a1 outError:(id *)a2;
- (void)requestSharingInvitation:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)listCredentialsWithSession:(id)a0 seid:(id)a1 completion:(id /* block */)a2;
- (void)revokeSharedCredentials:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)hasLongTermPrivacyKeyForGroupIdentifier:(id)a0;
- (void)probeTerminalForPairingStatusWithCompletion:(id /* block */)a0;
- (id)encryptData:(id)a0 scheme:(id)a1 recipientPublicKey:(id)a2 outError:(id *)a3;
- (void)prewarmWithManufacturerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)outstandingInvitesForCredential:(id)a0 completion:(id /* block */)a1;
- (id)createPrivacyKeyForGroupIdentifier:(id)a0 outError:(id *)a1;
- (void)deleteCredentials:(id)a0 completion:(id /* block */)a1;
- (void)retryActivationCodeForCredentialIdentifier:(id)a0 activationCode:(id)a1 completion:(id /* block */)a2;
- (void)generateTransactionKeyWithSession:(id)a0 seid:(id)a1 readerIdentifier:(id)a2 readerPublicKey:(id)a3 completion:(id /* block */)a4;
- (id)decryptPayload:(id)a0 groupIdentifier:(id)a1 outError:(id *)a2;
- (void)removeSharedCredentialsWithIdentifiers:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)rejectInvitation:(id)a0 completion:(id /* block */)a1;
- (void)declineSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)statusForReceivedSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)sendSharingInvitationWithRequest:(id)a0 auth:(id)a1 completion:(id /* block */)a2;

@end
