@class NSString, HKSharedSummaryTransactionBuilderTaskConfiguration, HDSharedSummaryTransactionEntity;

@interface HDSharedSummaryTransactionBuilderServer : HDStandardTaskServer <HKSharedSummaryTransactionBuilderServerInterface> {
    HKSharedSummaryTransactionBuilderTaskConfiguration *_configuration;
    HDSharedSummaryTransactionEntity *_transactionEntity;
    BOOL _committed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_addSummaries:(id)a0 completion:(id /* block */)a1;
- (void)remote_addMetadata:(id)a0 completion:(id /* block */)a1;
- (void)remote_addedSummariesWithPackage:(id)a0 names:(id)a1 resultsHandler:(id /* block */)a2;
- (void)remote_commitAsUrgent:(BOOL)a0 completion:(id /* block */)a1;
- (void)remote_discardWithCompletion:(id /* block */)a0;
- (void)remote_getCommitStatusWithCompletion:(id /* block */)a0;
- (void)remote_removeAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void)remote_removeSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)remote_removeSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)remote_reuseAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void)remote_reuseSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)remote_reuseSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;

@end
