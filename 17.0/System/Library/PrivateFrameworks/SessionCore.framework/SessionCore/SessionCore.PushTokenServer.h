@interface SessionCore.PushTokenServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ pushServer;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ processManager;
    void /* unknown type, empty encoding */ activityStore;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ clients;
}

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
