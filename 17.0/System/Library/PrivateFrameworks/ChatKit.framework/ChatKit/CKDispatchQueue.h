@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDispatchQueue : NSObject {
    unsigned long long _fifo;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain, nonatomic) struct __CFBinaryHeap { } *heap;
@property (retain, nonatomic) NSMutableDictionary *dispatchQueueBlocks;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isSuspended) BOOL suspended;

+ (id)concurrentQueueWithDispatchPriority:(long long)a0;
+ (id)serialQueueWithDispatchPriority:(long long)a0;

- (id)init;
- (void)dealloc;
- (void)addBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)containsOutstandingBlockForKey:(id)a0;
- (id)_initWithDispatchAttr:(id)a0 dispatchPriority:(long long)a1;
- (void)addBlock:(id /* block */)a0 withQueuePriority:(long long)a1;
- (void)addBlock:(id /* block */)a0 withQueuePriority:(long long)a1 forKey:(id)a2;
- (id)allKeysOfOutstandingBlocks;
- (long long)queuePriorityOfOutstandingBlockForKey:(id)a0;
- (void)removeAllOutstandingBlocks;
- (void)removeOutstandingBlockForKey:(id)a0;
- (void)setQueuePriority:(long long)a0 ofOutstandingBlockForKey:(id)a1;

@end
