@class NSObject;
@protocol OS_dispatch_queue;

@interface HMFDispatchContext : NSObject <HMFAsyncContext> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _alwaysDispatch;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)blessWithImplicitContext:(id)a0;

- (id)initWithQueue:(id)a0;
- (id)initWithQueue:(id)a0 alwaysDispatch:(BOOL)a1;
- (void)dealloc;
- (void)assertIsExecuting;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;

@end
