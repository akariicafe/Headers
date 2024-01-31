@class NSSet;

@interface HDCloudSyncManagerRemoveParticipantsTask : HDCloudSyncManagerPipelineTask {
    BOOL _removeAllParticipants;
    NSSet *_participantsToRemove;
}

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 removeAllParticipants:(BOOL)a2 participantsToRemove:(id)a3 accessibilityAssertion:(id)a4 completion:(id /* block */)a5;
- (id)pipelineForRepository:(id)a0;

@end
