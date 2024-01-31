@interface VTSiriAssertionMonitor : VTEventMonitor {
    unsigned char _assertionState;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)dealloc;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isEnabled;
- (void)_notifyObserver:(BOOL)a0;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;

@end
