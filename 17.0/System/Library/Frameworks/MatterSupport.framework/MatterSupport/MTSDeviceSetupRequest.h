@class MTRSetupPayload, NSString, MTSDeviceSetupTopology, NSDictionary;
@protocol MTDeviceSetupRequestSwiftWrapper;

@interface MTSDeviceSetupRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<MTDeviceSetupRequestSwiftWrapper> wrappedRequest;
@property (readonly) MTSDeviceSetupTopology *topology;
@property (readonly, copy) NSString *ecosystemName;
@property (readonly) BOOL shouldScanNetworks;
@property (readonly) MTRSetupPayload *setupPayload;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWrappedRequest:(id)a0;
- (id)initWithEcosystemName:(id)a0 homeNames:(id)a1 blockedDevicePairings:(id)a2;
- (id)initWithSerializedRequest:(id)a0;
- (BOOL)shouldShowDeviceWithUUID:(id)a0 vendorID:(id)a1 productID:(id)a2 serialNumber:(id)a3;
- (BOOL)shouldShowDeviceWithUUID:(id)a0 vendorID:(id)a1 productID:(id)a2 serialNumber:(id)a3 rootPublicKey:(id)a4 nodeID:(id)a5;

@end
