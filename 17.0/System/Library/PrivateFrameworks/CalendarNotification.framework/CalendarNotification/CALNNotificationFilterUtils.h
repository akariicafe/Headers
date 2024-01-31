@interface CALNNotificationFilterUtils : NSObject

+ (id)filterIdentifierForNotificationContent:(id)a0;
+ (id)filterIdentifierForNotificationRecord:(id)a0;
+ (void)setFilterIdentifier:(id)a0 onNotificationContent:(id)a1;
+ (void)setFilterIdentifierForEKCalendarNotification:(id)a0 onNotificationContent:(id)a1;

@end
