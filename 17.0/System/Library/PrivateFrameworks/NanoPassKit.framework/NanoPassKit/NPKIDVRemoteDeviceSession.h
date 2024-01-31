@class NSString, PKXPCService;

@interface NPKIDVRemoteDeviceSession : NSObject <PKXPCServiceDelegate, NPKIDVRemoteDeviceNotificationManager> {
    NSString *_deviceID;
    unsigned long long _status;
    PKXPCService *_remoteService;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceIDLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionStatusLock;
}

@property (retain, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sessionForDeviceID:(id)a0 completion:(id /* block */)a1;

- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void)addNotificationWithType:(unsigned long long)a0 documentType:(unsigned long long)a1 issuerName:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)getCASDCertificateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)pairedWatchSEIDWithCompletion:(id /* block */)a0;
- (void)invalidateSession;
- (void)configureWithPartition:(id)a0 ackHandler:(id /* block */)a1;
- (void)registerForEvents:(unsigned long long)a0 withRemoteProcessServiceName:(id)a1 completion:(id /* block */)a2;
- (void)unregisterFromEvents:(unsigned long long)a0 withRemoteProcessServiceName:(id)a1 completion:(id /* block */)a2;
- (void)credentialPreflightStatusForType:(unsigned long long)a0 minOSVersion:(id)a1 completion:(id /* block */)a2;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)a0;
- (void)establishPrearmTrustV2:(id)a0 completion:(id /* block */)a1;
- (void)prearmCredentialWithAuthorizationToken:(id)a0 completion:(id /* block */)a1;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void)credentialIdentifiersInPartitions:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)generatePresentmentKeysForCredential:(id)a0 numKeys:(long long)a1 completion:(id /* block */)a2;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)a0;
- (void)propertiesOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)provisionCredentialWithType:(unsigned long long)a0 metadata:(id)a1 policyIdentifier:(id)a2 credentialIdentifier:(id)a3 attestations:(id)a4 completion:(id /* block */)a5;
- (void)setStatus:(unsigned long long)a0;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (void)createCredentialInPartition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)a0;
- (void)elementsOfCredential:(id)a0 elementIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)generateDeviceEncryptionKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generateKeySigningKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generatePresentmentKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)_confirmRemoteDeviceID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_generateKeyWithType:(unsigned long long)a0 credentialIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)credentialPreflightStatusForType:(unsigned long long)a0 completion:(id /* block */)a1;

@end
