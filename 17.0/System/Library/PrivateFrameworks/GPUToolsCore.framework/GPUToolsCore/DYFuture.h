@class NSTimer, NSCondition, NSError, NSMutableArray;

@interface DYFuture : NSOperation {
    NSTimer *_timeout;
    NSCondition *_condition;
    BOOL _cancelled;
    id _result;
    NSError *_error;
    NSMutableArray *_notifyList;
    NSMutableArray *_inflightDependencies;
    BOOL _started;
    id /* block */ _completion;
    long long _priority;
}

@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL resolved;
@property (readonly, retain, nonatomic) id resolvedResult;
@property (readonly, retain, nonatomic) NSError *resolvedError;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)future;
+ (BOOL)enableAssertMainThread;
+ (id)futureWithResult:(id)a0 error:(id)a1;
+ (BOOL)logPerformance;

- (BOOL)isExecuting;
- (id)init;
- (BOOL)isCancelled;
- (void)dealloc;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (long long)queuePriority;
- (void)waitUntilFinished;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setQueuePriority:(long long)a0;
- (id /* block */)completionBlock;
- (void)resolveWithFuture:(id)a0;
- (void)cancel;
- (id)dependencies;
- (void)addDependency:(id)a0;
- (void)addResultHandler:(id /* block */)a0;
- (BOOL)boolResult;
- (void)_setResult:(id)a0 error:(id)a1 notify_NOLOCK:(BOOL)a2;
- (void)_addDependency_REQUIRESLOCK:(id)a0;
- (id)_dependencies_NOLOCK;
- (void)_start_NOLOCK;
- (BOOL)_waitForDependencies_REQUIRESLOCK;
- (int)intResult;
- (void)notifyGroup:(id)a0;
- (void)notifyOnQueue:(id)a0 handler:(id /* block */)a1;
- (void)requestResult:(id /* block */)a0;
- (void)timeoutAfter:(double)a0 label:(id)a1;
- (unsigned int)uint32Result;
- (void)waitUntilResolved;

@end
