@interface CSHostPowerSourceMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (long long)currentPowerSource;

@end
