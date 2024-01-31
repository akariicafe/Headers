@class DCXPCDisconnectHandler, NSString, NSXPCConnection;
@protocol DCCredentialStoreXPCProtocol;

@interface DCCredentialStoreClient : NSObject <DCCredentialStoreXPCProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<DCCredentialStoreXPCProtocol> remoteObjectProxy;
@property (retain, nonatomic) DCXPCDisconnectHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)credentialIdentifiersInPartitions:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)generatePresentmentKeysForCredential:(id)a0 numKeys:(long long)a1 completion:(id /* block */)a2;
- (void)propertiesOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)createCredentialInPartition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)elementsOfCredential:(id)a0 elementIdentifiers:(id)a1 authData:(id)a2 completion:(id /* block */)a3;
- (void)payloadAuthACLForCredential:(id)a0 completion:(id /* block */)a1;
- (void)allElementsOfCredential:(id)a0 authData:(id)a1 completion:(id /* block */)a2;
- (void)associateExternalPresentmentKeyWithCredential:(id)a0 publicKeyIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)authorizeRemoteKeySigningKeyWithCredential:(id)a0 remoteKey:(id)a1 completion:(id /* block */)a2;
- (void)checkCompletenessOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)clearPresentmentKeyUsageForCredential:(id)a0 completion:(id /* block */)a1;
- (void)configureWithPartitions:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifierForPublicKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifiersInPartitions:(id)a0 docType:(id)a1 completion:(id /* block */)a2;
- (void)eraseLegacySEKeySlot:(long long)a0 completion:(id /* block */)a1;
- (void)generateDeviceEncryptionKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generateKeySigningKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generatePresentmentKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)occupiedLegacySEKeySlotsWithCompletion:(id /* block */)a0;
- (void)payloadsOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)replacePayloadOfCredential:(id)a0 withPayload:(id)a1 format:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setStateOfCredential:(id)a0 to:(unsigned long long)a1 completion:(id /* block */)a2;

@end
