@protocol GTMTLTelemetryService;

@interface GTMTLTelemetryServiceXPCDispatcher : GTXPCDispatcher <GTMTLTelemetryServiceXPCDispatcher> {
    id<GTMTLTelemetryService> _implInstance;
}

- (void).cxx_destruct;
- (void)broadcastDisconnect:(id)a0 replyConnection:(id)a1;
- (void)deregisterObserver_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1 notifyConnection:(id)a2;
- (void)query_:(id)a0 replyConnection:(id)a1;
- (void)registerObserver_:(id)a0 replyConnection:(id)a1;
- (void)update_:(id)a0 replyConnection:(id)a1;

@end
