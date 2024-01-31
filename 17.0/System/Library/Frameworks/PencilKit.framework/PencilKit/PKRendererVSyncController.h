@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface PKRendererVSyncController : NSObject {
    NSObject<OS_dispatch_queue> *_vSyncQueue;
    NSObject<OS_dispatch_queue> *_runloopQueue;
    NSHashTable *_rendererControllers;
    struct __IOMobileFramebuffer { } *_ioMobileFramebuffer;
}

- (id)init;
- (void).cxx_destruct;

@end
