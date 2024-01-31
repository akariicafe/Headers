@interface SessionCore.InputServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ activityAuthorizer;
    void /* unknown type, empty encoding */ backoffPolicy;
    void /* unknown type, empty encoding */ pushServer;
    void /* unknown type, empty encoding */ clients;
}

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
