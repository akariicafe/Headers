@interface SMCNotify : NSObject

+ (int)invalidToken;
+ (void)postNotificationName:(const char *)a0;
+ (void)cancelToken:(int)a0;
+ (int)registerNotification:(const char *)a0 queue:(id)a1 callback:(id /* block */)a2;
+ (BOOL)tokenIsValid:(int)a0;

@end
