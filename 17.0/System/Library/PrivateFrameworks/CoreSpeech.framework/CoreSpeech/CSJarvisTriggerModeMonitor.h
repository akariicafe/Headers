@interface CSJarvisTriggerModeMonitor : CSEventMonitor {
    long long _triggerMode;
}

+ (id)sharedInstance;
+ (id)triggerModeStringDescription:(long long)a0;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)setTriggerMode:(long long)a0;
- (long long)_fetchTriggerMode;
- (void)_notifyJarvisTriggerModeDidChanged;
- (void)_notifyObserver:(id)a0 withJarvisTriggerMode:(long long)a1;
- (long long)getTriggerMode;

@end
