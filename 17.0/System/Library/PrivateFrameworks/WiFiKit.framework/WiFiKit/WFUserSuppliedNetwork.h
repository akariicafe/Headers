@class NSString;

@interface WFUserSuppliedNetwork : NSObject <WFNetworkListRecord>

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long security;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hotspotBatteryLife;
- (BOOL)isSecure;
- (BOOL)iOSHotspot;
- (id)hotspotCellularProtocol;
- (BOOL)canBeDisplayedAsCurrent;
- (BOOL)isUnconfiguredAccessory;
- (float)scaledRSSI;
- (BOOL)isAdhoc;
- (id)hotspotSignalStrength;
- (unsigned long long)signalBars;
- (BOOL)isEnterprise;
- (BOOL)isInstantHotspot;
- (long long)rssi;
- (id)subtitle;
- (void).cxx_destruct;
- (id)title;

@end
