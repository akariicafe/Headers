@class UIKeyboardTaskExecutionContext, NSObject;
@protocol OS_dispatch_queue;

@interface UIKeyboardTaskSubqueue : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    UIKeyboardTaskExecutionContext *_context;
}

+ (id)subqueueWithExecutionContext:(id)a0;

- (void)dispatchAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithExecutionContext:(id)a0;
- (void)returnExecutionToParentQueue;

@end
