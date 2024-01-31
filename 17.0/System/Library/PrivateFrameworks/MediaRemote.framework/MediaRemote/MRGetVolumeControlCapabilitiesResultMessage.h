@interface MRGetVolumeControlCapabilitiesResultMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int capabilities;

- (id)initWithCapabilities:(unsigned int)a0;
- (unsigned long long)type;

@end
