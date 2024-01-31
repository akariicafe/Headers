@interface SeymourServices.AccountDeviceObserver : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ accountFetcher;
    void /* unknown type, empty encoding */ accountDeviceFetcher;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ _fakeSupportedWatchAvailable;
    void /* unknown type, empty encoding */ accountHasSupportedWatch;
    void /* unknown type, empty encoding */ _fakeSupportedPhoneAvailable;
    void /* unknown type, empty encoding */ accountHasSupportedPhone;
    void /* unknown type, empty encoding */ accountHasSupportedDevice;
    void /* unknown type, empty encoding */ accountOwnedDevices;
}

- (void)deviceListChanged;

@end
