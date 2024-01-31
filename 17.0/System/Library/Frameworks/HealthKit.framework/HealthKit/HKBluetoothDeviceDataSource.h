@protocol HKCBDiscovery;

@interface HKBluetoothDeviceDataSource : HKObserverBridge {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<HKCBDiscovery> _lock_discovery;
    BOOL _lock_isDiscoveryActive;
    Class _DiscoveryType;
}

@property (readonly, nonatomic) id<HKCBDiscovery> discovery;

- (id)init;
- (void)dealloc;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (void)unregisterObserverForDevicePairingChanges:(id)a0;
- (void).cxx_destruct;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (id)initWithDiscoveryType:(Class)a0;
- (id)pairedDevicesWithError:(id *)a0;
- (void)registerObserverForDevicePairingChanges:(id)a0 updateHandler:(id /* block */)a1;

@end
