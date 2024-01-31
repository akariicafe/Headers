@class SSPromise;

@interface SSBinaryPromise : NSObject

@property (retain, nonatomic) SSPromise *backingPromise;

+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithPromise:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithSuccess;

- (void)addFinishBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (BOOL)resultWithError:(id *)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)init;
- (void)_removeFromGlobalPromiseStorage;
- (BOOL)finishWithSuccess;
- (void)waitUntilFinished;
- (id /* block */)completionHandlerAdapter;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)promiseAdapter;
- (void).cxx_destruct;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (BOOL)finishWithError:(id)a0;

@end
