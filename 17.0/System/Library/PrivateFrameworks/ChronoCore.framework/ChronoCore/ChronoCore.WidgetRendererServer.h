@interface ChronoCore.WidgetRendererServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ _services;
    void /* unknown type, empty encoding */ _listener;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _subscriptions;
    void /* unknown type, empty encoding */ _clientsSetLock;
    void /* unknown type, empty encoding */ _clientsSetLock_clients;
}

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
