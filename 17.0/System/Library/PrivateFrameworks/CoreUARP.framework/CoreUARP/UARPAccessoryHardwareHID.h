@interface UARPAccessoryHardwareHID : UARPAccessoryHardwareID

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (id)init;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
