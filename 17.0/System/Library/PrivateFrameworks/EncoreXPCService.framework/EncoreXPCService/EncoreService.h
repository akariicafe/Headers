@interface EncoreService : EncoreXPCService.AsyncService <NSXPCListenerDelegate, EncoreXPCService.Encore> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ queue;
}

@property (class, nonatomic, readonly) EncoreService *service;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)broadcastWithEvent:(id)a0;
- (void)echoWithEvent:(id)a0;
- (void)handleEventWithEvent:(id)a0;
- (void)publishWithEvent:(id)a0;
- (void)registerWithClient:(id)a0 name:(id)a1 with:(id /* block */)a2;
- (void)subscribeWithCompletion:(id /* block */)a0;

@end
