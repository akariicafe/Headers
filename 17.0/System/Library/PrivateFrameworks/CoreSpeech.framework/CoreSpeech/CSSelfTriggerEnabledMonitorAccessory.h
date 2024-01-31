@interface CSSelfTriggerEnabledMonitorAccessory : CSEventMonitor

@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (BOOL)isEnabled;
- (void)setEnable:(BOOL)a0;
- (void)_didReceiveSelfTriggerChanged:(BOOL)a0;

@end
