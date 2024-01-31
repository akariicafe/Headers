@interface _TtC10ChronoCoreP33_731F44D3DADC24C2E2FB65578CCF91B114RendererClient : NSObject <WRWidgetRendererServiceXPCServer> {
    void /* unknown type, empty encoding */ _server;
    void /* unknown type, empty encoding */ _subscriptions;
    void /* unknown type, empty encoding */ _services;
    void /* unknown type, empty encoding */ _processHandle;
    void /* unknown type, empty encoding */ _logIdentifier;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_sessions;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _queue_connection;
    void /* unknown type, empty encoding */ _queue_runningAssertion;
    void /* unknown type, empty encoding */ _queue_observeProcessStateAssertion;
    void /* unknown type, empty encoding */ _queue_runningAssertionExpirationTimer;
}

- (id)init;
- (void)unsubscribe:(id)a0;
- (void).cxx_destruct;
- (void)subscribe:(id)a0 completion:(id /* block */)a1;
- (void)handleInteraction:(id)a0 action:(id)a1 handler:(id /* block */)a2;
- (void)reloadWidget:(id)a0 reason:(id)a1;
- (void)reloadWidgetIfFailed:(id)a0 reason:(id)a1;
- (void)setEnvironmentModifiers:(id)a0 forSession:(id)a1;
- (void)setVisiblySettled:(id)a0 forSession:(id)a1;
- (void)setWidgetTaskPriority:(id)a0 forSession:(id)a1;

@end
