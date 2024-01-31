@class NSString, NSMutableDictionary, NSHashTable, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface NPKIDVRemoteDeviceConnectionCoordinator : NSObject <IDSServiceDelegate, NPKIDVRemoteDeviceNotificationManager, NPKIDVRemoteDeviceCredentialStorageCoordinatorProtocol> {
    IDSService *_remoteDeviceIDSService;
    NSObject<OS_dispatch_queue> *_IDSMessagesQueue;
    NSMutableDictionary *_outstandingRequestItems;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)addNotificationWithType:(unsigned long long)a0 documentType:(unsigned long long)a1 issuerName:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void)getCASDCertificateWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)a0;
- (void)establishPrearmTrustV2:(id)a0 completion:(id /* block */)a1;
- (void)prearmCredentialWithAuthorizationToken:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifiersInPartitions:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)a0;
- (void)provisionCredentialWithType:(unsigned long long)a0 metadata:(id)a1 policyIdentifier:(id)a2 credentialIdentifier:(id)a3 attestations:(id)a4 completion:(id /* block */)a5;
- (void)addObserver:(id)a0;
- (void)createCredentialInPartition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)establishPrearmTrustV2Response:(id)a0;
- (void)_inQueue_teardownCurrentRemoteDeviceConnection;
- (id)_outstandingRequestItemWithCompletion:(id)a0 errorHandler:(id)a1;
- (id)_safeQueue_outstandingRequestItemForIDSProtobuf:(id)a0;
- (id)_safeQueue_outstandingRequestItemForIDSProtobuf:(id)a0 remove:(BOOL)a1;
- (id)_safeQueue_outstandingRequestItemWithMessageIdentifier:(id)a0 remove:(BOOL)a1;
- (void)_safeQueue_resetCleanupTimerForOutstandingRequestItemWithMessageIdentifier:(id)a0;
- (void)_sendEstablishPrearmTrustRequest:(id)a0 item:(id)a1;
- (void)_sendRequest:(id)a0 withType:(unsigned short)a1 priority:(long long)a2 queueIdentifier:(id)a3 requestItem:(id)a4;
- (void)_sendRequest:(id)a0 withType:(unsigned short)a1 queueIdentifier:(id)a2 requestItem:(id)a3;
- (void)addNotificationResponse:(id)a0;
- (void)createCredentialResponse:(id)a0;
- (void)deleteCredential:(id)a0 withConfiguredPartitions:(id)a1 completion:(id /* block */)a2;
- (void)deleteCredentialResponse:(id)a0;
- (void)deleteGlobalAuthACLResponse:(id)a0;
- (void)establishPrearmTrustResponse:(id)a0;
- (void)fetchPartitionsCredentialIdentifiersResponse:(id)a0;
- (void)fetchPropertiesOfCredentialResponse:(id)a0;
- (void)generateCredentialSigningKeyResponse:(id)a0;
- (void)generateKeyWithType:(unsigned long long)a0 credentialIdentifier:(id)a1 withConfiguredPartitions:(id)a2 completion:(id /* block */)a3;
- (void)generatePresentmentKeysForCredential:(id)a0 numKeys:(long long)a1 withConfiguredPartitions:(id)a2 completion:(id /* block */)a3;
- (void)generatePresentmentKeysForCredentialResponse:(id)a0;
- (void)getCASDCertificateResponse:(id)a0;
- (void)handleHeartbeats:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handlePrearmStatusUpdate:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)nonceForAuthorizationTokenResponse:(id)a0;
- (void)prearmCredentialWithAuthorizationTokenResponse:(id)a0;
- (void)propertiesOfCredential:(id)a0 withConfiguredPartitions:(id)a1 completion:(id /* block */)a2;
- (void)provisionCredentialResponse:(id)a0;
- (void)startCurrentRemoteDeviceConnection;
- (void)teardownCurrentRemoteDeviceConnection;

@end
