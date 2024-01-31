@class MSVTaskAssertion, NSString, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBKAsynchronousTask : NSObject {
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _taskInvalidationDisabled;
    double _timeout;
}

@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) MSVTaskAssertion *taskAssertion;
@property (retain, nonatomic) NSMutableArray *completions;
@property (copy, nonatomic) id /* block */ finishedHandler;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (nonatomic) int cancelType;

- (void)_invalidateTimer;
- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_invalidateAssertion:(BOOL)a0;
- (void)_onQueueFireExpirationHandlerIfNecesary;
- (void)addTaskCompletionBlock:(id /* block */)a0;
- (void)beginTaskOperation;
- (void)endTaskOperation;
- (void)finishTaskOperationWithResult:(id)a0 error:(id)a1;
- (id)initWithHandlerQueue:(id)a0 timeout:(double)a1 debugDescription:(id)a2;
- (void)invokeTaskCompletionBlocksWithBlock:(id /* block */)a0;

@end
