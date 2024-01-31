@class NSArray, NSMutableDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CSBluetoothManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) struct BTSessionImpl { } *bluetoothSession;
@property (nonatomic) BOOL isAttachingBluetoothSession;
@property (nonatomic) struct BTLocalDeviceImpl { } *localDevice;
@property (retain, nonatomic) NSArray *pairedDeviceAddresses;
@property (retain, nonatomic) NSArray *connectedDeviceAddresses;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup;
@property (nonatomic) struct BTAccessoryManagerImpl { } *accessoryManager;
@property (retain, nonatomic) NSMutableDictionary *deviceAddressToDeviceInfoMap;

+ (id)sharedInstance;

- (id)init;
- (id)getBluetoothDeviceInfoForDeviceWithId:(id)a0;
- (void)getBTLocalDeviceWithCompletion:(id /* block */)a0;
- (void)getWirelessSplitterInfoWithCompletion:(id /* block */)a0;
- (void)_clearBluetoothDeviceInfoForDevice:(struct BTDeviceImpl { } *)a0;
- (void)_setUpLocalDevice;
- (void)accessoryManager:(struct BTAccessoryManagerImpl { } *)a0 accessoryEvent:(int)a1 device:(struct BTDeviceImpl { } *)a2 accessoryState:(int)a3;
- (void)_setUpAccessoryManager;
- (void)_loadAACPCapabilityForDevice:(struct BTDeviceImpl { } *)a0 deviceAddress:(id)a1;
- (void)_detachBluetoothSession;
- (void)device:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 serviceEventType:(int)a2 serviceSpecificEvent:(unsigned int)a3 result:(int)a4;
- (id)_getAddressWithBTDevice:(struct BTDeviceImpl { } *)a0;
- (void)_sessionTerminated:(struct BTSessionImpl { } *)a0;
- (void)localDevice:(struct BTLocalDeviceImpl { } *)a0 event:(int)a1 result:(int)a2;
- (void).cxx_destruct;
- (void)getConnectedBluetoothDeviceAddressesWithCompletion:(id /* block */)a0;
- (void)_tearDownAccessoryManager;
- (void)_attachBluetoothSession;
- (void)_fetchAllConnectedDevices;
- (void)_tearDownLocalDevice;
- (void)_sessionAttached:(struct BTSessionImpl { } *)a0 result:(int)a1;
- (id)_setBluetoothDeviceInfoForDevice:(struct BTDeviceImpl { } *)a0;
- (void)_sessionDetached:(struct BTSessionImpl { } *)a0;
- (id)_getConnectedBluetoothDeviceAddressesFromLocalDevice:(struct BTLocalDeviceImpl { } *)a0;
- (id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl { } *)a0;

@end
