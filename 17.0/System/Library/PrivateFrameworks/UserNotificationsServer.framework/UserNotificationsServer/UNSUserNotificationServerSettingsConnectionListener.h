@class NSXPCListener, NSString, NSMutableArray, UNSNotificationSettingsService;

@interface UNSUserNotificationServerSettingsConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationSettingsServerProtocol, UNSNotificationSettingsServiceObserver> {
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    UNSNotificationSettingsService *_settingsService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (id)_currentConnection;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)resetScheduledDeliverySetting;
- (void)getAllNotificationSourcesWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)getNotificationSources:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)settingsService:(id)a0 didUpdateNotificationSourcesForBundleIdentifiers:(id)a1;
- (void)_handleClientConnectionInvalidated:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)getNotificationSource:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithNotificationSettingsService:(id)a0;
- (void)resume;
- (void)settingsService:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (void).cxx_destruct;
- (void)getNotificationSystemSettingsWithCompletionHandler:(id /* block */)a0;
- (void)setNotificationSystemSettings:(id)a0;
- (void)_handleClientConnectionInterrupted:(id)a0;

@end
