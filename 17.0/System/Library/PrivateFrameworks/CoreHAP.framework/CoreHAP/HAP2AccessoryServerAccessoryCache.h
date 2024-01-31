@class NSDictionary, NSNumber, HAPBLEPeripheralInfo;

@interface HAP2AccessoryServerAccessoryCache : HAP2LoggingObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo;
@property (retain, nonatomic) NSDictionary *accessoryCache;
@property (retain, nonatomic) NSNumber *sleepInterval;
@property (readonly, nonatomic) NSNumber *metadataVersion;

+ (id)accessoryCacheForAccessories:(id)a0;
+ (id)peripheralInfoFromMetadata:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBLEPeripheralInfo:(id)a0 cachedAccessories:(id)a1 sleepInterval:(id)a2 metadataVersion:(id)a3;
- (id)initWithMetadata:(id)a0 discoveredAccessories:(id)a1 sleepInterval:(id)a2;
- (void)invalidateAccessoryCache;
- (void)updateWithMetadata:(id)a0 discoveredAccessories:(id)a1;

@end
