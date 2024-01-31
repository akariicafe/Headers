@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTInvocationDispatcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (nonatomic) BOOL valid;

- (id)initWithQueue:(id)a0;
- (void)shutdown;
- (id)init;
- (unsigned long long)countOfPendingInvocations;
- (BOOL)invocationsPending;
- (void)enqueueBlock:(id /* block */)a0 description:(id)a1;
- (BOOL)dispatchPendingInvocations;
- (void)removeAllPendingInvocations;
- (void)_enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (void).cxx_destruct;
- (void)enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;

@end
