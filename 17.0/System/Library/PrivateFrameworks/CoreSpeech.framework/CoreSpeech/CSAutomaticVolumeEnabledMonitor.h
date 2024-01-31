@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface CSAutomaticVolumeEnabledMonitor : CSEventMonitor {
    BOOL _isAutomaticVolumeEnabled;
    NSUserDefaults *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_didReceiveAutomaticVolumeToggled:(BOOL)a0;

@end
