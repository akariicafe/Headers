@class AMSPromise, NSObject;
@protocol OS_dispatch_queue;

@interface AMSUniqueExecutionQueue : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionCallbacksQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (retain, nonatomic) AMSPromise *executionPromise;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue;

- (id)initWithBlock:(id /* block */)a0;
- (void)addCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_beginExecutingBlockWithPromise:(id)a0;
- (id)_createExecutionPromise;
- (void)addCompletionBlockForSubsequentExecution:(id /* block */)a0;

@end
