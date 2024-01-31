@interface UserNotificationsCore.NotificationServiceListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_listener;
    void /* unknown type, empty encoding */ queue_connections;
    void /* unknown type, empty encoding */ queue_observingConnectionsByBundleIdentifier;
    void /* unknown type, empty encoding */ queue_bundleIdentifiersByObservingConnection;
    void /* unknown type, empty encoding */ queue_observerTransaction;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
