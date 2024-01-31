@class NSObject;
@protocol OS_dispatch_queue;

@interface _UIAsyncInvocationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_postCompletionQueue;
    NSObject<OS_dispatch_queue> *_completionQueueManagementQueue;
    BOOL _suspendedPostCompletionQueue;
    BOOL _resumedPostCompletionQueue;
}

+ (void)whenInvocationsCompleteForObservers:(id)a0 do:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)whenCompleteDo:(id /* block */)a0;
- (void)_didCompleteInvocation;

@end
