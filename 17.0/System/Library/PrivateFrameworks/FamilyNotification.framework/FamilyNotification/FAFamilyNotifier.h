@class NSXPCListener, NSString, NSXPCConnection, NSLock;
@protocol FAFamilyNotificationDelegate;

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *serviceName;
@property (weak) id<FAFamilyNotificationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deliverNotification:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)a0;
- (id)agentConnection;
- (void)_agentConnectionFailedToBootstrap;
- (void)_agentConnectionWasInterrupted;
- (void)_agentConnectionWasInvalidated;
- (id)_pendingNotificationsForAllClients;
- (id)_pendingNotificationsWithClientIdentifier:(id)a0;
- (void)didActivateNotification:(id)a0;
- (void)didClearNotification:(id)a0;
- (void)didDismissNotification:(id)a0;
- (id)initWithIdentifier:(id)a0 machServiceName:(id)a1;
- (id)pendingNotifications;

@end
