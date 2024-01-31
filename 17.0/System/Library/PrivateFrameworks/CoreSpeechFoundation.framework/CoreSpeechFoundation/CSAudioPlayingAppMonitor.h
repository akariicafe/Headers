@interface CSAudioPlayingAppMonitor : CSEventMonitor

+ (id)sharedMonitor;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_startObservingAudioPlayingState;
- (void)handleAudioPlayingStateChange:(id)a0;
- (id)playingApps;

@end
