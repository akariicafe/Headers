@class NSString, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FMFuture : NSObject <FMPromise> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _finished;
    NSMutableArray *_completionBlocks;
    id _resultValue;
    NSError *_resultError;
}

@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)futureWithError:(id)a0;
+ (id)futureWithResult:(id)a0;
+ (id)lazyFutureWithBlock:(id /* block */)a0;
+ (id)futureWithBlock:(id /* block */)a0;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)combineAllFutures:(id)a0 ignoringErrors:(BOOL)a1 scheduler:(id)a2;
+ (id)combineAllFutures:(id)a0 scheduler:(id)a1;
+ (id)futureWithNoResult;
+ (id)chainFutures:(id)a0;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(id /* block */)a0;
+ (id)lazyFutureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)combineAllFutures:(id)a0;
+ (id)_chainFuturesWithFutureStack:(id)a0;
+ (id)_descriptorForChainOperation:(id)a0 onFuture:(id)a1 withBlock:(id)a2;
+ (id)futureWithCompletionHandlerAdapterBlock:(id /* block */)a0;

- (id)recoverIgnoringError;
- (BOOL)finishWithResult:(id)a0;
- (id)init;
- (id)addFailureBlock:(id /* block */)a0;
- (id)recover:(id /* block */)a0;
- (BOOL)finishWithNoResult;
- (id)addCompletionBlock:(id /* block */)a0;
- (void)_flushCompletionBlocks;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)flatMap:(id /* block */)a0;
- (id)reschedule:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (BOOL)_queue_isCancelled;
- (id)addSuccessBlock:(id /* block */)a0;
- (void)didCancel;
- (void).cxx_destruct;
- (BOOL)cancel;
- (BOOL)finishWithError:(id)a0;

@end
