@class NSObject;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface AWUnitTestSampler : NSObject <AWUnitTestSampler> {
    id<NSXPCProxyCreating> _remoteSamplerProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedSampler;

- (void)setSmartCoverClosed:(BOOL)a0;
- (id)init;
- (void)setDisplayState:(BOOL)a0;
- (id)connect;
- (void).cxx_destruct;
- (id)_connect;
- (void)setCarplayStateChangedCallback:(id /* block */)a0;
- (id)AVFoundationSession;
- (void)setSampleState:(BOOL)a0;
- (void)getStatsWithBlock:(id /* block */)a0;
- (id)invokeSampler:(id /* block */)a0;
- (void)resetStats;
- (void)setCarPlayConnected:(BOOL)a0;
- (void)setCarPlayConnected:(BOOL)a0 reply:(id /* block */)a1;
- (void)setDisplayCallback:(id /* block */)a0;
- (void)setDisplayState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setPearlErrorState:(BOOL)a0;
- (void)setPearlErrorState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSampleState:(BOOL)a0 deliverEvent:(BOOL)a1;
- (void)setSampleState:(BOOL)a0 deliverEvent:(BOOL)a1 reply:(id /* block */)a2;
- (void)setSampleState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSmartCoverCallback:(id /* block */)a0;
- (void)setSmartCoverClosed:(BOOL)a0 reply:(id /* block */)a1;

@end
