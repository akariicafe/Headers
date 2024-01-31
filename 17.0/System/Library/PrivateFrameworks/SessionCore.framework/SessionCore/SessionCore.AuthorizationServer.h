@interface SessionCore.AuthorizationServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ clients;
    void /* unknown type, empty encoding */ authorizationManager;
}

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
