@interface EncoreXPCService.SnippetService : EncoreXPCService.AsyncService <NSXPCListenerDelegate, EncoreXPCService.DistributedEventHandler> {
    void /* unknown type, empty encoding */ serviceName;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ encore;
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)echoWithEvent:(id)a0;
- (void)handleEventWithEvent:(id)a0;
- (void)publishWithEvent:(id)a0;
- (void)subscribeWithCompletion:(id /* block */)a0;

@end
