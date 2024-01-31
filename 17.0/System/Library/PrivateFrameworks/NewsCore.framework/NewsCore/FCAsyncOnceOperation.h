@class NFMutexLock, NSObject;
@protocol OS_dispatch_group, FCOperationCanceling, FCOperationPrioritizing;

@interface FCAsyncOnceOperation : NSObject {
    BOOL _finished;
    BOOL _succeeded;
    id /* block */ _workBlock;
    unsigned long long _interest;
    NSObject<OS_dispatch_group> *_activeGroup;
    id<FCOperationCanceling, FCOperationPrioritizing> _activeOperation;
    long long _relativePriority;
    NFMutexLock *_lock;
}

@property (readonly, nonatomic) BOOL finishedExecuting;
@property (readonly, nonatomic) BOOL finishedExecutingWithFailure;

- (id)initWithBlock:(id /* block */)a0;
- (id)executeWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)setRelativePriority:(long long)a0;
- (id)executeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
