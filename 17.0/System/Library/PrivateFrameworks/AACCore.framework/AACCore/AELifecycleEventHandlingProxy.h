@class AEXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface AELifecycleEventHandlingProxy : NSObject <AELifecycleEventHandling, AEXPCConnection> {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (id)proxyWithEndpoint:(id)a0 queue:(id)a1;

- (void)invalidate;
- (void).cxx_destruct;
- (void)handleEventDidBeginWithCompletion:(id /* block */)a0;
- (void)handleEventDidInvalidateWithError:(id)a0 completion:(id /* block */)a1;

@end
