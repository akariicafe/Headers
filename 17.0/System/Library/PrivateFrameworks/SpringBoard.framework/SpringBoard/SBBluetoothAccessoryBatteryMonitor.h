@class NSString, NSMutableSet, BCBatteryDeviceController;

@interface SBBluetoothAccessoryBatteryMonitor : NSObject <BCBatteryDeviceObserving> {
    NSMutableSet *_accessoryNamesInLowPower;
    BCBatteryDeviceController *_batteryDeviceController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)connectedDevicesDidChange:(id)a0;
- (void)_popLowPowerAlertForAccessoryIfNecessary:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilder;

@end
