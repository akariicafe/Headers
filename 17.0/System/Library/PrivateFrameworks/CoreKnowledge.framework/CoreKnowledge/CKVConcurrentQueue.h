@class NSObject;
@protocol OS_dispatch_queue;

@interface CKVConcurrentQueue : CKVQueue {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)dequeue;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;

@end
