@class NSObject;
@protocol OS_dispatch_queue;

@interface NRMockXPCProxy : NSProxy {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _async;
    id _target;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
