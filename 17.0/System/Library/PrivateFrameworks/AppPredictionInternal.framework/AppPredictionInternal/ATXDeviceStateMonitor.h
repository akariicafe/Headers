@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (void)setAirplaneMode:(BOOL)a0;
+ (BOOL)onWifi;
+ (BOOL)airplaneMode;
+ (void)setSSID:(id)a0;
+ (id)SSID;
+ (void)stopMockingSystem;
+ (void)startMockingSystem;

@end
