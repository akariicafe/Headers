@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    BOOL _isSiriInputSourceOutOfBand;
}

- (BOOL)hearstRouted;
- (void)_stopMonitoring;
- (id)init;
- (void)_startObservingAudioRouteChange;
- (long long)hearstOwnership;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (BOOL)_fetchHearstRoutedState;
- (BOOL)siriInputSourceOutOfBand;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)carPlayConnected;
- (void).cxx_destruct;
- (void)_startObservingSystemControllerLifecycle;
- (void)getHearstRouted:(id /* block */)a0;
- (BOOL)jarvisConnected;
- (BOOL)_fetchSiriInputSourceOutOfBandState;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)_notifySiriInputSourceOutOfBandState:(BOOL)a0;
- (BOOL)hearstConnected;
- (void)activeAudioRouteDidChange:(id)a0;

@end
