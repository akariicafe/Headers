@class EFPromise, NSConditionLock;
@protocol EFScheduler;

@interface EFLazyFuture : EFFuture {
    NSConditionLock *_stateLock;
    id<EFScheduler> _scheduler;
    id /* block */ _block;
    EFPromise *_promise;
}

- (id)resultIfAvailable:(id *)a0;
- (void)onScheduler:(id)a0 addFailureBlock:(id /* block */)a1;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)isCancelled;
- (BOOL)run;
- (BOOL)tryCancel;
- (id)delegate;
- (id)initWithScheduler:(id)a0 block:(id /* block */)a1;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)isFinished;
- (void)onScheduler:(id)a0 addSuccessBlock:(id /* block */)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;

@end
