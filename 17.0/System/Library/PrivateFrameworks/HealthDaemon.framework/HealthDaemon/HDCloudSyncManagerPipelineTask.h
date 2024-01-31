@class NSArray, HDAssertion;

@interface HDCloudSyncManagerPipelineTask : HDCloudSyncManagerRepositoryTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSArray *pipelines;
@property (retain, nonatomic) HDAssertion *accessibilityAssertion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)callCompletionWithSuccess:(BOOL)a0 error:(id)a1;
- (void)didFailWithErrors:(id)a0;
- (void)didFinishWithSuccess;
- (id)initWithManager:(id)a0 context:(id)a1;
- (id)initWithManager:(id)a0 context:(id)a1 accessibilityAssertion:(id)a2 completion:(id /* block */)a3;
- (void)mainWithRepositories:(id)a0 error:(id)a1;
- (id)pipelineForRepository:(id)a0;
- (BOOL)requiresExistingShareOwnerParticipant;

@end
