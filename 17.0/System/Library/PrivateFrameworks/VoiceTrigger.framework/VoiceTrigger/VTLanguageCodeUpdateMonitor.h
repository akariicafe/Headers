@interface VTLanguageCodeUpdateMonitor : VTEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveLanguageCodeUpdate;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;

@end
