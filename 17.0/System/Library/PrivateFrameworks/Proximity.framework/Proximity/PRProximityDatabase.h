@interface PRProximityDatabase : NSObject

+ (char)getDeviceBtRxOffsetFromModel:(long long)a0;
+ (char)getDeviceBtTxPowerFromModel:(long long)a0;
+ (id)getDeviceData;
+ (long long)getPRDeviceModelFromModelId:(id)a0;
+ (BOOL)getProximityDeviceParameters:(id *)a0 forDeviceModel:(id)a1 withError:(id *)a2;
+ (long long)getScannerDeviceModel;

- (id)init;

@end
