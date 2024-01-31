@class NSMutableArray;
@protocol NAScheduler;

@interface MTAgentNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *listeners;
@property (retain, nonatomic) id<NAScheduler> serializer;

+ (double)defaultAssertionTimeOutForNotification:(id)a0 type:(long long)a1;
+ (double)_schedulingAssertionTimeout;

- (id)init;
- (void)dealloc;
- (void)_handleNotificationWithName:(id)a0 type:(long long)a1;
- (void)_registerForDistributedNotifications;
- (void)_registerForDarwinNotifications;
- (void).cxx_destruct;
- (void)_registerForLiveDarwinNotification:(id)a0;
- (void)_registerForXPCStream:(id)a0 notificationType:(long long)a1;
- (void)beginListening;
- (void)registerListener:(id)a0;
- (void)_registerForAlarmNotifications;

@end
