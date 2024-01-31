@interface UARPAccessoryHardwareUSBPD : UARPAccessoryHardwareID

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;
@property (readonly) long long location;
@property (readonly) BOOL isMagSafeCable;
@property (readonly) BOOL isPowerAdapter;
@property (readonly) BOOL isUSBCLightning;
@property (readonly) BOOL supportsAccMode7;

- (id)init;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1 usbpdClass:(long long)a2 locationType:(long long)a3 supportsAccMode7:(BOOL)a4;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1 usbpdClass:(long long)a2 locationType:(long long)a3;

@end
