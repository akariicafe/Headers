@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int _notifyToken;
    int _gibraltarMacNotifyToken;
    int _darwinNotifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (const char *)_notificationKey;
- (void)_didInstalledNewVoiceTriggerAsset;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0;

@end
