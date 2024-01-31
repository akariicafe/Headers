@class UIKeyboardTaskEntry, NSArray, NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext;

@interface UIKeyboardTaskQueue : NSObject {
    BOOL _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskEntry *_mainThreadContinuation;
}

@property (retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext;
@property (retain, nonatomic) NSArray *activeOriginator;

- (id)init;
- (id)scheduleTask:(id /* block */)a0 timeInterval:(double)a1 repeats:(BOOL)a2;
- (void)performTask:(id /* block */)a0;
- (void)lock;
- (void)addTask:(id /* block */)a0;
- (void)waitUntilAllTasksAreFinished;
- (BOOL)isMainThreadExecutingTask;
- (void)lockWhenReadyForMainThread;
- (void)unlock;
- (void)performSingleTask:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performTaskOnMainThread:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void)promoteDeferredTaskIfIdle;
- (void)waitUntilTaskIsFinished:(id)a0;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)continueExecutionOnMainThread;
- (id)addAndReturnTask:(id /* block */)a0;
- (void)performDeferredTaskIfIdle;
- (void)finishExecution;
- (BOOL)isEmpty;
- (void)addDeferredTask:(id /* block */)a0;

@end
