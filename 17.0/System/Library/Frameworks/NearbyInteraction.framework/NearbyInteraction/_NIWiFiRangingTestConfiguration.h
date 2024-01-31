@class NIDiscoveryToken, NSDictionary, NSArray;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration

@property (readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (copy) NSArray *monitoredRegions;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDiscoveryToken:(id)a0 wifiRangingParameters:(id)a1 regions:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
