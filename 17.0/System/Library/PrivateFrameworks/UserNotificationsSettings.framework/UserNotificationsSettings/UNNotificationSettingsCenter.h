@class NSString;
@protocol UNNotificationSettingsCenterDelegate;

@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver>

@property (weak, nonatomic) id<UNNotificationSettingsCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentNotificationSettingsCenter;

- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)resetScheduledDeliverySetting;
- (id)init;
- (id)notificationSystemSettings;
- (void)dealloc;
- (id)_init;
- (id)allNotificationSources;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSourcesWithIdentifiers:(id)a1;
- (id)notificationSourceWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void)setNotificationSystemSettings:(id)a0;

@end
