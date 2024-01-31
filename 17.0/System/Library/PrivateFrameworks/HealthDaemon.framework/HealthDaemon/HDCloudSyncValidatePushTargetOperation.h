@class NSArray, NSMutableDictionary;

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    NSArray *_targets;
    NSMutableDictionary *_targetsBySequenceToDelete;
    BOOL _requiresOwnershipRoll;
}

+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
