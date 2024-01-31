@interface MRGetVolumeResultMessage : MRProtocolMessage

@property (readonly, nonatomic) float volume;

- (id)initWithVolume:(float)a0;
- (unsigned long long)type;

@end
