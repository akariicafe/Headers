@class NSString;

@interface MRVolumeMutedDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithMuted:(BOOL)a0 outputDeviceUID:(id)a1;

@end
