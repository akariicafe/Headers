@interface SBUserNotificationCenter : NSObject

+ (void)_userNotificationDone:(id)a0;
+ (void)dispatchUserNotification:(id)a0 flags:(int)a1 replyPort:(unsigned int)a2 auditToken:(id)a3;
+ (void)startUserNotificationCenter;

@end
