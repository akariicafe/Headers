@interface _CDNetworkContext : NSObject

+ (long long)wiredInterfaceClass:(id)a0;
+ (long long)cellQuality:(id)a0;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (id)predictionKey;
+ (id)keyPathForCellConnectionStatus;
+ (id)uploadPowerCostKey;
+ (long long)cellInterfaceClass:(id)a0;
+ (BOOL)networkingAvailable:(id)a0;
+ (id)interfaceUpKey;
+ (long long)cellUploadCost:(id)a0;
+ (id)downloadPowerCostKey;
+ (id)keyPathForWiredConnectionStatus;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (id)connectionQualityKey;
+ (long long)wifiInterfaceClass:(id)a0;
+ (id)interfaceClassKey;
+ (long long)wifiQuality:(id)a0;
+ (id)loiKey;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (long long)wiredQuality:(id)a0;
+ (long long)cellDownloadCost:(id)a0;
+ (id)keyPathForWiFiConnectionStatus;

@end
