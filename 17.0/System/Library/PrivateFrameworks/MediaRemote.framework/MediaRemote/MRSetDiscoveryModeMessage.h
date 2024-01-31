@class MRAVRoutingDiscoverySessionConfiguration;

@interface MRSetDiscoveryModeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int mode;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;

- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithMode:(unsigned int)a0 configuration:(id)a1;
- (id)initWithMode:(unsigned int)a0 features:(unsigned int)a1;

@end
