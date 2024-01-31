@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXLIFOQueue : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (void)_executeNextPendingBlock;
- (void)dispatchAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithTargetQueue:(id)a0;

@end
