@interface MRGetVolumeMutedResultMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) BOOL muted;

- (unsigned long long)type;
- (id)initWithMuted:(BOOL)a0;

@end
