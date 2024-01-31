@class NSArray;

@interface DABluetoothAccessInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSArray *bluetoothDevices;
@property (readonly, copy, nonatomic) NSArray *bluetoothScanCompanyIdentifiers;
@property (copy, nonatomic) NSArray *bluetoothScanServices;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;

@end
