@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)dealloc;
- (BOOL)isScreenLocked;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;
- (BOOL)_queryIsScreenLocked;
- (void)screenLockStateChanged;

@end
