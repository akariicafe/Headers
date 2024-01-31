@class NSString, HKProxyProvider;

@interface HDHealthRecordsIngestionServiceClient : NSObject <_HKXPCExportable> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)dealloc;
- (void)reverifySignatureForRecord:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)triggerDownloadPublicKeysForCatalogURL:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (void)connectionInvalidated;
- (id)initWithConnection:(id)a0;
- (void)parseSignedClinicalData:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)addCardToWalletForRecord:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)willDeleteSignedClinicalDataRecordWithSyncIdentifier:(id)a0;
- (void)didUpdateSignedClinicalDataRecord:(id)a0;
- (void)_synchronousPerformWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)triggerDownloadIssuerRegistryForCatalogURL:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (id)handleSignedClinicalDataFeature:(id)a0 context:(id)a1 error:(id *)a2;
- (void)processOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
