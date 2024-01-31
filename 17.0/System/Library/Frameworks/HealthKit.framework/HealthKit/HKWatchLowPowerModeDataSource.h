@class HKDarwinNotificationDataSource, NPSDomainAccessor, HKNanoRegistryPairingAndSwitchingNotificationDataSource;

@interface HKWatchLowPowerModeDataSource : HKObserverBridge

@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingDataSource;
@property (readonly, nonatomic) NPSDomainAccessor *carouselDomainAccessor;

- (id)init;
- (BOOL)isWatchLowPowerModeEnabled;
- (void)unregisterObserver:(id)a0;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)initWithDarwinNotificationDataSource:(id)a0 devicePairingAndSwitchingNotificationDataSource:(id)a1 carouselDomainAccessor:(id)a2;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0 onLowPowerModeChange:(id /* block */)a1;
- (id)initWithDarwinNotificationDataSource:(id)a0 devicePairingAndSwitchingNotificationDataSource:(id)a1;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (id)initWithCarouselDomainAccessor:(id)a0;

@end
