@class NSString, CBCentralManager, NSObject;
@protocol OS_dispatch_queue;

@interface FIUIBluetoothSensorLookup : NSObject <CBCentralManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long pendingTypes;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (BOOL)hasHadPairedCyclingPowerSensors;
+ (BOOL)hasHadPairedCyclingSpeedSensors;
+ (id)didUpdateBTSensorSeenStatus;
+ (BOOL)hasHadPairedCyclingCadenceSensors;

- (void)centralManagerDidUpdateState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasHadPairedCyclingPowerSensors;
- (BOOL)hasHadPairedCyclingSpeedSensors;
- (void)_queueCheckForPeripherals;
- (void)_queueSpinUpBTCheck:(long long)a0;
- (void)_spinUpCheck;
- (BOOL)hasHadPairedCyclingCadenceSensors;
- (BOOL)testAndSetPeripheral:(id)a0 forTag:(id)a1 defaultsKey:(id)a2;

@end
