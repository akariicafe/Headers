@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriEnabled;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (BOOL)fetchIsEnabled;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (BOOL)isEnabled;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;

@end
