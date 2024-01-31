@class NSXPCListener, NSString, NSMutableDictionary, NSMapTable, NSObject, UNCRemoteNotificationServer;
@protocol OS_dispatch_queue;

@interface UNSUserNotificationServerRemoteNotificationConnectionListener : NSObject <NSXPCListenerDelegate, PKUserNotificationServerRemoteNotificationXPCServer> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSMapTable *_bundleIdentifiersByConnection;
    UNCRemoteNotificationServer *_remoteNotificationService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentConnection;
- (void)getAllowsRemoteNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_removeConnectionForAllBundleIdentifiers:(id)a0;
- (void)_invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)a0;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)a0;
- (void)resume;
- (void)_queue_didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_observerConnectionsForBundleIdentifier:(id)a0;
- (void)_requestTokenForRemoteNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_queue_addConnection:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)_allowsRemoteNotificationsForBundleIdentifier:(id)a0;
- (void)_queue_removeConnection:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithRemoteNotificationService:(id)a0;
- (void)didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;

@end
