@class HMHome, NSMutableDictionary, NSString;

@interface TVRCHMHomeObserver : NSObject <HMAccessoryDelegate, HMHomeDelegate, HMAccessoryDelegatePrivate>

@property (retain, nonatomic) NSMutableDictionary *serviceToAccessoryIDMapping;
@property (retain, nonatomic) HMHome *currentHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void).cxx_destruct;
- (void)accessoryDidUpdateReachability:(id)a0;
- (void)accessory:(id)a0 didUpdateNameForService:(id)a1;
- (void)accessoryDidUpdateReachableTransports:(id)a0;
- (void)accessoryDidUpdateServices:(id)a0;
- (void)_readCharacteristic:(id)a0 completion:(id /* block */)a1;
- (void)_checkAccessoryReachabilityAndFetchTVServices:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_checkErrorForLocallySuspendedAccessory:(id)a0;
- (void)_updateAccessoriesForHome:(id)a0;
- (void)_updateServicesForAccessory:(id)a0;

@end
