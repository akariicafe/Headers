@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    BOOL _isJarvisConnected;
    BOOL _isSiriInputSourceOutOfBand;
}

- (BOOL)hearstRouted;
- (void)_stopMonitoring;
- (id)init;
- (BOOL)_fetchHearstConnectionState;
- (void)_startObservingAudioRouteChange;
- (long long)hearstOwnership;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)pickableRoutesDidChange:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (BOOL)_fetchHearstRoutedState;
- (BOOL)siriInputSourceOutOfBand;
- (void)preferredExternalRouteDidChange:(id)a0;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)_fetchJarvisConnectionState;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (BOOL)carPlayConnected;
- (void).cxx_destruct;
- (void)carPlayIsConnectedDidChange:(id)a0;
- (void)carPlayAuxStreamSupportDidChange:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)getHearstRouted:(id /* block */)a0;
- (BOOL)jarvisConnected;
- (BOOL)_fetchSiriInputSourceOutOfBandState;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)_notifySiriInputSourceOutOfBandState:(BOOL)a0;
- (void)_notifyJarvisConnectionState:(BOOL)a0;
- (BOOL)hearstConnected;

@end
