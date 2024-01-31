@interface ATXLockScreenNotificationRanker : NSObject

+ (id)rankNewNotificationIntoNotificationArrays:(id)a0 newNotification:(id)a1 notificationArrayIndex:(unsigned long long)a2 error:(id *)a3;
+ (id)rankNewNotificationIntoNotificationArrays:(id)a0 newNotificationArray:(id)a1 newNotification:(id)a2 error:(id *)a3;
+ (id)rankNotificationArrays:(id)a0 error:(id *)a1;

@end
