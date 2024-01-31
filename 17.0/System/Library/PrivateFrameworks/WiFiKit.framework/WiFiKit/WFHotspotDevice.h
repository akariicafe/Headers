@class NSString, SFRemoteHotspotDevice;

@interface WFHotspotDevice : NSObject <WFNetworkListRecord>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SFRemoteHotspotDevice *hotspotDevice;
@property (copy, nonatomic) NSString *ssid;

- (BOOL)prominentDisplay;
- (id)lastJoinedDate;
- (BOOL)shouldShowInMyNetworkList;
- (void)setScaledRSSI:(float)a0;
- (BOOL)isHotspot20;
- (BOOL)isEquivalentRecord:(id)a0;
- (BOOL)_isEqualToHotspotDevice:(id)a0;
- (id)hotspotBatteryLife;
- (BOOL)isSecure;
- (BOOL)iOSHotspot;
- (id)hotspotCellularProtocol;
- (long long)securityMode;
- (BOOL)isPopular;
- (BOOL)canBeDisplayedAsCurrent;
- (BOOL)isUnconfiguredAccessory;
- (float)scaledRSSI;
- (BOOL)isAdhoc;
- (id)hotspotSignalStrength;
- (unsigned long long)signalBars;
- (BOOL)isKnown;
- (id)init;
- (BOOL)isEnterprise;
- (BOOL)isInstantHotspot;
- (long long)rssi;
- (BOOL)_isEqualToNetwork:(id)a0;
- (id)subtitle;
- (void).cxx_destruct;
- (unsigned long long)uniqueIdentifier;
- (id)title;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldShowInKnownNetworkList;
- (id)initWithHotspotDevice:(id)a0;

@end
