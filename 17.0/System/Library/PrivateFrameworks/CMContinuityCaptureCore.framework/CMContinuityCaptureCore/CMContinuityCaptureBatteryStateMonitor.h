@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureBatteryStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _serviceNotification;
    BOOL _invalidated;
}

@property (nonatomic) BOOL invalidated;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) long long batteryState;
@property (readonly, retain) NSNumber *batteryLevel;

+ (id)sharedInstance;
+ (void)invalidate;
+ (long long)resolveBatteryState:(BOOL)a0 isBatteryChargingThermallyLimited:(BOOL)a1 batteryCapacity:(id)a2;

- (id)initWithQueue:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)handleBatteryInfoChanged;
- (BOOL)setupNotification;

@end
