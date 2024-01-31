@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_availabilityChanged;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (BOOL)isAvailable;

@end
