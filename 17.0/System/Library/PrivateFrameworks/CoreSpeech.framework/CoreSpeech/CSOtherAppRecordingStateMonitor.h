@interface CSOtherAppRecordingStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)isOtherNonEligibleAppRecording;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingOtherAppRecordingState;
- (void)_startObservingSystemControllerLifecycle;
- (void)handleOtherAppRecordingStateChange:(id)a0;

@end
