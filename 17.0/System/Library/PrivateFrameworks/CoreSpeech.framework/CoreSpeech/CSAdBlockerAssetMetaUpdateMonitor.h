@interface CSAdBlockerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (const char *)_asssetMetaUpdatedKey;
- (void)_notifyObserver:(id)a0;
- (void)_didReceiveNewAdBlockerAssetMetaData;

@end
