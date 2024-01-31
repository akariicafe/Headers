@class NSString;

@interface MRGetVolumeMutedMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;

- (id)initWithOutputDeviceUID:(id)a0;
- (unsigned long long)type;

@end
