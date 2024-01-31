@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (BOOL)_checkVoiceTriggerEnabled;
- (BOOL)isEnabled;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)a0;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)a0;

@end
