@class AMSMutablePromise;

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSMutablePromise *backingPromise;

+ (id)promiseWithAll:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithPromise:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithSuccess;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithAny:(id)a0;

- (id)catchWithBlock:(id /* block */)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (BOOL)resultWithError:(id *)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)init;
- (void)_removeFromGlobalPromiseStorage;
- (BOOL)finishWithSuccess;
- (void)resultWithCompletion:(id /* block */)a0;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)waitUntilFinished;
- (id /* block */)completionHandlerAdapter;
- (id)continueWithBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)promiseAdapter;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (BOOL)cancel;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)finishWithError:(id)a0;
- (id)thenWithBlock:(id /* block */)a0;

@end
