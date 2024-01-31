@class BBSettingsGateway, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface STNotificationSettingsGateway : NSObject

@property (readonly) BBSettingsGateway *notificationSettingsGateway;
@property (readonly) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue;
@property (readonly, copy) NSDictionary *sectionInfoByBundleIdentifier;

- (id)init;
- (id)notificationSettingsForBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifiers:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasNotificationSettings:(id)a0;

@end
