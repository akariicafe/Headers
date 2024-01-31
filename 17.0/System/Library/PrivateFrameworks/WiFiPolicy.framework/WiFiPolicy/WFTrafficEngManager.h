@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (void)__configureRapportSessionClient:(id)a0;
- (void)__sendPeriodicEvent:(id)a0;
- (void)__activateDiscovery;
- (void)__tearDownRapportDataSession;
- (void)cleanup;
- (id)__collectCriticalAppInfo;
- (void)__registerRequestHandler;
- (void)__invalidateSession;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__invalidateDiscovery;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void)__registerCallbacksAndActivate;
- (void).cxx_destruct;
- (void)__sendEventToPeers;
- (id)initWithTrafficEngDelegate:(id)a0;

@end
