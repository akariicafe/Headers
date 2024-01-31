@class NSNumber, NSHashTable, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface HFNetworkMonitor : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (nonatomic) int currentNetworkPathStatus;
@property (retain, nonatomic) NSNumber *currentNetworkPathIsExpensive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) BOOL isMonitoringNetwork;
@property (nonatomic) BOOL hasMonitoredNetworkBefore;
@property (readonly, nonatomic) BOOL isNetworkAvailable;
@property (readonly, nonatomic) BOOL isNetworkExpensive;

+ (id)sharedInstance;

- (unsigned long long)_removeObserver:(id)a0;
- (unsigned long long)_addObserver:(id)a0;
- (void)_stopMonitoring;
- (id)_observers;
- (void)_startMonitoring;
- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_notifyObserver:(id)a0 networkIsAvailable:(BOOL)a1;
- (void)_notifyObserver:(id)a0 networkIsExpensive:(BOOL)a1;

@end
