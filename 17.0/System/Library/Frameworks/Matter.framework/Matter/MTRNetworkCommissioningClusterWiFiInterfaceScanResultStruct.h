@class NSNumber, NSData;

@interface MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *security;
@property (copy, nonatomic) NSData *ssid;
@property (copy, nonatomic) NSData *bssid;
@property (copy, nonatomic) NSNumber *channel;
@property (copy, nonatomic) NSNumber *wiFiBand;
@property (copy, nonatomic) NSNumber *rssi;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
