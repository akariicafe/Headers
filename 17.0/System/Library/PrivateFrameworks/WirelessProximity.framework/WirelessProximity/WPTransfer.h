@class NSUUID, NSMutableSet, NSMutableData;
@protocol WPTransferDelegate;

@interface WPTransfer : WPClient

@property (weak) id<WPTransferDelegate> delegate;
@property BOOL advertising;
@property BOOL scanning;
@property BOOL connectedToPeripheral;
@property BOOL unsubscribeComing;
@property BOOL advertiserConnected;
@property BOOL sentEOM;
@property (retain) NSUUID *currentPeripheralUUID;
@property (retain) NSMutableSet *ignoredDevices;
@property (retain) NSMutableData *notificationData;
@property (retain) NSUUID *currentlySubscribedCentral;
@property long long lockScanTimer;
@property BOOL sendingTransferComplete;

- (void)receivedData:(id)a0;
- (void)central:(id)a0 subscribed:(BOOL)a1 toCharacteristic:(id)a2 inService:(id)a3;
- (void)sentData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3 withError:(id)a4;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)sentData:(id)a0 toEndpoint:(id)a1 forPeripheral:(id)a2 withError:(id)a3;
- (void)stopScan;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)connectedDevice:(id)a0 withError:(id)a1 shouldDiscover:(BOOL)a2;
- (void)discoveredCharacteristicsAndServices:(id)a0 forPeripheral:(id)a1;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)stopAdvertising;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)dealloc;
- (void)disconnectedDevice:(id)a0 withError:(id)a1;
- (void)populateClientGATT:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2 options:(id)a3;
- (void)invalidate;
- (void)ignoreDevice;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)deviceDiscovered:(id)a0;
- (void)transferFailed:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)startAdvertising;
- (id)clientAsString;
- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2;
- (void)updatedNotificationState:(BOOL)a0 forCharacteristic:(id)a1 inService:(id)a2 withPeripheral:(id)a3;
- (void)startScan;
- (void)receivedData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3;

@end
