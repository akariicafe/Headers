@interface DeviceDiscoveryUI._DDAskToAirDropManager : NSObject <NFHardwareEventListener> {
    void /* unknown type, empty encoding */ _isSearching;
    void /* unknown type, empty encoding */ _isNFCEnabled;
    void /* unknown type, empty encoding */ _nearbyDeviceCount;
    void /* unknown type, empty encoding */ _sharingName;
    void /* unknown type, empty encoding */ airDropController;
}

- (void)didChangeRadioState:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
