@interface GKBluetoothSupport : NSObject

+ (void)cleanup;
+ (int)bluetoothStatus;
+ (void)turnBluetoothOn;
+ (int)_directBTStatus;
+ (Class)_bluetoothManagerClass;
+ (void)_btPowerStateChanged:(id)a0;
+ (int)_determineBluetoothStatus;

@end
