@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification

@property (readonly, nonatomic) PLChangeNotificationCenter *changeNotificationCenter;

+ (id)notificationWithName:(id)a0 object:(id)a1 userInfo:(id)a2;

- (void)_calculateDiffs;

@end
