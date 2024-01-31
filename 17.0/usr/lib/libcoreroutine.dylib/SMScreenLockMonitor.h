@class NSObject;
@protocol OS_dispatch_queue;

@interface SMScreenLockMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) int screenLockNotificationToken;

+ (BOOL)isDeviceLocked;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 handler:(id /* block */)a1;
- (void)_registerForLockNotifications;
- (void)_unregisterForLockNotification;

@end
