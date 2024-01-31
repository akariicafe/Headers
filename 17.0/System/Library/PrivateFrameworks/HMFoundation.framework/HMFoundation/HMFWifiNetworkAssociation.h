@class HMFMACAddress, NSString;

@interface HMFWifiNetworkAssociation : HMFObject

@property (readonly) HMFMACAddress *MACAddress;
@property (readonly) NSString *SSID;
@property (readonly) HMFMACAddress *BSSID;
@property (readonly) NSString *gatewayIPAddress;
@property (readonly) HMFMACAddress *gatewayMACAddress;

- (void).cxx_destruct;
- (id)initWithMACAddress:(id)a0 SSID:(id)a1 BSSID:(id)a2 gatewayIPAddress:(id)a3 gatewayMACAddress:(id)a4;

@end
