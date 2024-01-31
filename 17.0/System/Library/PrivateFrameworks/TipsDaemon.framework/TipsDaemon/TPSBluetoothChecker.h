@class CBCentralManager, NSArray, NSObject, BluetoothManager;
@protocol OS_dispatch_queue;

@interface TPSBluetoothChecker : NSObject

@property (retain, nonatomic) BluetoothManager *bluetoothManager;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *peersAccessQueue;
@property (readonly, nonatomic) NSArray *pairedPeers;
@property (readonly, nonatomic) NSArray *pairedDevices;

+ (id)sharedInstance;
+ (BOOL)bluetoothPairedForProductID:(unsigned int)a0 minimumVersion:(id)a1 withPairedDevices:(id)a2;
+ (BOOL)bluetoothPairedForProductID:(unsigned int)a0 withPairedDevices:(id)a1;
+ (id)bluetoothPairedForProductIDs:(id)a0 minimumVersion:(id)a1 withPairedDevices:(id)a2;
+ (id)bluetoothPairedForProductIDs:(id)a0 withPairedDevices:(id)a1;
+ (BOOL)bluetoothPairedWithTag:(id)a0 withPairedPeers:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)bluetoothPairedForProductID:(unsigned int)a0;
- (BOOL)bluetoothPairedForProductID:(unsigned int)a0 minimumVersion:(id)a1;
- (BOOL)bluetoothPairedWithTag:(id)a0;
- (id)devicesAccessQueue;
- (void)initializeBTManager;

@end
