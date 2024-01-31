@class NSData, NSNumber;

@interface HMMTRWiFiScanResult : NSObject

@property (readonly, nonatomic) NSData *ssid;
@property (readonly, nonatomic) NSNumber *rssi;
@property (readonly, nonatomic) NSNumber *security;
@property (readonly, nonatomic) NSNumber *band;

- (void).cxx_destruct;
- (id)initWithSSID:(id)a0 rssi:(id)a1 security:(unsigned char)a2 band:(unsigned char)a3;
- (id)initWithMTRNetworkCommissioningClusterWiFiInterfaceScanResult:(id)a0;

@end
