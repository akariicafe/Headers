@interface SessionCore.OutputServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ _lock_clients;
    void /* unknown type, empty encoding */ _lock_activities;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ processManager;
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
