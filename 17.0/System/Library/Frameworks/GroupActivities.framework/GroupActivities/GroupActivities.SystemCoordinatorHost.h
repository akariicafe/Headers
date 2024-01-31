@interface GroupActivities.SystemCoordinatorHost : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ connection;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
