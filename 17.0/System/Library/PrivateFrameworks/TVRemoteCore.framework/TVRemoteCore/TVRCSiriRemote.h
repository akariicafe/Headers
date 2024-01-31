@class CBCharacteristic, CBPeripheral;

@interface TVRCSiriRemote : NSObject

@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) CBCharacteristic *findMyCharacteristic;

- (void).cxx_destruct;

@end
