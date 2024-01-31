@class AEXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface AEAssessmentStateSourceRegisteringProxy : NSObject <AEAssessmentStateSourceRegistering> {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)daemonProxyWithQueue:(id)a0;
+ (id)proxyWithEndpoint:(id)a0 queue:(id)a1;

- (void).cxx_destruct;
- (void)registerPublisherWithLifetimeEndpoint:(id)a0 completion:(id /* block */)a1;

@end
