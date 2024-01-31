@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)hearstRouted;
- (void)_stopMonitoring;
- (long long)hearstOwnership;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)siriInputSourceOutOfBand;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)carPlayConnected;
- (void)getHearstRouted:(id /* block */)a0;
- (BOOL)jarvisConnected;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (BOOL)hearstConnected;

@end
