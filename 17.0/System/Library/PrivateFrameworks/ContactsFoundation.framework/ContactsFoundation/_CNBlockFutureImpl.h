@class NSString, NSConditionLock, CNSuspendableSchedulerDecorator, CNFutureResult;

@interface _CNBlockFutureImpl : NSObject <CNFutureImpl> {
    CNFutureResult *_futureResult;
    BOOL _queueSuspended;
}

@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *blockScheduler;
@property (nonatomic) BOOL workBlockScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)implWithBlock:(id /* block */)a0;
+ (id)implWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithBlock:(id /* block */)a0;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;

- (BOOL)_nts_isFinished;
- (id)init;
- (id)futureResultFromImmediateLookup;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)isCancelled;
- (void)dealloc;
- (BOOL)nts_mayResumeQueue;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)initWithSchedulerProvider:(id)a0;
- (BOOL)isFinished;
- (void)_flushCompletionBlocks;
- (void)resumeQueue;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)nts_isFinished;
- (void)nts_resumeQueue;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)updateDescriptionWithBuilder:(id)a0;
- (void)addWriterBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)futureResult;
- (BOOL)cancel;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;
- (void)implicitlyResumeQueue;

@end
