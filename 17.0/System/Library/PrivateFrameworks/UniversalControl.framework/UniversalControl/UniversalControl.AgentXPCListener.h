@interface UniversalControl.AgentXPCListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ notificationName;
    void /* unknown type, empty encoding */ notifyToken;
    void /* unknown type, empty encoding */ seed;
    void /* unknown type, empty encoding */ connections;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
