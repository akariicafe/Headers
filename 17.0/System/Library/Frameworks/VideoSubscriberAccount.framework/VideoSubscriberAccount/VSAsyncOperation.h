@interface VSAsyncOperation : NSOperation {
    int _state;
}

- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)cancel;
- (void)finishExecutionIfPossible;

@end
