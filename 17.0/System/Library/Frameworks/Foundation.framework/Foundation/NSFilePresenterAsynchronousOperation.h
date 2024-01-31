@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id /* block */ _block;
    BOOL _isFinished;
    BOOL _isExecuting;
}

+ (id)operationWithBlock:(id /* block */)a0;

- (BOOL)isExecuting;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;

@end
