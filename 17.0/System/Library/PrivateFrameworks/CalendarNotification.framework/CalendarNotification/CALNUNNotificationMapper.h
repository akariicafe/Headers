@class CALNUNNotificationRequestMapper;

@interface CALNUNNotificationMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper;

- (id)_calnNotificationFromUNNotification:(id)a0;
- (id)calnNotificationFromUNNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationRequestMapper:(id)a0;
- (id)calnNotificationsFromUNNotifications:(id)a0;

@end
