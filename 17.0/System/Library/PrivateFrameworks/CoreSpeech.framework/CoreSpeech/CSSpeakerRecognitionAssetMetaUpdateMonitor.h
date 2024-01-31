@interface CSSpeakerRecognitionAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveSpeakerRecognitionAssetMetaData;
- (const char *)_asssetMetaUpdatedKey;
- (void)_notifyObserver:(id)a0;

@end
