@class NSArray, HDCloudSyncShareSetupMetadata, HDCloudSyncAcceptSharesOperation;

@interface HDCloudSyncManagerAcceptSharesTask : HDCloudSyncManagerPipelineTask {
    HDCloudSyncShareSetupMetadata *_shareSetupMetadata;
    HDCloudSyncAcceptSharesOperation *_acceptSharesOperation;
}

@property (readonly, copy, nonatomic) NSArray *acceptedShares;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 shareSetupMetadata:(id)a2 accessibilityAssertion:(id)a3 completion:(id /* block */)a4;
- (id)pipelineForRepository:(id)a0;
- (BOOL)requiresExistingShareOwnerParticipant;

@end
