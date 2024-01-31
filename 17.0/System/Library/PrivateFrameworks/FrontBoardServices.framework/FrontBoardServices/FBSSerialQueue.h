@class NSString;

@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainDispatchQueue;
+ (id)queueWithDispatchQueue:(id)a0;
+ (id)_queueWithSerialDispatchQueue:(id)a0;
+ (id)queueWithMainRunLoopModes:(id)a0;

- (id)init;
- (void)performAsync:(id /* block */)a0;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (id)backingQueueIfExists;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (void)assertOnQueue;

@end
