@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPAdaptiveCoalescer : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)coalesceRequestKey:(id)a0 handler:(id)a1 executeRequestAndInvokeHandlersBlock:(id /* block */)a2 nowDate:(id)a3;
- (void)garbageCollectPendingKeysForNowDate:(id)a0;
- (void).cxx_destruct;
- (void)coalesceRequestKey:(id)a0 handler:(id)a1 executeRequestAndInvokeHandlersBlock:(id /* block */)a2;

@end
