@interface ChronoCore.ChronoServicesServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ deviceService;
    void /* unknown type, empty encoding */ extensionService;
    void /* unknown type, empty encoding */ hostService;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ powerlogSuggestionService;
    void /* unknown type, empty encoding */ keepAliveAssertionProvider;
    void /* unknown type, empty encoding */ duetService;
    void /* unknown type, empty encoding */ iconStore;
    void /* unknown type, empty encoding */ connectionListener;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _clientsSetLock_clients;
    void /* unknown type, empty encoding */ _clientsSetLock;
    void /* unknown type, empty encoding */ initialExtensionDiscoveryCompleteSubscription;
}

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
