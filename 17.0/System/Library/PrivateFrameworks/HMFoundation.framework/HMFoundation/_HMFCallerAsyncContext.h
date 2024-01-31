@interface _HMFCallerAsyncContext : NSObject <HMFAsyncContext>

- (void)assertIsExecuting;
- (id)description;
- (void)performBlock:(id /* block */)a0;

@end
