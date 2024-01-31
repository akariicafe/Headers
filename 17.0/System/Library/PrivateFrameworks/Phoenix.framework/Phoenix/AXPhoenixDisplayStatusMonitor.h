@class NSObject;
@protocol OS_dispatch_queue;

@interface AXPhoenixDisplayStatusMonitor : AXPhoenixEventMonitor

@property (nonatomic, getter=isDisplayOn) BOOL displayOn;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_displayStateChanged:(double)a0;
- (void)_notifyObserver:(id)a0 isDisplayOn:(BOOL)a1 timestamp:(double)a2;
- (BOOL)_queryIsDisplayOn;
- (void)_registerForSpringboardNotificationsWithQueue:(id)a0;
- (void)_unregisterForSpringboardNotifications;

@end
