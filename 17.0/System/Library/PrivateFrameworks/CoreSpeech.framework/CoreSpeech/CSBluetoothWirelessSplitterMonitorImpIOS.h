@interface CSBluetoothWirelessSplitterMonitorImpIOS : CSBluetoothWirelessSplitterMonitor {
    int _notifyToken;
    unsigned long long _splitterState;
}

- (void)_stopMonitoring;
- (id)init;
- (void)splitterState:(id /* block */)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)updateSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;
- (unsigned long long)splitterState;
- (void)_didReceiveWirelessSplitterStateChange;
- (void)_notifyObserver:(id)a0 splitterState:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a2;

@end
