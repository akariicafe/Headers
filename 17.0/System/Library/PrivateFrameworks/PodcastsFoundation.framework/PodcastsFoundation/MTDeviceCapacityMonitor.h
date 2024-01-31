@class NSString;

@interface MTDeviceCapacityMonitor : NSObject {
    void /* unknown type, empty encoding */ diskAccessQueue;
    void /* unknown type, empty encoding */ _capacityChangeObservers;
    void /* unknown type, empty encoding */ capacityThreshold;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ vfsSource;
    void /* unknown type, empty encoding */ ___capacityLevel;
    void /* unknown type, empty encoding */ activeObserver;
    void /* unknown type, empty encoding */ _activeNotificationName;
}

@property (class, nonatomic, readonly) MTDeviceCapacityMonitor *shared;

@property (nonatomic, copy) NSString *activeNotificationName;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)addCapacityChangeObserverWithOptions:(long long)a0 callback:(id /* block */)a1;
- (void)capacityLevel:(id /* block */)a0;
- (void)removeCapacityChangeObserverWith:(long long)a0;

@end
