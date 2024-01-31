@class NRPairedDeviceRegistry;

@interface HKNanoRegistryPairingAndSwitchingNotificationDataSource : HKObserverBridge {
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
}

@property (readonly, nonatomic) NRPairedDeviceRegistry *pairedDeviceRegistry;

- (void)registerObserverForDevicePairingChanges:(id)a0 block:(id /* block */)a1;
- (id)_notificationCenter;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (void)unregisterObserverForDevicePairingChanges:(id)a0;
- (void).cxx_destruct;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (id)_pairingChangeNotifications;

@end
