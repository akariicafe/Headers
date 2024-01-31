@class HDSyncIdentity;

@interface HDCloudSyncPipelineStagePush : HDCloudSyncPipelineStage {
    HDSyncIdentity *_currentSyncIdentity;
}

+ (id)operationTagDependencies;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
