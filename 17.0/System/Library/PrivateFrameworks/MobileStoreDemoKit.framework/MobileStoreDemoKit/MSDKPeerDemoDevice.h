@class NSString, MSDRapportDevice, MSDKPeerDemoEnvironment;

@interface MSDKPeerDemoDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MSDRapportDevice *device;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL pairingMode;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL isInBubble;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic) long long batteryCapacity;
@property (retain, nonatomic) NSString *wifiNetworkName;
@property (nonatomic) long long wifiSignalStrength;
@property (retain, nonatomic) NSString *iCloudAccountName;
@property (retain, nonatomic) MSDKPeerDemoEnvironment *activeEnvironment;
@property (nonatomic) float mainVolume;
@property (nonatomic) float environmentVolume;
@property (nonatomic) float phoneCallVolume;
@property (nonatomic) float audioVideoVolume;
@property (nonatomic) BOOL contentFrozen;
@property (nonatomic) BOOL airPlayAssistedReady;
@property (nonatomic) BOOL thermalMitigationNeeded;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceProperties:(id)a0;
- (void)refreshDevicePropertiesUsingProperties:(id)a0;

@end
