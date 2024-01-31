@interface VTAudioRouteChangeMonitor : VTEventMonitor {
    unsigned long long _hearstConnection;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0;
- (BOOL)_isActiveRoute:(struct __CFDictionary { } *)a0;
- (id)_CMSessionDispatchQueue;
- (BOOL)_hasDoAPSupport:(struct __CFDictionary { } *)a0;
- (BOOL)_hasInEarDetectSupport:(struct __CFDictionary { } *)a0;
- (unsigned long long)_updateHearstConnectionStatus;
- (unsigned long long)hearstConnectionStatus;
- (void)updateExternalRouteConnectionStatus;

@end
