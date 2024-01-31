@class NSNumber, NSData;

@interface MTRNetworkCommissioningClusterWiFiInterfaceScanResult : MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct

@property (copy, nonatomic) NSNumber *security;
@property (copy, nonatomic) NSData *ssid;
@property (copy, nonatomic) NSData *bssid;
@property (copy, nonatomic) NSNumber *channel;
@property (copy, nonatomic) NSNumber *wiFiBand;
@property (copy, nonatomic) NSNumber *rssi;

@end
