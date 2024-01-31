@class PKDiscoveryManifest;

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse

@property (readonly, nonatomic) PKDiscoveryManifest *manifest;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithManifest:(id)a0;

@end
