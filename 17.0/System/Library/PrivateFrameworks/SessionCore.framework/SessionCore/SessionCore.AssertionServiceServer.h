@interface SessionCore.AssertionServiceServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _lock_clients;
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ assertionManager;
}

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
