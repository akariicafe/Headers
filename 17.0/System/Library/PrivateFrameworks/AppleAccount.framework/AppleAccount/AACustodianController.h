@class NSString, NSData, AACustodianDaemonConnection;

@interface AACustodianController : NSObject {
    AACustodianDaemonConnection *_daemonConnection;
    NSString *_ownerCustodianAltDSID;
    NSData *_encryptedPRKC;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)fetchCustodianPasswordResetInformationWithSessionID:(id)a0 completion:(id /* block */)a1;
- (void)startHealthCheckWithCompletion:(id /* block */)a0;
- (void)availableRecoveryFactorsWithCompletion:(id /* block */)a0;
- (BOOL)cancelCustodianRecoveryWithSessionID:(id)a0 error:(id *)a1;
- (void)displayInvitationUIWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)displayTrustedContactFlowWithModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchCustodianHealthStatusWithCompletion:(id /* block */)a0;
- (void)fetchCustodianRecoveryConfigurationWithCompletion:(id /* block */)a0;
- (void)fetchCustodianRecoveryKeysWithSessionID:(id)a0 completion:(id /* block */)a1;
- (void)fetchCustodianshipInfoWithCompletion:(id /* block */)a0;
- (void)fetchCustodianshipInfoWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSuggestedCustodiansWithCompletion:(id /* block */)a0;
- (void)fetchTrustedContactsWithCompletion:(id /* block */)a0;
- (void)generateCustodianRecoveryCodeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performTrustedContactsDataSyncWithCompletion:(id /* block */)a0;
- (void)pullTrustedContactsFromCloudKitWithCompletion:(id /* block */)a0;
- (void)reSendCustodianInvitationWithCustodianID:(id)a0 completion:(id /* block */)a1;
- (void)removeCustodian:(id)a0 completion:(id /* block */)a1;
- (void)respondToCustodianRequestWithResponse:(id)a0 completion:(id /* block */)a1;
- (void)setupCustodianshipWithContext:(id)a0 completion:(id /* block */)a1;
- (void)startCustodianRecoveryWithContext:(id)a0 completion:(id /* block */)a1;
- (void)startManateeMigrationWithCompletion:(id /* block */)a0;
- (void)stopBeingCustodian:(id)a0 completion:(id /* block */)a1;
- (void)validateCustodianRecoveryCodeWithContext:(id)a0 completion:(id /* block */)a1;

@end
