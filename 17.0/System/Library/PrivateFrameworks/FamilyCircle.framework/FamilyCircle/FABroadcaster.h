@interface FABroadcaster : NSObject

+ (void)_broadcastNotificationName:(id)a0 userInfo:(id)a1;
+ (void)broadcastFamilyChangedNotification;
+ (void)broadcastFamilyMarqueeChangedNotification;
+ (void)broadcastRemoteUIWillDismissNotification:(id)a0;
+ (void)broadcastServicesChangedNotification;

@end
