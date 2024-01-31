@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject

@property (retain) AMSPromiseCompletionBlocks *completionBlocks;
@property (retain) AMSPromiseResult *promiseResult;
@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isTimedOut) BOOL timedOut;

+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithAny:(id)a0 timeout:(double)a1;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithPromiseResult:(id)a0;
+ (id)promiseWithSome:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)unwrappedPromiseWithPromise:(id)a0;
+ (id)promiseWithSome:(id)a0 timeout:(double)a1;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithAll:(id)a0 timeout:(double)a1;
+ (void)_enumeratePromises:(id)a0 startingAt:(long long)a1 block:(id /* block */)a2;
+ (void)_configureFlattenedPromise:(id)a0 withPromises:(id)a1 results:(id)a2 previousError:(id)a3 currentPromiseIndex:(unsigned long long)a4;
+ (id)promiseWithResult:(id)a0;
+ (id)promiseFinishedWithDefaultErrorOrResult:(id)a0;
+ (BOOL)_errorIsTimeOutError:(id)a0;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithAny:(id)a0;

- (id)catchWithBlock:(id /* block */)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (BOOL)finishWithPromiseResult:(id)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithResult:(id)a0;
- (id)init;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)resultWithCompletion:(id /* block */)a0;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (id)promiseWithTimeout:(double)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)_isFinished;
- (void)waitUntilFinished;
- (id /* block */)completionHandlerAdapter;
- (id)continueWithBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (BOOL)cancel;
- (id /* block */)boolCompletionHandlerAdapter;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)finishWithError:(id)a0;
- (id)thenWithBlock:(id /* block */)a0;
- (id)binaryPromiseAdapter;
- (id)mutablePromiseAdapter;
- (void)resultBeforeDate:(id)a0 completion:(id /* block */)a1;

@end
