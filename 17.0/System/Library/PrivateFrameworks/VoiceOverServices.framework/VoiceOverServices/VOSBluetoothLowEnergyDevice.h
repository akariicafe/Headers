@class NSString, CBPeripheral, CBCentralManager;

@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice>

@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) CBCentralManager *centralManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (id)address;
- (BOOL)connected;
- (void)connect;
- (long long)compare:(id)a0;
- (id)identifier;
- (BOOL)paired;
- (void).cxx_destruct;
- (id)name;
- (BOOL)connecting;
- (BOOL)isEqual:(id)a0;
- (void)unpair;
- (id)initWithPeripheral:(id)a0 manager:(id)a1;

@end
