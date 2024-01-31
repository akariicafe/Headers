@class AEXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface AEAssessmentUIServiceProxy : NSObject <AEAssessmentUIService, AEXPCConnection> {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (id)proxyWithEndpoint:(id)a0 queue:(id)a1;
+ (id)serviceProxyWithQueue:(id)a0;

- (void)invalidate;
- (void).cxx_destruct;
- (void)deactivateWithCompletion:(id /* block */)a0;
- (void)animateOutWithCompletion:(id /* block */)a0;
- (void)activateWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)animateInWithCompletion:(id /* block */)a0;

@end
