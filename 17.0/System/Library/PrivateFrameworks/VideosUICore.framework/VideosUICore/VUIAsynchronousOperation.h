@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;

@end
