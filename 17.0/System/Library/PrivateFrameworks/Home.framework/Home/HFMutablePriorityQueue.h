@class NAQueue;

@interface HFMutablePriorityQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NAQueue *queue;
@property (readonly) unsigned long long count;

- (id)init;
- (id)dequeue;
- (id)drain;
- (id)enqueue:(id)a0;
- (void).cxx_destruct;
- (void)_operateOnMatchingObjects:(id)a0 removingMatched:(BOOL)a1 lockedOperationBlock:(id /* block */)a2;
- (void)_prioritizeObjects:(id)a0 priorityBlock:(id /* block */)a1;
- (void)prioritizeObjects:(id)a0;
- (void)prioritizeObjects:(id)a0 increment:(long long)a1;
- (void)removeAllObjectsMatchingObjects:(id)a0;
- (void)removeFirstOfObjects:(id)a0;
- (void)removeObjectsWithEntries:(id)a0;
- (void)resetPriorityForObjects:(id)a0;

@end
