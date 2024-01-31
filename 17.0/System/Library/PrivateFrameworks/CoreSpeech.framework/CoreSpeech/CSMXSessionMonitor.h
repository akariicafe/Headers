@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMXSessionMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_handleSomeClientIsActiveDidChangeNotification:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (void).cxx_destruct;
- (void)_querySomeClientIsActive;
- (void)_startObservingAVSystemControllerLifecycle;
- (void)_startObservingSomeClientIsActive;

@end
