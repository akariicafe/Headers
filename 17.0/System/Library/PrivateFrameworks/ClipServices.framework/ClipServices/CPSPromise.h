@class NSError, NSMutableArray, NSConditionLock;

@interface CPSPromise : NSObject {
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

+ (id)promise;

- (void)finishWithResult:(id)a0;
- (id)init;
- (void)finish;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)_flushCompletionBlocks;
- (BOOL)_isFinished;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)_finishWithResult:(id)a0 error:(id)a1;

@end
