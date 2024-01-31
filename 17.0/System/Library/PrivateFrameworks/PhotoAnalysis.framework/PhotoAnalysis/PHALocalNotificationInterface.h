@interface PHALocalNotificationInterface : NSObject

@property BOOL isNotificationRegistered;

+ (id)localNotificationInterface;

- (id)init;
- (void)fireLocalNotificationWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
