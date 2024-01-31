@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)splitterState:(id /* block */)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)updateSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;
- (unsigned long long)splitterState;

@end
