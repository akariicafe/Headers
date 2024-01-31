@class CBCentralManager, NSArray, NSMutableDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HUAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    BOOL _centralIsOn;
    BOOL _bluetoothAvailable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
    NSArray *_peripherals;
}

@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothCentralQueue;
@property (retain) NSArray *peripherals;
@property (retain) NSMutableDictionary *uuidToAddress;
@property (retain) NSMutableArray *registeredCharacteristics;
@property (retain) NSMutableDictionary *loggingUpdates;
@property (retain) NSMutableDictionary *updateUpdates;
@property (retain) NSMutableDictionary *discoveryUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logMessage:(id)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (id)init;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (id)sharedQueue;
- (id)availableAddresses;
- (void)discoverAccessories;
- (void)bluetoothAvailabilityDidChange:(id)a0;
- (void)readValueForCharacteristicUUID:(id)a0;
- (id)availableAddressesWithCharacteristicSupport:(id)a0;
- (id)characteristicWithUUID:(id)a0 forPeripheral:(id)a1;
- (void)registerDiscoveryBlock:(id /* block */)a0 withListener:(id)a1;
- (void)registerLoggingBlock:(id /* block */)a0 withListener:(id)a1;
- (void)registerUpdateBlock:(id /* block */)a0 forCharacteristicUUIDs:(id)a1 withListener:(id)a2;
- (void)removeDiscoveredAccessories;
- (void)setNotify:(BOOL)a0 forCharacteristicUUIDs:(id)a1;
- (void)updateBluetoothAvailability;
- (void)updateNotify:(BOOL)a0 forPeripheral:(id)a1 withCharacteristicUUIDs:(id)a2;
- (void)writeValue:(id)a0 forCharacteristicUUID:(id)a1 andAddress:(id)a2;

@end
