@interface PKUserNotificationAgent : NSObject

+ (struct __CFUserNotification { } *)presentNotificationWithParameters:(id)a0 flags:(unsigned long long)a1 responseHandler:(id /* block */)a2;
+ (struct __CFUserNotification { } *)presentNotificationWithParameters:(id)a0 responseHandler:(id /* block */)a1;

@end
