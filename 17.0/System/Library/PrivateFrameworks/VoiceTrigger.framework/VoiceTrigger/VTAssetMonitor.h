@interface VTAssetMonitor : VTEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)notifyNewAssetDownloaded;
- (void)_notifyObserver:(id)a0;
- (void)_didReceiveNewAssetAvailable;

@end
