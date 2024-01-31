@class NSObject;
@protocol OS_dispatch_queue;

@interface HMFPowerManager : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) struct IONotificationPort { } *notificationPort;
@property (readonly, nonatomic) unsigned int interestNotification;
@property (readonly) BOOL hasBattery;
@property (readonly) long long batteryState;
@property (readonly) float batteryLevel;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)updateBatteryState:(unsigned int)a0;
- (void)_deregisterForPowerSourceNotifications:(BOOL)a0;
- (void)_registerForPowerSourceNotifications;

@end
