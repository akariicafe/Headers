@interface CSSpeechEndpointAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveNewSpeechEndpointAssetMetaData;
- (void)_notifyObserver:(id)a0;

@end
