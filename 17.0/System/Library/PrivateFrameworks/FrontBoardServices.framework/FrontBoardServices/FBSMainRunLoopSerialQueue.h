@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FBSMainRunLoopSerialQueue : FBSSerialQueue {
    NSArray *_modes;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFRunLoopSource { } *_source;
    NSMutableArray *_queue_blocks;
    BOOL _main_callingOut;
}

- (unsigned long long)hash;
- (void)dealloc;
- (void)performAsync:(id /* block */)a0;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
