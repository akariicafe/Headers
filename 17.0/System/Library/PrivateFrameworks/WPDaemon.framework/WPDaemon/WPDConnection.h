@class CBCharacteristic, NSString, CBCentral, WPCharacteristic, WPDClient, NSDictionary, CBService, CBPeripheralManager, NSObject, CBPeripheral, NSMutableSet;
@protocol OS_voucher;

@interface WPDConnection : NSObject <CBPeripheralDelegate>

@property (retain) CBPeripheral *peripheral;
@property (retain) CBCentral *central;
@property (retain) NSDictionary *charsAndServicesToDiscover;
@property (retain) WPCharacteristic *characteristicToSend;
@property (retain) NSString *characteristicService;
@property unsigned long long dataLeftToSend;
@property (retain) CBCharacteristic *centralCharacteristic;
@property (retain) CBService *centralService;
@property (retain) CBPeripheralManager *sendDataManager;
@property BOOL connectablePacket;
@property (retain) NSObject<OS_voucher> *voucher;
@property (weak, nonatomic) WPDClient *client;
@property (retain, nonatomic) NSMutableSet *subscribedCharacteristics;
@property (nonatomic, getter=fetchConnectionType) long long connectionType;
@property (nonatomic) BOOL didConnectSent;
@property (nonatomic) long long recentRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (long long)connectionType;
- (void)resetData;
- (void).cxx_destruct;
- (id)sendDataToCharacteristic:(id)a0 inService:(id)a1 forPeer:(id)a2;
- (void)readyForDataTransfer;
- (void)discoverCharacteristicsAndServices:(id)a0 forPeripheral:(id)a1;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didModifyServices:(id)a1;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)updateWithPeripheral:(id)a0;
- (id)initWithPeripheral:(id)a0;
- (void)holdVoucher;
- (id)initWithCentral:(id)a0 characteristic:(id)a1;
- (id)getCentral;
- (id)getCharacteristicWithUUID:(id)a0 inService:(id)a1 forPeripheral:(id)a2;
- (id)getPeripheral;
- (id)getPeripheralUUID;
- (void)sendDataToCentral;
- (void)sendDataToPeripheral;
- (id)subscribe:(BOOL)a0 toPeer:(id)a1 withCharacteristic:(id)a2 inService:(id)a3;
- (void)updateWithCentral:(id)a0 characteristic:(id)a1;

@end
