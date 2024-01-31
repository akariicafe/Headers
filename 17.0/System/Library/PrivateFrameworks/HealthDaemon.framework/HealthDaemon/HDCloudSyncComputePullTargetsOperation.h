@class HDSyncIdentity;

@interface HDCloudSyncComputePullTargetsOperation : HDCloudSyncSynchronousOperation {
    HDSyncIdentity *_currentSyncIdentity;
    BOOL _hasUpgradedToSyncIdentity;
}

+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationEnd;
+ (BOOL)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (BOOL)performWithError:(id *)a0;

@end
