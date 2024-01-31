@interface BatteryCenterUI.BatteryCenterObserver : NSObject <BCBatteryDeviceObserving> {
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ batteryController;
    void /* unknown type, empty encoding */ subject;
}

- (id)init;
- (void)connectedDevicesDidChange:(id)a0;
- (void).cxx_destruct;

@end
