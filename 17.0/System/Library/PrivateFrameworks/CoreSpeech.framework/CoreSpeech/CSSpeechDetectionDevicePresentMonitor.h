@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (BOOL)isPresent;
- (void)_startObservingSystemControllerLifecycle;
- (void)_startObservingSpeechDetectionVADPresence;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;

@end
