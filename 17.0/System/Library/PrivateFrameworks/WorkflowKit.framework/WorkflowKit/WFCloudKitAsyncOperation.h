@interface WFCloudKitAsyncOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;

- (void)start;
- (void)finishExecuting;
- (void)startExecuting;

@end
