@interface HDOntologyStoreTaskServer : HDStandardTaskServer <HDOntologyShardDownloaderObserver, HDOntologyShardImporterObserver, HKOntologyStoreServerInterface>

+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)exportedInterface;
- (void)ontologyShardImporter:(id)a0 didImportEntry:(id)a1;
- (id)remoteInterface;
- (void)remote_downloadRequiredShardsWithCompletion:(id /* block */)a0;
- (void)remote_importRequiredShardsWithCompletion:(id /* block */)a0;
- (void)remote_insertEntries:(id)a0 completion:(id /* block */)a1;
- (void)remote_markShardsWithIdentifiers:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_observeOntologyStoreChanges:(BOOL)a0 completion:(id /* block */)a1;
- (void)remote_ontologyServerURLWithCompletion:(id /* block */)a0;
- (void)remote_ontologyShardRegistryEntriesWithCompletion:(id /* block */)a0;
- (void)remote_pruneOntologyWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_requestGatedOntologyUpdateWithCompletion:(id /* block */)a0;
- (void)remote_setOntologyServerURL:(id)a0 completion:(id /* block */)a1;
- (void)remote_shardRequirementStatusesWithCompletion:(id /* block */)a0;
- (void)remote_updateOntologyForReason:(long long)a0 completion:(id /* block */)a1;
- (void)remote_updateShardRegistryWithCompletion:(id /* block */)a0;
- (void)ontologyShardDownloader:(id)a0 didStageEntry:(id)a1;

@end
