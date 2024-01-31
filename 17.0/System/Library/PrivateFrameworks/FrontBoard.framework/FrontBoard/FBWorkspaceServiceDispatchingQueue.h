@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FBWorkspaceServiceDispatchingQueue : NSObject <BSServiceDispatchingQueue> {
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performAsync:(id /* block */)a0;
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (void).cxx_destruct;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (id)_initWithTargetQueue:(id)a0;

@end
