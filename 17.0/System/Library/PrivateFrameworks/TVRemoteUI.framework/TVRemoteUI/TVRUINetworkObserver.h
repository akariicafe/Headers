@class WFClient, CBController, NSObject, WFWiFiStateMonitor;
@protocol OS_dispatch_queue;

@interface TVRUINetworkObserver : NSObject

@property (retain, nonatomic) WFWiFiStateMonitor *wifiStateMonitor;
@property (retain, nonatomic) WFClient *wifiClient;
@property (retain, nonatomic) CBController *cbController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ reachabilityDidUpdate;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (copy, nonatomic) id /* block */ bluetoothAvailabilityDidUpdate;
@property (readonly, nonatomic) BOOL isBluetoothAvailable;

- (void)startObserving;
- (void)stopObserving;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateBluetoothAvailability:(BOOL)a0;
- (void)_updateNetworkReachability:(BOOL)a0;
- (void)_wifiStateUpdatedWithOldState:(long long)a0 andNewState:(long long)a1;

@end
