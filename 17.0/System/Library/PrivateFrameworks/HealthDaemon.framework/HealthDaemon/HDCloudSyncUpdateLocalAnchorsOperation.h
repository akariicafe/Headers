@interface HDCloudSyncUpdateLocalAnchorsOperation : HDCloudSyncSynchronousOperation

+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationStart;

- (BOOL)performWithError:(id *)a0;

@end
