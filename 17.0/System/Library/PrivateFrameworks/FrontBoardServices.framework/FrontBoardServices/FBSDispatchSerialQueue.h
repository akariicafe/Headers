@class NSObject;
@protocol OS_dispatch_queue;

@interface FBSDispatchSerialQueue : FBSSerialQueue {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _main;
}

- (unsigned long long)hash;
- (void)performAsync:(id /* block */)a0;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (id)backingQueueIfExists;
- (id)description;
- (void).cxx_destruct;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
