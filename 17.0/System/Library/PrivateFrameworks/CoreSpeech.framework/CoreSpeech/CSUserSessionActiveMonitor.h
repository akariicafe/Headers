@interface CSUserSessionActiveMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isUserActive;

@end
