@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor {
    int _notifyToken;
}

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveLanguageCodeUpdate;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (void)notifySiriLanguageCodeChanged:(id)a0;
- (BOOL)isLanguageCodeCurrent:(id)a0;

@end
