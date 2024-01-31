@class NSSet;

@interface MSPSharedTripReceiverCapabilities : NSObject <NSCopying> {
    NSSet *_supportedProperties;
    NSSet *_unsupportedProperties;
}

@property (readonly, nonatomic) BOOL supportsRoutingPathLeg;
@property (readonly, nonatomic) BOOL supportsWaypointRouteSharing;

+ (id)allKnownReceiverCapabilities;
+ (void)enumerateKnownReceiverCapabilityConfigurationsForState:(id)a0 withBlock:(id /* block */)a1;
+ (void)enumerateReceiverCapabilityConfigurations:(id)a0 forState:(id)a1 withBlock:(id /* block */)a2;
+ (void)fetchReceiverCapabilitiesForDestinations:(id)a0 completion:(id /* block */)a1;
+ (id)legacyReceiverCapabilities;
+ (id)starskyReceiverCapabilities;
+ (id)sydromeReceiverCapabilities;
+ (id)unrestrictedReceiverCapabilities;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)idsSendMessageOptions;
- (id)initWithIDSEndpointCapabilities:(id)a0;
- (id)initWithRegistrationPropertiesSupported:(id)a0 propertiesUnsupported:(id)a1;

@end
