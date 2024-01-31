@class NSString, HKTaskServerProxyProvider;

@interface HKSignedClinicalDataStore : NSObject <HKSignedClinicalDataStoreClientInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)triggerDownloadPublicKeysForCatalogURL:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)parseSignedClinicalData:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)triggerDownloadIssuerRegistryForCatalogURL:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (id)logPrefix;
- (void)deleteSignedClinicalDataRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchSignedClinicalDataGroupBackingMedicalRecord:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)reverifySignatureForRecord:(id)a0 completion:(id /* block */)a1;
- (void)storeSignedClinicalData:(id)a0 completion:(id /* block */)a1;
- (void)_fetchServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)fetchCurrentRegistryIssuerContentVersionWithCompletion:(id /* block */)a0;
- (void)fetchCurrentRegistryPublicKeyContentVersionWithCompletion:(id /* block */)a0;
- (void)fetchPublicKeyEntriesWithCompletion:(id /* block */)a0;
- (void)fetchPublicKeyWithKeyID:(id)a0 completion:(id /* block */)a1;
- (void)insertOrReplaceIssuerRegistryEntries:(id)a0 completion:(id /* block */)a1;
- (void)insertOrReplacePublicKeyEntries:(id)a0 completion:(id /* block */)a1;
- (void)reextractSignedClinicalDataRecordsForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removePublicKeyEntriesWithKeyIDs:(id)a0 completion:(id /* block */)a1;
- (void)setRegistryIssuerContentVersion:(id)a0 completion:(id /* block */)a1;
- (void)setRegistryPublicKeyContentVersion:(id)a0 completion:(id /* block */)a1;

@end
