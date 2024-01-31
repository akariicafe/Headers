@interface HDCloudSyncSynchronousOperation : HDCloudSyncOperation

+ (BOOL)shouldProduceOperationAnalytics;
+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (BOOL)performWithError:(id *)a0;

@end
