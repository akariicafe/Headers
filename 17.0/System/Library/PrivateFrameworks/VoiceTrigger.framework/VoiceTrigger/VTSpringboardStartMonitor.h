@interface VTSpringboardStartMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_didReceiveSpringboardStartedInQueue:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (void)_didReceiveSpringboardStarted:(BOOL)a0;
- (BOOL)_checkSpringBoardStarted;
- (BOOL)isSpringboardStarted;

@end
