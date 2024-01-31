@class SPBeaconManager, NSString, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSDate;

@interface PLBluetoothAgent : PLAgent {
    BOOL keepSessionAlive;
    struct BTSessionImpl { } *session;
    struct BTLocalDeviceImpl { } *localBluetoothDevice;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (readonly) NSString *btHardwareChipset;
@property (retain) PLXPCListenerOperatorComposition *leConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *btHCIListener;
@property (retain) PLXPCListenerOperatorComposition *btA2DPListener;
@property (retain) PLXPCListenerOperatorComposition *btHFPListener;
@property (retain) PLXPCListenerOperatorComposition *btHCIVSEListener;
@property (retain) PLXPCListenerOperatorComposition *wirelessProxListener;
@property (retain) PLXPCListenerOperatorComposition *CBDiscoveryListener;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) NSDate *lastPowerEntryDate;
@property unsigned char logCount;
@property (retain) NSMutableDictionary *ENScanCache;
@property (retain) PLXPCListenerOperatorComposition *ENListener;
@property (retain) SPBeaconManager *beaconManager;
@property (retain) PLXPCListenerOperatorComposition *magnetListener;
@property (retain) PLXPCListenerOperatorComposition *magnetOperationListener;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventBackwardDefinitionA2DPPower;
+ (BOOL)shouldLogMarconi;
+ (BOOL)shouldLogEnhancedStats;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionAHFPPower;
+ (id)entryEventPointDefinitionMagnet;
+ (id)entryEventBackwardDefinitionHCITrace;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardWakeupVSE;
+ (id)getScanCoreKeys;
+ (id)entryEventBackwardDefinitionWirelessProxScanDStats;
+ (id)entryEventBackwardDefinitionPowerProfileStats;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventBackwardDefinitionCBDiscoveryStats;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;

- (void)logEventBackwardMaxDutyCycle:(id)a0;
- (id)init;
- (void)logEventIntervalConnectedDevices;
- (void)dealloc;
- (void)logEventIntervalWakeVSE:(id)a0;
- (BOOL)isConnected;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardDeviceState;
- (void)attachSession;
- (BOOL)isConnectable;
- (void)modelBluetoothPower:(id)a0;
- (void)logEventBackwardA2DP:(id)a0;
- (BOOL)isDiscoverable;
- (void)logEventForwardPairedDevices;
- (void)logEventPointMagnetOperation:(id)a0;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)logEventBackwardCBDiscovery:(id)a0;
- (void)sessionAttached:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (struct BTLocalDeviceImpl { } *)localBluetoothDevice;
- (BOOL)modulePowered;
- (void)modelBluetoothOffPower;
- (void).cxx_destruct;
- (void)logEventPointMagnet:(id)a0;
- (BOOL)bluetoothPresent;
- (void)sessionTerminated:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (void)logEventIntervalHCIRawData:(id)a0;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (id)btHardwareChipsetQuery;
- (void)bluetoothDeviceEvent:(int)a0 onDevice:(struct BTLocalDeviceImpl { } *)a1 withResult:(int)a2;
- (void)logEventBackwardHFP:(id)a0;
- (void)logwithBTOnCheck;
- (void)bluetoothSessionEvent:(int)a0 onSession:(struct BTSessionImpl { } *)a1 withResult:(int)a2;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)logEventBackwardPowerProfileStats;

@end
