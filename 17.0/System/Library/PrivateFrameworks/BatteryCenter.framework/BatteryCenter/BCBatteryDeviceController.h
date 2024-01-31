@class NSArray, NSString;

@interface BCBatteryDeviceController : NSObject <BCBatteryDeviceObservable>

@property (readonly, copy, nonatomic) NSArray *connectedDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedPowerSourceController;

- (id)init;
- (void)addBatteryDeviceObserver:(id)a0 queue:(id)a1;
- (void)removeBatteryDeviceObserver:(id)a0;

@end
