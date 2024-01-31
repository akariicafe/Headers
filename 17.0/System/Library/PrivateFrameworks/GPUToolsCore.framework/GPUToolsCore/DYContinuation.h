@class NSObject;
@protocol OS_dispatch_queue;

@interface DYContinuation : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    id /* block */ block;
    BOOL cancelled;
}

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)dispatch;

@end
