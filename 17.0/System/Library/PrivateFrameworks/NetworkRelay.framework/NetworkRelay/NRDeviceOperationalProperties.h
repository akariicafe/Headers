@class NSArray;

@interface NRDeviceOperationalProperties : NRDeviceProperties

@property (nonatomic) unsigned short version;
@property (nonatomic) BOOL providesPhoneCallRelaySupport;
@property (nonatomic) BOOL isReachableOverWiFi;
@property (nonatomic) BOOL handlesLinkRecommendations;
@property (nonatomic) BOOL allowsPermittedClientsOnly;
@property (nonatomic) BOOL allowsDirectToCloud;
@property (nonatomic) unsigned long long proxyCapability;
@property (nonatomic) unsigned long long bluetoothRole;
@property (nonatomic) unsigned long long bluetoothEndpointType;
@property (retain, nonatomic) NSArray *allowedLinkTypes;
@property (retain, nonatomic) NSArray *allowedLinkSubtypes;
@property (nonatomic) BOOL requiresReachability;
@property (nonatomic) BOOL proxyProviderRequiresWiFi;

+ (BOOL)supportsSecureCoding;
+ (id)copyPropertiesForDefaultPairedPhone;
+ (id)copyPropertiesForDefaultPairedWatch;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)resolve;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeProperties:(id)a0;

@end
