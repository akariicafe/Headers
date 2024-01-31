@interface CSVoiceTriggerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
    int _gibraltarMacNotifyToken;
    int _darwinNotifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)notifyNewVoiceTriggerAssetMetaDataUpdated;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveNewVoiceTriggerAssetMetaData;
- (const char *)_asssetMetaUpdatedKey;
- (void)_notifyObserver:(id)a0;

@end
