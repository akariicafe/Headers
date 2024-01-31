@class NSError;

@interface HDCloudSyncPipelineStagePull : HDCloudSyncPipelineStage {
    long long _queue_pullOperationFailureCount;
    NSError *_queue_firstPullOperationError;
}

+ (id)operationTagDependencies;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
