@interface CSAVCallConnectedMonitor : CSEventMonitor {
    BOOL _hasConnectedAVCall;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_handleCallActiveDidChangeNotification:(id)a0;
- (void)_startObservingAVCallActiveChange;
- (BOOL)hasConnectedAVCall;

@end
