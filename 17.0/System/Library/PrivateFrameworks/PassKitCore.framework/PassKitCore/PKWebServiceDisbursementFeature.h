@class NSSet;

@interface PKWebServiceDisbursementFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSSet *supportedNetworks;

+ (id)disbursementFeatureWithWebService:(id)a0;
+ (id)fallbackSupportedNetworksIfNoFeatureFound;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;
- (id)initWithSupportedNetworks:(id)a0;

@end
