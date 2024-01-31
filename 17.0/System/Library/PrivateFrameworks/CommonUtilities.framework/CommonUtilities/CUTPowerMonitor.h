@interface CUTPowerMonitor : NSObject {
    id _internal;
}

@property (readonly, nonatomic) BOOL isExternalPowerConnected;
@property (readonly, nonatomic) double batteryPercentRemaining;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)a0;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)_initIOService;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)a0 notificationID:(void *)a1;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;

@end
