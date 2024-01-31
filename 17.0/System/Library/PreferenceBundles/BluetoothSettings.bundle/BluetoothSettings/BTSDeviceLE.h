@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {
    CBPeripheral *_peripheral;
    CBCentralManager *_centralManager;
    BOOL healthDevice;
    BOOL ctkdDevice;
    BOOL managedByWallet;
    BOOL supportsBackgroundNI;
}

+ (id)deviceWithPeripheral:(id)a0 manager:(id)a1;

- (id)productName;
- (void)disconnect;
- (BOOL)connected;
- (BOOL)setUserName:(id)a0;
- (BOOL)connect;
- (id)identifier;
- (id)description;
- (BOOL)paired;
- (BOOL)ancsAuthorized;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isHIDDevice;
- (void)unpair;
- (id)classicDevice;
- (BOOL)cloudPaired;
- (BOOL)doesSupportBackgroundNI;
- (id)initWithPeripheral:(id)a0 manager:(id)a1;
- (BOOL)isApplePencil:(int *)a0;
- (BOOL)isCTKDDevice;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)isHealthDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isManagedByWallet;
- (BOOL)isMyDevice;
- (BOOL)isTemporaryPairedDevice;
- (void)setANCSAuthorization:(BOOL)a0;
- (void)setCtkdDevice:(BOOL)a0;
- (void)setHealthDevice:(BOOL)a0;
- (void)setManagedByWallet:(BOOL)a0;
- (void)setSupportsBackgroundNI:(BOOL)a0;
- (BOOL)supportsANCS;
- (BOOL)supportsCTKD;

@end
