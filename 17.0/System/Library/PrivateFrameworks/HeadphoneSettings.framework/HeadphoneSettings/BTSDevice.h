@interface BTSDevice : NSObject

@property (nonatomic, getter=isHealthDevice) BOOL healthDevice;
@property (readonly, nonatomic, getter=isMyDevice) BOOL myDevice;
@property (nonatomic, getter=isCTKDDevice) BOOL ctkdDevice;
@property (nonatomic, getter=isManagedByWallet) BOOL managedByWallet;
@property (nonatomic, getter=doesSupportBackgroundNI) BOOL supportsBackgroundNI;

- (id)productName;
- (void)disconnect;
- (BOOL)isiPad;
- (BOOL)connected;
- (unsigned long long)hash;
- (BOOL)connect;
- (long long)compare:(id)a0;
- (id)identifier;
- (BOOL)paired;
- (BOOL)ancsAuthorized;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (BOOL)isHIDDevice;
- (void)unpair;
- (id)classicDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isTemporaryPairedDevice;
- (void)setANCSAuthorization:(BOOL)a0;
- (BOOL)supportsANCS;

@end
