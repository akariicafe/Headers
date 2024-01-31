@class NSArray, MRAVRoutingDiscoverySessionConfiguration;

@interface MRDiscoveryUpdateOutputDevicesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;

- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithOutputDevices:(id)a0 configuration:(id)a1;

@end
