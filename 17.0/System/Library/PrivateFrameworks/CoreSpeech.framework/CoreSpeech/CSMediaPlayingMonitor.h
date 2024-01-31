@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor {
    long long _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_notePossiblePlayPausedStateChange:(id)a0;
- (void)_notifyObserver:(id)a0 mediaIsPlayingState:(long long)a1;
- (void)initializeMediaPlayingState;
- (long long)mediaPlayingState;
- (void)mediaPlayingStateWithCompletion:(id /* block */)a0;

@end
