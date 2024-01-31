@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_firstUnlockNotified;
- (BOOL)_checkFirstUnlocked;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;
- (BOOL)isFirstUnlocked;

@end
