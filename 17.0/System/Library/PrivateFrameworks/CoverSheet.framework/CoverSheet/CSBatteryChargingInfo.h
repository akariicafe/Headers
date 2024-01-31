@class BCBatteryDevice;

@interface CSBatteryChargingInfo : NSObject

@property (nonatomic, getter=isChargingWithInternalWirelessAccessory) BOOL chargingWithInternalWirelessAccessory;
@property (retain, nonatomic) BCBatteryDevice *internalBatteryDevice;
@property (retain, nonatomic) BCBatteryDevice *externalBatteryDevice;

- (void).cxx_destruct;

@end
