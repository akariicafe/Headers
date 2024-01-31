@class NSString, NSConditionLock, NSError, NSMutableArray;
@protocol VFObserver, VFFutureDelegate;

@interface VFFuture : NSObject <VFPromisePrivate, VFFuture> {
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) id resultIfAvailable;
@property (readonly) id /* block */ completionHandlerAdapter;
@property (readonly) id /* block */ boolErrorCompletionHandlerAdapter;
@property (readonly) id /* block */ errorOnlyCompletionHandlerAdapter;
@property (readonly) id<VFObserver> firstResultObserverAdapter;
@property (readonly) id<VFObserver> resultsObserverAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<VFFutureDelegate> delegate;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;

+ (id)futureWithError:(id)a0;
+ (id)combine:(id)a0;
+ (id)futureWithResult:(id)a0;
+ (id)join:(id)a0;
+ (id)nullFuture;
+ (id)_join:(id)a0 ignoreFailures:(BOOL)a1;

- (BOOL)_nts_isFinished;
- (id)resultIfAvailable:(id *)a0;
- (void)finishWithFuture:(id)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithResult:(id)a0;
- (void)_finishWithFuture:(id)a0;
- (id)result:(id *)a0;
- (id)init;
- (void)addFailureBlock:(id /* block */)a0;
- (void)_addCompletionBlock:(id /* block */)a0;
- (BOOL)tryCancel;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)_flushCompletionBlocks;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)didCancel;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)finishWithError:(id)a0;

@end
