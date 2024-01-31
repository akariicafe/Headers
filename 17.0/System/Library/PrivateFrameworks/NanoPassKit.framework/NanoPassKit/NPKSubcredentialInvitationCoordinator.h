@class NPKStandaloneFirstUnlockCoordinator, NPKWatchSubcredentialProvisioningService, PKPaymentService, NSString, PKSubcredentialProvisioningController, NSObject, PKAppletSubcredentialSharingSession;
@protocol OS_dispatch_queue;

@interface NPKSubcredentialInvitationCoordinator : NSObject <PKSubcredentialProvisioningControllerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) PKPaymentService *paymentService;
@property (retain, nonatomic) PKSubcredentialProvisioningController *subcredentialProvisioningController;
@property (retain, nonatomic) PKAppletSubcredentialSharingSession *sharingSession;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NPKStandaloneFirstUnlockCoordinator *firstUnlockCoordinator;
@property (retain, nonatomic) NPKWatchSubcredentialProvisioningService *subcredentialProvisioningService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAddSecureElementPassWithConfiguration:(id)a0 outError:(id *)a1;
+ (BOOL)canAddSecureElementPassWithInvitation:(id)a0;

- (void)revokeCredentialsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)accountAttestationAnonymizationSaltWithCompletion:(id /* block */)a0;
- (void)registerCredentialsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)a0;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithError:(id)a1 inState:(long long)a2;
- (id)_paymentWebService;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithPass:(id)a1;
- (id)_errorWithCode:(long long)a0 message:(id)a1;
- (void)canAcceptInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_requestSubcredentialInvitation:(id)a0 fromIDSHandle:(id)a1 completion:(id /* block */)a2;
- (void)_endProvisioningWithPassForInvitation:(id)a0 error:(id)a1;
- (void)_fetchInvitationMatchingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_fetchInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_handleProvisioningAttemptForConfiguration:(id)a0 error:(id)a1;
- (void)_invokeCompletionWithPassForInvitation:(id)a0 error:(id)a1;
- (BOOL)_isInvitationUniqueForPairedReaderIdentifier:(id)a0;
- (void)_makeConfigurationForInvitation:(id)a0 session:(id)a1 metadata:(id)a2 paymentWebService:(id)a3 completion:(id /* block */)a4;
- (void)_performBlockFollowingFirstUnlockWithBlock:(id /* block */)a0;
- (void)_queue_accountAttestationAnonymizationSaltWithCompletion:(id /* block */)a0;
- (void)_queue_canAcceptInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_declineRelatedInvitationsIfNecessaryForInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_deviceContainsInvitationMatchingInvitation:(id)a0 withTimeout:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_queue_fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_queue_listSubcredentialInvitationsWithCompletion:(id /* block */)a0;
- (void)_queue_registerCredentialsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_queue_removeSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_revokeCredentialsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_queue_setAccountAttestationAnonymizationSalt:(id)a0 completion:(id /* block */)a1;
- (void)_queue_updateSubcredentialMetadataOnPass:(id)a0 withCredential:(id)a1 completion:(id /* block */)a2;
- (void)_setUpSharingSessionWithSubcredentialProvisioningController:(id)a0 forInvitation:(id)a1;
- (void)_setUpSubcredentialProvisioningController;
- (void)_startProvisioningForProvisioningController:(id)a0 withConfiguration:(id)a1;
- (void)canAcceptInvitationOnRemoteDeviceForInvitation:(id)a0 completion:(id /* block */)a1;
- (void)declineRelatedInvitationsIfNecessaryForInvitation:(id)a0 completion:(id /* block */)a1;
- (void)deviceContainsInvitationMatchingInvitation:(id)a0 withTimeout:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(id /* block */)a0;
- (void)listSubcredentialInvitationsWithCompletion:(id /* block */)a0;
- (void)removeSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)requestSubcredentialInvitation:(id)a0 completion:(id /* block */)a1;
- (void)setAccountAttestationAnonymizationSalt:(id)a0 completion:(id /* block */)a1;
- (void)startProvisioningWithInvitation:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (void)startProvisioningWithInvitationIdentifier:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (void)startProvisioningWithMailboxAddress:(id)a0 activationCode:(id)a1 completion:(id /* block */)a2;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)a0 shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)a0;
- (void)startSubcredentialProvisioningOnRemoteDeviceForMailboxAddress:(id)a0 activationCode:(id)a1;
- (void)updateSubcredentialMetadataOnPass:(id)a0 withCredential:(id)a1 completion:(id /* block */)a2;

@end
